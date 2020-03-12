local CCommon = require "common"
local Object = require "object"

function main()
    -- common
    CCommon.Test()

    local obj = Object.New()
    assert(obj:GetValue() == 0)
    obj:SetValue(42)
    assert(obj:GetValue() == 42)

    obj:Free()
end

main()

print "ALL TEST PASS"