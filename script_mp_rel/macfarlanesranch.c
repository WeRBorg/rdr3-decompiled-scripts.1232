#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2395.549f, -2409.981f, 35f, 0f, 0f, -2f, 115f, 87f, 50f, "m_volMacFarlanesRanch");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2366.904f, -2392.304f, 63.54964f, 0f, 0f, 80.66905f, 8.038614f, 4.266712f, 16.92971f, "MacFarlanes' Ranch - m_volRancherThreat");
		iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_22, iLocal_23);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -2397.539f, -2380.358f, 63.54964f, 0f, 0f, 69.87277f, 10.05736f, 10.47319f, 16.92971f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_22, -2455.174f, -2384.14f, 35f, 0f, 0f, 25.5349f, 24.66208f, 30.76534f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_22, -2412.317f, -2374.972f, 63.25839f, 0f, 0f, -32.90815f, 13.07416f, 14.51878f, 9.688599f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2432.721f, -2360.609f, 66.342f, 0f, 0f, -59.51217f, 44.12811f, 56.53022f, 19.75536f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2428.935f, -2393.028f, 64.86296f, 0f, 0f, 30.36721f, 35.19614f, 20.94381f, 14.33946f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_22, -2405.119f, -2471.914f, 63.25839f, 0f, 0f, 16.82132f, 13.84418f, 7.762568f, 9.688599f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2418.961f, -2436.719f, 63.54964f, 0f, 0f, 22.63921f, 15.31493f, 15.94952f, 16.92971f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2407.512f, -2449.14f, 64.5022f, 0f, 0f, 48.91291f, 13.99343f, 21.49771f, 12.90299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2416.311f, -2452.443f, 64.20742f, 0f, 0f, 3.371748f, 14.65324f, 19.53584f, 12.77374f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2399.068f, -2464.15f, 64.86296f, 0f, 0f, 18.69488f, 16.30252f, 23.22957f, 14.33946f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2414.51f, -2467.064f, 61.83258f, 0f, 0f, -78.00346f, 14.14975f, 15.2253f, 17.07607f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -2397.539f, -2380.358f, 63.54964f, 0f, 0f, 69.87277f, 10.05736f, 10.47319f, 16.92971f);
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_22);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2407.745f, -2461.009f, 63.25839f, 0f, 0f, 21.61882f, 21.58509f, 25.8055f, 9.688599f);
		VOLUME::_0x39816F6F94F385AD(iLocal_20, -2418.961f, -2436.719f, 63.54964f, 0f, 0f, 22.63921f, 19.83966f, 22.38591f, 16.92971f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2395.625f, -2381.142f, 35f, 0f, 0f, 29.59317f, 9.273087f, 11.13545f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2424.377f, -2394.976f, 35f, 0f, 0f, 122.1515f, 8.7505f, 40.19938f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2409.492f, -2351.147f, 35f, 0f, 0f, 29.59317f, 9.273087f, 29.27413f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2466.104f, -2392.814f, 35f, 0f, 0f, 29.59317f, 12.03543f, 28.7101f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, -2450.099f, -2347.51f, 35f, 0f, 0f, 122.1515f, 8.311909f, 37.10839f, 39.15789f);
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volRancherRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_20);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, -2395.549f, -2409.981f, 35f, 0f, 0f, -2f, 115f, 87f, 50f);
		sLocal_19 = "MACFARLANES_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_19);
		LAW::_0xA8A74AA79FB67159(sLocal_19, iLocal_18);
		LAW::_0x8C598A930F471938(sLocal_19, iLocal_21);
		LAW::_0xA1B0E6301E2E02A6(sLocal_19, iLocal_23);
		LAW::_0x35815F372D43E1E5(sLocal_19, iLocal_22);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_19, iLocal_20);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_19, -2421f, -2358.5f, 64.1f);
		LAW::_SET_GUARD_ZONE_POSITION_2(sLocal_19, -2408.5f, -2470.6f, 62.8f);
	}
	return true;
}

void func_30(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(894, iLocal_22, 1);
	aggregate.annesburg.func_67(889, iLocal_22, 0);
	aggregate.annesburg.func_67(890, iLocal_22, 0);
	aggregate.annesburg.func_67(891, iLocal_22, 0);
	aggregate.annesburg.func_67(892, iLocal_22, 0);
	aggregate.annesburg.func_67(893, iLocal_22, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_22, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate.aberdeenpigfarm.func_120(893));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate.aberdeenpigfarm.func_120(889));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate.aberdeenpigfarm.func_120(890));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate.aberdeenpigfarm.func_120(891));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate.aberdeenpigfarm.func_120(892));
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(363792844);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(886569692);
	iVar2 = _NAMESPACE48::_0x112DDF56300BC6E5(1292930074);
	iVar3 = _NAMESPACE48::_0x112DDF56300BC6E5(-677310285);
	iVar4 = _NAMESPACE48::_0x112DDF56300BC6E5(-310363023);
	iVar5 = _NAMESPACE48::_0x112DDF56300BC6E5(-66463356);
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar1) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar2))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar2) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar3))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar3) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar4))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar4) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar5))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar5) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		}
		else if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar5) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
}

void func_81(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_19);
	aggregate.annesburg.func_166(iLocal_20);
	aggregate.annesburg.func_166(iLocal_23);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_22))
	{
		VOLUME::_0x998202B206872672(iLocal_22);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_22);
		VOLUME::_0x43F867EF5C463A53(iLocal_22);
	}
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
}

