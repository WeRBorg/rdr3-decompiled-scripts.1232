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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	fLocal_17 = 7f;
	fLocal_18 = 0f;
	fLocal_19 = 0f;
	fLocal_20 = 100f;
	fLocal_21 = 100f;
	fLocal_22 = 0f;
	func_1();
	func_2();
	func_3();
	if (func_4() != -1)
	{
	}
	else
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(-402695257, "BigValley/BGV_Trapper_1");
		if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257)))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257));
		}
	}
	func_5();
	bVar0 = true;
	while (bVar0)
	{
		if (func_4() != -1)
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (func_6(1, 1))
			{
				bVar0 = false;
			}
		}
		else
		{
			func_7();
		}
		BUILTIN::WAIT(0);
	}
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { fLocal_17, fLocal_18, fLocal_19 };
	vVar3 = { fLocal_20, fLocal_21, fLocal_22 };
	FLOCK::_0xF2CCA7B68CFAB2B9(904876610, -1927.953f, 412.0278f, 180f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFortRiggsRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1560f, -935f, 85f, 0f, 0f, 0f, 50f, 55f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1567.5f, -907.5f, 85f, 0f, 0f, 40f, 50f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1605f, -882.5f, 85f, 0f, 0f, 0f, 50f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1577f, -885.5f, 85f, 0f, 0f, -25.5f, 21f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1602.5f, -917.5f, 85f, 0f, 0f, 0f, 35f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1592.5f, -935.5f, 85f, 0f, 0f, 55f, 35f, 43f, 20f);
	func_9(iLocal_23, 0, 0);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2180f, 750f, 125f, 0f, 0f, 0f, 90f, 90f, 25f, "m_volHangingDogRanchRestriction");
	func_9(iLocal_24, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-865f, -760f, 75f, 0f, 0f, 0f, 60f, 60f, 30f, "m_volLoneMuleSteadRestriction");
	func_9(iLocal_25, 0, 0);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1898f, -238.5f, 188f, 0f, 0f, 16.5f, 14f, 59f, 24.5f, "m_volMountainRiverRestriction");
	func_9(iLocal_26, 0, 0);
	iLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1897.5f, 1370f, 215f, 0f, 0f, 0f, 75f, 75f, 25f, "m_volNorthernMiningTownRestriction");
	func_9(iLocal_27, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-617f, -40.2f, 80f, 0f, 0f, 0f, 43.7f, 43.7f, 13f, "m_volPaintedSkyRestriction");
	func_9(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1825f, 655f, 120f, 0f, 0f, 0f, 45f, 45f, 20f, "m_volWatsonsCabinRestriction");
	func_9(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554f, 257.4f, 116f, 0f, 0f, 14f, 45f, 45f, 25f, "m_volShepherdsRiseRestriction");
	func_9(iLocal_30, 0, 0);
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStrawberryRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -1820f, -365f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -1765f, -420f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	func_10(iLocal_31);
	iLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1813.34f, -580.26f, 150f, 0f, 0f, 65f, 52f, 31f, 25f, "m_volStrawberryHorseShopRestriction");
	func_10(iLocal_32);
	if (func_11())
	{
		iLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPronghornRanchRestriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2530.598f, 340.663f, 153f, 0f, 0f, 0f, 22f, 22f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2530.057f, 471.4158f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2590.521f, 470.2267f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2572.795f, 343.0885f, 153f, 0f, 0f, 0f, 31f, 31f, 15f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2541.964f, 408.2656f, 153f, 0f, 0f, -3.75f, 75f, 132f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2574.994f, 411.635f, 153f, 0f, 0f, 7.5f, 75f, 128f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2555.338f, 340.0247f, 153f, 0f, 0f, 9.25f, 43f, 50f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2559.616f, 476.0391f, 153f, 0f, 0f, 1.5f, 61f, 50f, 30f);
		func_9(iLocal_33, 0, 0);
	}
	iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1301.288f, 403.2579f, 102.4782f, 0f, 0f, -27f, 15f, 25f, 15f, "m_volWallaceStationRestriction");
	func_9(iLocal_34, 0, 0);
	iLocal_35 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_35, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_35, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_35, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_12(iLocal_35, 0, 0);
	iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2172.987f, -253.5375f, 195f, 0f, 0f, -6f, 11f, 15f, 10f, "m_volRockCarvingsRestriction");
	func_9(iLocal_36, 0, 0);
	iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossingRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_37, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_37, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	func_13(iLocal_37, 0, 0);
}

int func_4()
{
	return Global_1572887->f_13;
}

void func_5()
{
	func_14(1963415953, 1);
	func_14(-1447214344, 1);
}

int func_6(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (iParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (iParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			
			case 1:
				return 1;
			
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			
			case 4:
				return 1;
			
			case 3:
				return 1;
			
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(-703427271);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return;
	}
	if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
	{
		if (!func_15(976539083))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(71064384, Global_36))
			{
				func_16(976539083);
			}
		}
	}
	else if (func_15(976539083))
	{
		if (!STREAMING::_0x73B40D97D7BAAD77(71064384, Global_36))
		{
			func_17(976539083);
		}
	}
}

void func_8()
{
	FLOCK::_0xFB16F08F47B83B4C(904876610);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_18(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
}

int func_11()
{
	return 0;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_18(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_18(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_14(int iParam0, int iParam1)
{
	func_19(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_20(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_21(iVar1))
	{
		if (Global_1070355->f_17915.f_24 && !func_22(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070355->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2);
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_20(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_20(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_19(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_23(iParam0, 0, 0);
	if (func_24(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_25(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_26(iParam0, 1);
			}
			else
			{
				func_27(iParam0, 1);
			}
		}
		else
		{
			func_28(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_29())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		
		case -2141419899:
			return 405;
		
		case -2106445152:
			return 277;
		
		case -2106214197:
			return 102;
		
		case -2101264851:
			return 192;
		
		case -2100409704:
			return 471;
		
		case -2073072369:
			return 57;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 395;
		
		case -2058120606:
			return 194;
		
		case -2056579774:
			return 465;
		
		case -2043909922:
			return 339;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 90;
		
		case -2022369555:
			return 251;
		
		case -2021582629:
			return 110;
		
		case -2020023971:
			return 263;
		
		case -1957523409:
			return 205;
		
		case -1952856164:
			return 163;
		
		case -1949204933:
			return 261;
		
		case -1943367752:
			return 388;
		
		case -1943021821:
			return 336;
		
		case -1939389836:
			return 417;
		
		case -1932919229:
			return 429;
		
		case -1925798111:
			return 41;
		
		case -1914141706:
			return 440;
		
		case -1906892166:
			return 404;
		
		case -1882707460:
			return 464;
		
		case -1861414976:
			return 381;
		
		case -1852605133:
			return 10;
		
		case -1848799275:
			return 410;
		
		case -1847672446:
			return 312;
		
		case -1842033327:
			return 505;
		
		case -1840704908:
			return 274;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 55;
		
		case -1835851517:
			return 54;
		
		case -1831552326:
			return 121;
		
		case -1827602683:
			return 447;
		
		case -1825294305:
			return 252;
		
		case -1824738758:
			return 262;
		
		case -1818850842:
			return 239;
		
		case -1808329564:
			return 412;
		
		case -1799960545:
			return 243;
		
		case -1764522338:
			return 308;
		
		case -1763509974:
			return 139;
		
		case -1753769127:
			return 399;
		
		case -1749433374:
			return 480;
		
		case -1749043433:
			return 525;
		
		case -1741667789:
			return 62;
		
		case -1738165526:
			return 3;
		
		case -1719055206:
			return 520;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 59;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 220;
		
		case -1705799799:
			return 422;
		
		case -1700452710:
			return 317;
		
		case -1684974589:
			return 467;
		
		case -1674179981:
			return 53;
		
		case -1673998598:
			return 528;
		
		case -1666278201:
			return 33;
		
		case -1664435783:
			return 487;
		
		case -1624627591:
			return 439;
		
		case -1612662716:
			return 198;
		
		case -1610966108:
			return 355;
		
		case -1608141409:
			return 539;
		
		case -1585840296:
			return 337;
		
		case -1582926490:
			return 144;
		
		case -1579419919:
			return 145;
		
		case -1578292898:
			return 435;
		
		case -1573753524:
			return 504;
		
		case -1558439474:
			return 286;
		
		case -1556041029:
			return 411;
		
		case -1547280108:
			return 519;
		
		case -1532284567:
			return 114;
		
		case -1530132748:
			return 296;
		
		case -1524512402:
			return 206;
		
		case -1523910291:
			return 153;
		
		case -1502194556:
			return 524;
		
		case -1462313959:
			return 463;
		
		case -1455998786:
			return 371;
		
		case -1447311849:
			return 321;
		
		case -1445041595:
			return 529;
		
		case -1442844448:
			return 466;
		
		case -1436021162:
			return 170;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1422877860:
			return 473;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 71;
		
		case -1405998267:
			return 103;
		
		case -1395855864:
			return 479;
		
		case -1387772214:
			return 408;
		
		case -1378911044:
			return 476;
		
		case -1369678628:
			return 488;
		
		case -1344601768:
			return 348;
		
		case -1341750998:
			return 477;
		
		case -1340339190:
			return 363;
		
		case -1339871203:
			return 533;
		
		case -1329135070:
			return 138;
		
		case -1319875891:
			return 438;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 353;
		
		case -1290997627:
			return 462;
		
		case -1287894233:
			return 427;
		
		case -1283202000:
			return 354;
		
		case -1282804314:
			return 255;
		
		case -1278074582:
			return 169;
		
		case -1271608261:
			return 96;
		
		case -1262828457:
			return 424;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 285;
		
		case -1236261996:
			return 222;
		
		case -1232809834:
			return 111;
		
		case -1230112817:
			return 168;
		
		case -1223121209:
			return 124;
		
		case -1215445344:
			return 129;
		
		case -1209597203:
			return 366;
		
		case -1206122982:
			return 154;
		
		case -1187950766:
			return 45;
		
		case -1181950077:
			return 401;
		
		case -1179948750:
			return 134;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 221;
		
		case -1161687045:
			return 392;
		
		case -1151084372:
			return 122;
		
		case -1145519186:
			return 98;
		
		case -1145153057:
			return 340;
		
		case -1124061431:
			return 229;
		
		case -1123615607:
			return 29;
		
		case -1120447016:
			return 444;
		
		case -1095341658:
			return 409;
		
		case -1080627546:
			return 314;
		
		case -1077783786:
			return 191;
		
		case -1063147448:
			return 149;
		
		case -1062490780:
			return 77;
		
		case -1060078174:
			return 226;
		
		case -1056767524:
			return 174;
		
		case -1053549743:
			return 56;
		
		case -1042021329:
			return 383;
		
		case -1029225159:
			return 104;
		
		case -1023919011:
			return 432;
		
		case -1014145132:
			return 273;
		
		case -1004266677:
			return 461;
		
		case -978957786:
			return 237;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 150;
		
		case -947815572:
			return 400;
		
		case -941648233:
			return 512;
		
		case -939420910:
			return 44;
		
		case -931337253:
			return 425;
		
		case -925071604:
			return 542;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 369;
		
		case -897750037:
			return 367;
		
		case -895307590:
			return 501;
		
		case -895073533:
			return 394;
		
		case -889906510:
			return 390;
		
		case -888632790:
			return 506;
		
		case -879507474:
			return 223;
		
		case -868076593:
			return 82;
		
		case -857964358:
			return 81;
		
		case -853383233:
			return 63;
		
		case -852602679:
			return 433;
		
		case -851626677:
			return 372;
		
		case -839820438:
			return 420;
		
		case -828139293:
			return 246;
		
		case -812641169:
			return 535;
		
		case -811637947:
			return 232;
		
		case -800891377:
			return 494;
		
		case -797689456:
			return 515;
		
		case -796902762:
			return 86;
		
		case -792853067:
			return 240;
		
		case -789397228:
			return 248;
		
		case -785605431:
			return 236;
		
		case -781631220:
			return 328;
		
		case -764163380:
			return 215;
		
		case -748969569:
			return 76;
		
		case -741351766:
			return 58;
		
		case -736853952:
			return 302;
		
		case -734416508:
			return 373;
		
		case -729679654:
			return 531;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 356;
		
		case -683458244:
			return 78;
		
		case -677920206:
			return 459;
		
		case -666014935:
			return 155;
		
		case -664512648:
			return 65;
		
		case -664252410:
			return 188;
		
		case -644722288:
			return 247;
		
		case -640663440:
			return 320;
		
		case -639037538:
			return 183;
		
		case -635323621:
			return 513;
		
		case -632127260:
			return 343;
		
		case -630295963:
			return 495;
		
		case -628542779:
			return 69;
		
		case -622554983:
			return 306;
		
		case -618620429:
			return 185;
		
		case -604603161:
			return 472;
		
		case -591815673:
			return 384;
		
		case -583127403:
			return 507;
		
		case -574190021:
			return 493;
		
		case -554519756:
			return 536;
		
		case -545450213:
			return 313;
		
		case -538889627:
			return 173;
		
		case -538880323:
			return 172;
		
		case -534215902:
			return 128;
		
		case -524787708:
			return 380;
		
		case -524145696:
			return 115;
		
		case -523522517:
			return 300;
		
		case -515561750:
			return 225;
		
		case -510945576:
			return 338;
		
		case -503955743:
			return 235;
		
		case -502473159:
			return 326;
		
		case -502324015:
			return 8;
		
		case -500245243:
			return 516;
		
		case -492731190:
			return 419;
		
		case -491981251:
			return 184;
		
		case -489737721:
			return 402;
		
		case -468693731:
			return 109;
		
		case -464836488:
			return 254;
		
		case -460024530:
			return 350;
		
		case -448554447:
			return 532;
		
		case -441204543:
			return 534;
		
		case -434590080:
			return 212;
		
		case -414883443:
			return 460;
		
		case -404698347:
			return 202;
		
		case -397760715:
			return 141;
		
		case -396624371:
			return 374;
		
		case -389056691:
			return 257;
		
		case -381925743:
			return 508;
		
		case -371827125:
			return 389;
		
		case -364475655:
			return 430;
		
		case -360036154:
			return 304;
		
		case -356975260:
			return 101;
		
		case -355531636:
			return 370;
		
		case -350863510:
			return 160;
		
		case -349064220:
			return 298;
		
		case -334729750:
			return 67;
		
		case -333135263:
			return 334;
		
		case -330120947:
			return 333;
		
		case -329176208:
			return 492;
		
		case -311373772:
			return 540;
		
		case -306246697:
			return 311;
		
		case -299522880:
			return 319;
		
		case -297483764:
			return 434;
		
		case -279765076:
			return 346;
		
		case -270094635:
			return 253;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 231;
		
		case -254562075:
			return 130;
		
		case -243260793:
			return 418;
		
		case -238080464:
			return 119;
		
		case -233743613:
			return 258;
		
		case -226366310:
			return 523;
		
		case -223469678:
			return 201;
		
		case -220282381:
			return 137;
		
		case -211583122:
			return 517;
		
		case -209894800:
			return 345;
		
		case -207792846:
			return 483;
		
		case -191424539:
			return 147;
		
		case -182889087:
			return 175;
		
		case -154581735:
			return 294;
		
		case -150493654:
			return 95;
		
		case -129643890:
			return 11;
		
		case -110352060:
			return 431;
		
		case -108780030:
			return 351;
		
		case -108307814:
			return 28;
		
		case -102827640:
			return 403;
		
		case -101740709:
			return 499;
		
		case -99303535:
			return 165;
		
		case -90486812:
			return 491;
		
		case -89829333:
			return 423;
		
		case -86199844:
			return 143;
		
		case -80522843:
			return 152;
		
		case -76237062:
			return 309;
		
		case -75928821:
			return 509;
		
		case -75024673:
			return 244;
		
		case -74031276:
			return 441;
		
		case -70727482:
			return 453;
		
		case -63926460:
			return 87;
		
		case -61411516:
			return 358;
		
		case -38135693:
			return 468;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 275;
		
		case -9438024:
			return 127;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 151;
		
		case 8924991:
			return 282;
		
		case 16844748:
			return 406;
		
		case 26054262:
			return 323;
		
		case 26245360:
			return 224;
		
		case 38162571:
			return 72;
		
		case 52706132:
			return 230;
		
		case 54073871:
			return 74;
		
		case 61537448:
			return 541;
		
		case 64896505:
			return 391;
		
		case 74872959:
			return 331;
		
		case 84709454:
			return 454;
		
		case 93964309:
			return 396;
		
		case 94263042:
			return 276;
		
		case 106479759:
			return 99;
		
		case 141950038:
			return 112;
		
		case 148595040:
			return 530;
		
		case 153152452:
			return 84;
		
		case 168171957:
			return 181;
		
		case 171499483:
			return 268;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 228;
		
		case 210001842:
			return 60;
		
		case 215903338:
			return 490;
		
		case 224551212:
			return 140;
		
		case 227918160:
			return 180;
		
		case 229371495:
			return 327;
		
		case 235928616:
			return 271;
		
		case 237155783:
			return 518;
		
		case 249726958:
			return 162;
		
		case 269047710:
			return 52;
		
		case 273461605:
			return 79;
		
		case 280705402:
			return 93;
		
		case 282809459:
			return 117;
		
		case 299694527:
			return 260;
		
		case 300221584:
			return 136;
		
		case 302205488:
			return 322;
		
		case 311708813:
			return 195;
		
		case 320943355:
			return 131;
		
		case 321629486:
			return 510;
		
		case 330026330:
			return 64;
		
		case 345808947:
			return 272;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 266;
		
		case 373691918:
			return 186;
		
		case 374115931:
			return 88;
		
		case 404823609:
			return 485;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 171;
		
		case 409602249:
			return 278;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 288;
		
		case 420709909:
			return 42;
		
		case 424920933:
			return 545;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 196;
		
		case 439465264:
			return 106;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 287;
		
		case 449774763:
			return 214;
		
		case 459290420:
			return 316;
		
		case 468797819:
			return 342;
		
		case 469053995:
			return 218;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 219;
		
		case 478884033:
			return 146;
		
		case 479419429:
			return 290;
		
		case 509781469:
			return 378;
		
		case 514932331:
			return 233;
		
		case 522677506:
			return 264;
		
		case 526003171:
			return 393;
		
		case 527226204:
			return 157;
		
		case 544152906:
			return 113;
		
		case 559573222:
			return 238;
		
		case 560154875:
			return 456;
		
		case 565812320:
			return 448;
		
		case 582380806:
			return 359;
		
		case 588987611:
			return 177;
		
		case 589380360:
			return 341;
		
		case 618699440:
			return 75;
		
		case 619839857:
			return 376;
		
		case 630808005:
			return 126;
		
		case 640520536:
			return 470;
		
		case 642824856:
			return 482;
		
		case 651395116:
			return 279;
		
		case 664571177:
			return 297;
		
		case 665676602:
			return 281;
		
		case 673606600:
			return 500;
		
		case 689024866:
			return 132;
		
		case 689930684:
			return 204;
		
		case 704802028:
			return 176;
		
		case 715735881:
			return 484;
		
		case 723021499:
			return 250;
		
		case 730069127:
			return 475;
		
		case 747514327:
			return 382;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 107;
		
		case 784360470:
			return 362;
		
		case 791041526:
			return 18;
		
		case 799106423:
			return 455;
		
		case 803929300:
			return 469;
		
		case 804063423:
			return 503;
		
		case 817925178:
			return 227;
		
		case 826868753:
			return 474;
		
		case 831940854:
			return 407;
		
		case 846837291:
			return 451;
		
		case 865557632:
			return 537;
		
		case 868326136:
			return 270;
		
		case 883901517:
			return 385;
		
		case 885203519:
			return 315;
		
		case 885378256:
			return 379;
		
		case 885777893:
			return 375;
		
		case 896725436:
			return 511;
		
		case 929582877:
			return 368;
		
		case 931649776:
			return 211;
		
		case 932909855:
			return 283;
		
		case 943561238:
			return 416;
		
		case 945612176:
			return 234;
		
		case 965467037:
			return 344;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 295;
		
		case 982765715:
			return 443;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 120;
		
		case 1028084603:
			return 446;
		
		case 1032791043:
			return 502;
		
		case 1050128548:
			return 269;
		
		case 1064154891:
			return 108;
		
		case 1074873669:
			return 142;
		
		case 1112996351:
			return 538;
		
		case 1126565489:
			return 486;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 242;
		
		case 1153686207:
			return 452;
		
		case 1157309080:
			return 514;
		
		case 1159471771:
			return 361;
		
		case 1160698568:
			return 133;
		
		case 1164928979:
			return 156;
		
		case 1166612791:
			return 330;
		
		case 1167397384:
			return 292;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 217;
		
		case 1193080109:
			return 182;
		
		case 1195508693:
			return 543;
		
		case 1203043430:
			return 259;
		
		case 1205826474:
			return 83;
		
		case 1207048789:
			return 167;
		
		case 1213993593:
			return 158;
		
		case 1221801385:
			return 310;
		
		case 1232840551:
			return 481;
		
		case 1238086793:
			return 347;
		
		case 1248935549:
			return 415;
		
		case 1250636944:
			return 245;
		
		case 1279586666:
			return 449;
		
		case 1280406542:
			return 442;
		
		case 1287917122:
			return 387;
		
		case 1302228510:
			return 349;
		
		case 1306158345:
			return 199;
		
		case 1321892118:
			return 357;
		
		case 1325325699:
			return 421;
		
		case 1341699707:
			return 526;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 73;
		
		case 1352699670:
			return 256;
		
		case 1358491857:
			return 249;
		
		case 1360745816:
			return 80;
		
		case 1362354162:
			return 497;
		
		case 1376646519:
			return 210;
		
		case 1399676951:
			return 207;
		
		case 1410198831:
			return 209;
		
		case 1421300489:
			return 414;
		
		case 1433244935:
			return 164;
		
		case 1441416901:
			return 208;
		
		case 1453909576:
			return 123;
		
		case 1466547629:
			return 118;
		
		case 1478132521:
			return 303;
		
		case 1480425906:
			return 450;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 100;
		
		case 1488286867:
			return 280;
		
		case 1488453464:
			return 318;
		
		case 1494062795:
			return 426;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 70;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 166;
		
		case 1517904467:
			return 203;
		
		case 1517951665:
			return 436;
		
		case 1521272922:
			return 458;
		
		case 1522511407:
			return 265;
		
		case 1549124796:
			return 325;
		
		case 1557082963:
			return 161;
		
		case 1561093093:
			return 386;
		
		case 1582370975:
			return 332;
		
		case 1583012985:
			return 289;
		
		case 1591451572:
			return 301;
		
		case 1601722481:
			return 521;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 105;
		
		case 1626481264:
			return 116;
		
		case 1643531967:
			return 125;
		
		case 1649996811:
			return 179;
		
		case 1660024373:
			return 148;
		
		case 1665756137:
			return 91;
		
		case 1666964801:
			return 527;
		
		case 1691618738:
			return 66;
		
		case 1698972798:
			return 352;
		
		case 1703398561:
			return 365;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 329;
		
		case 1713221411:
			return 135;
		
		case 1743048395:
			return 213;
		
		case 1744443559:
			return 377;
		
		case 1766284049:
			return 92;
		
		case 1774060092:
			return 544;
		
		case 1776302352:
			return 299;
		
		case 1788424349:
			return 445;
		
		case 1812677765:
			return 398;
		
		case 1822001510:
			return 197;
		
		case 1846061697:
			return 97;
		
		case 1850082804:
			return 193;
		
		case 1866434585:
			return 413;
		
		case 1867912207:
			return 68;
		
		case 1881028477:
			return 364;
		
		case 1884271742:
			return 51;
		
		case 1891256113:
			return 437;
		
		case 1908151693:
			return 335;
		
		case 1926308480:
			return 94;
		
		case 1932172605:
			return 360;
		
		case 1944170089:
			return 159;
		
		case 1947931439:
			return 216;
		
		case 1952610440:
			return 200;
		
		case 1954026328:
			return 307;
		
		case 1982676972:
			return 89;
		
		case 2008888900:
			return 178;
		
		case 2013720626:
			return 489;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 187;
		
		case 2024121624:
			return 190;
		
		case 2024383613:
			return 305;
		
		case 2024769126:
			return 293;
		
		case 2037589949:
			return 61;
		
		case 2048790450:
			return 498;
		
		case 2051822093:
			return 284;
		
		case 2068208444:
			return 428;
		
		case 2068253437:
			return 478;
		
		case 2077022393:
			return 291;
		
		case 2079292950:
			return 457;
		
		case 2080210939:
			return 267;
		
		case 2091701359:
			return 39;
		
		case 2103908624:
			return 397;
		
		case 2109952320:
			return 189;
		
		case 2113625508:
			return 324;
		
		case 2127412005:
			return 496;
		
		case 2127577956:
			return 241;
		
		case 2136753624:
			return 85;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && iParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && iParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_24(int iParam0)
{
	if (func_31(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_25(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_26(int iParam0, int iParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_27(int iParam0, int iParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_28(int iParam0, int iParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_29()
{
	return 1;
}

int func_30(int iParam0)
{
	return func_32(iParam0) + 30;
}

bool func_31(int iParam0)
{
	return iParam0 != 0;
}

int func_32(int iParam0)
{
	return iParam0 * 31;
}

