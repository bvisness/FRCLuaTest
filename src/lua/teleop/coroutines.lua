require("utils.teleopcoroutine")

autoFeed = NewTeleopCoroutine(function ()
    local flywheelTimer = Timer:new()
    local feederTimer = Timer:new()

    -- wait for the flywheel to get up to speed (or too much time to elapse)
    flywheelTimer:start()
    while (
        shooter:getEncoder():getVelocity() < 4500
        and flywheelTimer:getElapsedTimeSeconds() < 1
    ) do
        shooter:set(1)
        coroutine.yield()
    end

    -- run just the feeder
    feederTimer:start()
    while feederTimer:getElapsedTimeSeconds() < 0.5 do
        feeder:set(1)
        coroutine.yield()
    end

    -- run both the feeder and the magazine
    while true do
        magazine:set(0.87)
        coroutine.yield()
    end
end)