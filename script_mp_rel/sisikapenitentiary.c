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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_24 = 20000;
	iLocal_27 = vScriptParam_0.x;
	iLocal_25 = vScriptParam_0.z;
	iLocal_29 = 0;
	if (Global_1901929->f_1.f_24 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_26 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_26)
		{
			iLocal_26 = 0;
			func_5(iLocal_27, &iLocal_25);
			switch (iLocal_25)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_28 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_25 = 1;
					}
					else
					{
						iLocal_25 = 2;
					}
					break;
				
				case 1:
					if (!func_1() || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						iLocal_29 = 0;
						iLocal_25 = 2;
					}
					break;
				
				case 2:
					func_6(iLocal_27);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_27)))
					{
						func_11(func_9(iLocal_27), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_12(iLocal_27));
					Global_1896608 = -1;
					iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
					iLocal_25 = 3;
					break;
				
				case 3:
					if (func_13() || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_27);
						iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
						iLocal_25 = 4;
					}
					break;
				
				case 4:
					if (func_15(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_27);
						iLocal_28 = (MISC::GET_GAME_TIMER() + iLocal_24);
						iLocal_25 = 5;
					}
					break;
				
				case 5:
					if (func_17(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_27);
						iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
						iLocal_25 = 7;
					}
					break;
				
				case 7:
					if (func_10(func_9(iLocal_27)))
					{
						if (func_19(func_9(iLocal_27), 4) && !iLocal_28 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_27, 4);
								iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
								iLocal_25 = 8;
							}
							Jump @813; //curOff = 529
							func_22(iLocal_27);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_27);
							func_30(iLocal_27);
							func_31();
							func_32();
							iLocal_25 = 9;
							Jump @813; //curOff = 597
							func_33(iLocal_27);
							func_34();
							iLocal_25 = 10;
							Jump @813; //curOff = 614
							func_35(Global_1896662);
							func_36(iLocal_27, Global_1896662);
							iLocal_25 = 11;
							Jump @813; //curOff = 639
							func_37(iLocal_27);
							func_21(iLocal_27, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_25 = 12;
							Jump @813; //curOff = 689
							if (func_40(iLocal_27))
							{
								iLocal_26 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(Global_1896662, iLocal_27);
							func_42(iLocal_27);
							func_21(iLocal_27, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_27 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_27 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_27 /*36*/])->f_12);
							}
							Jump @813; //curOff = 790
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_27 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_27 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (func_45() != -1)
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

int func_1()
{
	if (!iLocal_29)
	{
		if (&Global_1051089)
		{
			iLocal_29 = 1;
			return 1;
		}
		if (func_47() && func_48())
		{
			iLocal_29 = 1;
			return 1;
		}
		return 0;
	}
	if (&Global_1051089)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	iLocal_29 = 0;
	return 0;
}

void func_2()
{
	int iVar0;
	
	if (func_45() != -1)
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
		iVar0 = 0;
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

int func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893575->f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893575->f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1099293->f_644)
	{
		Global_1099293->f_644 = 1;
	}
}

void func_8()
{
	if (!Global_1070355->f_22101)
	{
		Global_1070355->f_22101 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	(*Global_1896610)[iParam0 /*2*/] = (Global_1896610[iParam0 /*2*/] || iParam1);
}

int func_12(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 40:
			iVar0 = -34953917;
			break;
		
		case 87:
			iVar0 = -1182515549;
			break;
		
		case 74:
			iVar0 = -180439396;
			break;
		
		case 66:
			iVar0 = -380981263;
			break;
		
		case 116:
			iVar0 = 960614592;
			break;
		
		case 5:
			iVar0 = -896916581;
			break;
		
		case 37:
			iVar0 = 503372696;
			break;
		
		case 111:
			iVar0 = 1004478670;
			break;
		
		case 26:
			iVar0 = -1545648199;
			break;
		
		case 81:
			iVar0 = -379634634;
			break;
		
		case 98:
			iVar0 = 288297518;
			break;
		
		case 60:
			iVar0 = 1812404612;
			break;
		
		case 83:
			iVar0 = 1827444358;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	iLocal_18 = ((*Global_1887327)[33 /*36*/])->f_5;
	iLocal_19 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3350.781f, -675.869f, 63.768f, 0f, 0f, 0f, 116.5f, 87.5f, 50f, "Sisika - m_volGTower");
	iVar0 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_19);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar0, 414726236);
	POPULATION::_0x7E6BC0B94F5928F0(iVar0, 16, 16);
	POPULATION::_0x0F1861101C9A9944(iVar0, true);
	POPULATION::_0x08892122769770D5(iVar0, true);
	POPULATION::_0x578E2FA64E847C60(iVar0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGBridge");
	VOLUME::_0x39816F6F94F385AD(iLocal_20, 3321.868f, -610.395f, 48.57418f, 0f, 0f, 40f, 15f, 75f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_20, 3319.213f, -584.038f, 47.83653f, 0f, 0f, 40f, 15f, 29f, 20f);
	iVar1 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_20);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar1, 414726236);
	POPULATION::_0x7E6BC0B94F5928F0(iVar1, 3, 3);
	POPULATION::_0x0F1861101C9A9944(iVar1, true);
	POPULATION::_0x08892122769770D5(iVar1, true);
	POPULATION::_0x578E2FA64E847C60(iVar1, 0);
	return 1;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

int func_15(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_16(int iParam0)
{
}

int func_17(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896610[iParam0 /*2*/] && iParam1) != 0;
}

int func_20(int iParam0)
{
	return func_53(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (Global_7888[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1070355->f_17941[iParam0 /*11*/] = (Global_1070355->f_17941[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

int func_24(int iParam0, bool bParam1)
{
	if (func_54(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_55(5000))
		{
			return 1;
		}
	}
	switch (func_57(func_56(0)))
	{
		case -1:
			return 0;
		
		case 2:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_25()
{
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	iParam0 = iParam0;
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	iParam0 = iParam0;
}

void func_34()
{
	if (!Global_1893575->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1893575->f_182, Global_1893575->f_183, Global_1893575->f_184, Global_1893575->f_185);
	}
}

void func_35(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_58(uParam1, iLocal_18, 1);
}

void func_37(int iParam0)
{
	if (!func_59(iParam0))
	{
		return;
	}
	func_60();
}

bool func_38(int iParam0)
{
	return (Global_1893575 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

int func_40(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iParam0 = iParam0;
	iVar0 = 1;
	bVar1 = false;
	if (!func_61())
	{
		iVar0 = 0;
	}
	if (func_62())
	{
		iVar0 = 0;
	}
	if (func_63() && func_64(68))
	{
		iVar0 = 0;
	}
	if (func_63() && func_64(82))
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	if (iVar0 && func_65(255))
	{
		if (bVar1)
		{
			func_66(PLAYER::PLAYER_PED_ID(), joaat("weapon_drowning"), 0, 0);
		}
		else
		{
			func_67(5, 0);
		}
	}
	return 1;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_68(&Global_1939168, 32768)) || func_68(&Global_1939168, 16777216))
	{
		return;
	}
	if (func_69(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_70();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_71((*uParam0)[iVar3 /*3*/], 1) && func_72(iParam1)) && !func_73(iParam1, 16))
							{
								func_75(iParam1, func_74(), -1, 0, -1, 0);
								func_76((*uParam0)[iVar3 /*3*/], 1);
							}
							func_77(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			
			default:
				break;
		}
		iVar3++;
	}
	func_78(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_43()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_79(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_80();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_27, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200, 1055032020))
		{
			switch (iLocal_27)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 135:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_81(iLocal_27, 0), 1);
					break;
			}
		}
		if (func_10(func_74()))
		{
			func_11(func_74(), 8);
		}
		func_82(iLocal_27, 4);
		func_82(iLocal_27, 8);
		func_78(0);
		if (func_45() == -1)
		{
			func_83(0);
		}
		func_84(iLocal_27);
		func_34();
		return 0;
	}
	else if (func_45() == -1)
	{
		func_85(iLocal_27);
		func_86(iLocal_27);
		if (!func_87(iLocal_27, 0))
		{
			return 0;
		}
	}
	else if (!func_88(iLocal_27))
	{
		return 0;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_45()
{
	return Global_1572887->f_13;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_47()
{
	if (Global_1572887->f_342.f_3 > 0)
	{
		return 1;
	}
	if (Global_1572887->f_342.f_4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (NETWORK::_0x1B89BC43B6E69107(joaat("fm_mission_controller"), -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::_0x1B89BC43B6E69107(-701235215, -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::_0x1B89BC43B6E69107(-814065802, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_49(bool bParam0, int iParam1)
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

int func_50(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return func_89(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893575->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893575->f_7 = (Global_1893575->f_7 - (Global_1893575->f_7 && iParam0));
}

int func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_59(iParam0))
	{
		return 1;
	}
	if (func_89(iParam0, 16))
	{
		return 1;
	}
	if (func_90(iParam0) && !func_91(iParam0))
	{
	}
	if (func_92(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_93(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_93(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896608 < iVar0 || &Global_1896608 > iVar1)
		{
			Global_1896608 = iVar0;
		}
		while (true)
		{
			if ((!func_90(iParam0) || func_91(iParam0)) || func_94(&Global_1896608))
			{
				func_95(&Global_1896608, 0);
			}
			Global_1896608 = &Global_1896608 + 1;
			iVar2++;
			if (&Global_1896608 > iVar1)
			{
				Global_1896608 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_54(var uParam0)
{
	return (Global_1939168 && uParam0) != 0;
}

bool func_55(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1900853;
}

struct<2> func_56(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_57(var uParam0, var uParam1)
{
	return uParam0;
}

void func_58(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_96(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_59(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_97(iVar0))
		{
			(*Global_1900684)[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_61()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_62()
{
	return func_98(Global_1572887->f_7, 1);
}

var func_63()
{
	return &Global_1048577;
}

bool func_64(int iParam0)
{
	return func_99(&(Global_3145858->f_6), iParam0);
}

bool func_65(int iParam0)
{
	return !func_100(iParam0);
}

void func_66(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<13> Var0;
	
	if (ENTITY::_0x083D497D57B7400F(Global_1273882->f_8))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1273882->f_8))
	{
		if (bParam2)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1273882->f_8, true);
		}
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 243, true);
		}
		Var0 = PLAYER::PLAYER_PED_ID();
		Var0.f_1 = iParam0;
		Var0.f_2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && WEAPON::_0x959383DCD42040DA(iParam1));
		func_101(&Var0, &(Global_1099293->f_267));
		PED::_0x1CE875505D45338A(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
	}
}

void func_67(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;
	
	if (!func_102(&(Var30.f_6), &Var30, 0))
	{
		Var30.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_103(85);
	if (func_104(iParam0, &uVar0))
	{
		func_105(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_106(0);
		}
		return;
	}
	func_107(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_106(0);
	}
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_70()
{
	return func_68(&Global_1939168, 8192);
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_72(int iParam0)
{
	if (!func_59(iParam0))
	{
		return false;
	}
	return ((((*Global_1887327)[iParam0 /*36*/])->f_21 == 1 || ((*Global_1887327)[iParam0 /*36*/])->f_21 == 2) && !func_108(iParam0));
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1887327)[iParam0 /*36*/])->f_22 && iParam1) != 0;
}

int func_74()
{
	return Global_1896610->f_41;
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	
	if (!func_109())
	{
		return;
	}
	sVar1 = func_110(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_111(iParam4))
	{
		if (func_59(iParam0))
		{
			iParam4 = func_112(func_9(iParam0));
		}
		else
		{
			iParam4 = func_112(iParam1);
		}
	}
	if (func_111(iParam4))
	{
		iVar3 = func_113(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_115(func_114(iParam2));
	}
	else if ((func_116(iParam1, 2) || func_117(iParam4, 2)) && !Global_1893575->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893575->f_9 = 1;
	}
	else if ((func_59(iParam0) && func_89(iParam0, 16777216)) && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893575->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893575->f_9 = 1;
	}
	else
	{
		iVar4 = func_119(func_118());
		iVar5 = func_120(func_118());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_121(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_122(&sVar6, 109029619), sVar9, func_122(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_121(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_122(&sVar6, 109029619), func_122(&sVar10, 109029619));
		}
		Global_1893575->f_9 = 0;
	}
	Global_1938075->f_145 = func_123(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_77(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_89(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_125(Global_1939168, 16384);
	func_127(func_126(-1532769513, -36357794), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_127(func_126(-1532769513, 213519508), 1);
			break;
		
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_127(func_126(-1532769513, 242571679), 1);
			break;
		
		case 3:
		case 10:
			func_127(func_126(-1532769513, 1349449307), 1);
			break;
		
		case 4:
		case 9:
			func_127(func_126(-1532769513, 1140362070), 1);
			break;
		
		case 8:
			func_127(func_126(-1532769513, -172330899), 1);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			func_127(func_126(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		
		case 31:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		
		case 32:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		
		case 128:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		
		case 129:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		
		case 131:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		
		case 130:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		
		case 38:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		
		case 120:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		
		case 39:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		
		case 42:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		
		case 44:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		
		case 45:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		
		case 46:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		
		case 47:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		
		case 58:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		
		case 59:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		
		case 52:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		
		case 67:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		
		case 69:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		
		case 70:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		
		case 71:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		
		case 73:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		
		case 76:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		
		case 77:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		
		case 82:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		
		case 84:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		
		case 87:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		
		case 88:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		
		case 90:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		
		case 91:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		
		case 92:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		
		case 94:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		
		case 97:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		
		case 102:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		
		case 104:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		
		case 105:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		
		case 108:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		
		case 110:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		
		case 113:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		
		case 115:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		
		case 118:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 1;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 1);
	}
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_80()
{
}

int func_81(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		
		case 1:
			return 1567162363;
		
		case 2:
			return 456471693;
		
		case 3:
			return -1772963474;
		
		case 4:
			return 1881496386;
		
		case 5:
			return 711768994;
		
		case 6:
			return -440834066;
		
		case 7:
			return -1363847832;
		
		case 8:
			return 967769300;
		
		case 9:
			return -1436873944;
		
		case 10:
			return -1585669139;
		
		case 11:
			return 16791368;
		
		case 12:
			return 1452922822;
		
		case 13:
			return 549538301;
		
		case 14:
			return 974698954;
		
		case 15:
			return 445881012;
		
		case 16:
			return -2043891857;
		
		case 17:
			return 419656993;
		
		case 18:
			return -1732457315;
		
		case 19:
			return 1794318026;
		
		case 20:
			return 2035159966;
		
		case 21:
			return 770832805;
		
		case 22:
			return -1109814766;
		
		case 24:
			return -1075550363;
		
		case 23:
			return -1080317735;
		
		case 25:
			return 2138576151;
		
		case 26:
			return 1180954297;
		
		case 27:
			return 783603394;
		
		case 28:
			return 1162337247;
		
		case 30:
			return -170458336;
		
		case 29:
			return 2023240596;
		
		case 31:
			return 1285083821;
		
		case 32:
			return -1840907462;
		
		case 33:
			return 756710130;
		
		case 34:
			return 1634157321;
		
		case 35:
			return 388370024;
		
		case 36:
			return 1092296123;
		
		case 37:
			return 467491346;
		
		case 38:
			return -1391584612;
		
		case 39:
			return -152111346;
		
		case 40:
			return 1447551317;
		
		case 41:
			return 153136092;
		
		case 42:
			return 1304405732;
		
		case 43:
			return 1074984055;
		
		case 53:
			return 1087476368;
		
		case 54:
			return -1768057340;
		
		case 44:
			return 1218874593;
		
		case 55:
			return -1438443836;
		
		case 45:
			return -2036340415;
		
		case 56:
			return -597278150;
		
		case 46:
			return 803939643;
		
		case 57:
			return -632496195;
		
		case 47:
			return -965943619;
		
		case 48:
			return 283532073;
		
		case 49:
			return -462827524;
		
		case 50:
			return -69067491;
		
		case 51:
			return -1864895118;
		
		case 58:
			return -1929806571;
		
		case 59:
			return -698525417;
		
		case 60:
			return -1149739894;
		
		case 52:
			return 380507325;
		
		case 61:
			return -875142075;
		
		case 62:
			return 407796241;
		
		case 63:
			return -152267914;
		
		case 64:
			return -1675443320;
		
		case 65:
			return 1940341639;
		
		case 66:
			return 1846596114;
		
		case 67:
			return 907708501;
		
		case 69:
			return 1825644981;
		
		case 70:
			return 2065937607;
		
		case 71:
			return -211317417;
		
		case 72:
			return 1801307910;
		
		case 73:
			return -4118897;
		
		case 74:
			return 1853610692;
		
		case 75:
			return -1574644415;
		
		case 76:
			return 2133055515;
		
		case 77:
			return -1413401932;
		
		case 78:
			return 801090761;
		
		case 79:
			return 2131218644;
		
		case 80:
			return 1708823660;
		
		case 81:
			return 7976942;
		
		case 82:
			return 2111120505;
		
		case 83:
			return 176893118;
		
		case 84:
			return 1179148161;
		
		case 68:
			return 602306665;
		
		case 85:
			return 547412068;
		
		case 86:
			return -1539748801;
		
		case 87:
			return -1605119912;
		
		case 88:
			return -884464063;
		
		case 89:
			return -1420970720;
		
		case 90:
			return 1017024547;
		
		case 91:
			return -1204497306;
		
		case 92:
			return -1621069480;
		
		case 93:
			return -458604261;
		
		case 94:
			return -923391614;
		
		case 95:
			return -689247089;
		
		case 97:
			return 44049568;
		
		case 98:
			return 1350259552;
		
		case 96:
			return 620414938;
		
		case 99:
			return -61661574;
		
		case 100:
			return -725338054;
		
		case 101:
			return -770123507;
		
		case 102:
			return 1322486734;
		
		case 103:
			return -460939553;
		
		case 104:
			return -1451863552;
		
		case 105:
			return 173833068;
		
		case 106:
			return -1681004136;
		
		case 107:
			return 713715980;
		
		case 108:
			return -31204969;
		
		case 109:
			return -1720064790;
		
		case 110:
			return -532172775;
		
		case 111:
			return -739067737;
		
		case 112:
			return -1203133835;
		
		case 113:
			return -1947411598;
		
		case 115:
			return -1298718762;
		
		case 116:
			return -595083064;
		
		case 117:
			return 884833917;
		
		case 118:
			return 2141950651;
		
		case 114:
			return -1049753365;
		
		case 119:
			return -1437650729;
		
		case 134:
			return 672925454;
		
		case 135:
			return 846062774;
		
		case 136:
			return 1713550306;
		
		case 127:
			return 1369756178;
		
		case 128:
			return -736172423;
		
		case 129:
			return 1597070291;
		
		case 131:
			return -159501564;
		
		case 130:
			return -1438809608;
		
		case 132:
			return -102682392;
		
		case 133:
			return 676673543;
		
		case 120:
			return -81068979;
		
		case 121:
			return 227618407;
		
		case 122:
			return 2106043438;
		
		case 123:
			return -1380256064;
		
		case 124:
			return -2118469183;
		
		case 125:
			return -558997834;
		
		case 126:
			return 1563120499;
		
		case 137:
			return 658339366;
		
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (&Global_7888[iParam0 /*11*/] - (Global_7888[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070355->f_17941[iParam0 /*11*/] = (&Global_1070355->f_17941[iParam0 /*11*/] - (Global_1070355->f_17941[iParam0 /*11*/] && iParam1));
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 2;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 2);
	}
}

void func_84(int iParam0)
{
	iParam0 = iParam0;
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1938932->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_128(iVar0);
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1915170->f_3[iVar0 /*447*/])->f_8 == iParam0)
		{
			func_129(iVar0);
		}
		iVar0++;
	}
}

int func_87(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_59(iParam0))
	{
		return 1;
	}
	if (func_92(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896608->f_1 < iVar0 || Global_1896608->f_1 > iVar1)
		{
			Global_1896608->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_130(Global_1896608->f_1, 16))
			{
				func_131(Global_1896608->f_1, 0);
			}
			Global_1896608->f_1++;
			iVar2++;
			if (Global_1896608->f_1 > iVar1)
			{
				Global_1896608->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_132(iVar0) || func_133(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				
				case 30:
					func_134();
					break;
				
				case 32:
					func_135();
					break;
				
				default:
					if ((Global_1051387->f_69[iVar0 /*76*/])->f_2 == iParam0)
					{
						func_136(iVar0);
						(Global_1051387->f_69[iVar0 /*76*/])->f_2 = -1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_89(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7888[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070355->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

int func_90(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return func_89(iParam0, 33554432);
}

int func_91(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 33:
			return 1;
		
		case 37:
			return 1;
		
		case 70:
			return 1;
		
		case 101:
			return 1;
	}
	return 0;
}

int func_92(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		
		case 5:
			*uParam1 = 137;
			*uParam2 = 318;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		
		case 66:
			*uParam1 = 374;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 374;
			}
			break;
		
		case 83:
			*uParam1 = 376;
			*uParam2 = 425;
			if (bVar0)
			{
				*uParam2 = 378;
			}
			break;
		
		case 98:
			*uParam1 = 437;
			*uParam2 = 465;
			if (bVar0)
			{
				*uParam2 = 437;
			}
			break;
		
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*uParam2 = 494;
			}
			else
			{
				*uParam2 = 496;
			}
			if (bVar0)
			{
				*uParam2 = 466;
			}
			break;
		
		case 40:
			*uParam1 = 502;
			*uParam2 = 547;
			if (bVar0)
			{
				*uParam2 = 503;
			}
			break;
		
		case 73:
			*uParam1 = 548;
			*uParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 70:
			*uParam1 = 560;
			*uParam2 = 582;
			if (bVar0)
			{
				*uParam2 = 560;
			}
			break;
		
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*uParam2 = 592;
			}
			else
			{
				*uParam2 = 606;
			}
			if (bVar0)
			{
				*uParam2 = 584;
			}
			break;
		
		case 80:
			*uParam1 = 497;
			*uParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 99:
			*uParam1 = 607;
			*uParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 101:
			*uParam1 = 620;
			*uParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 103:
			*uParam1 = 636;
			*uParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 3:
			*uParam1 = 638;
			*uParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 6:
			*uParam1 = 651;
			*uParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 33:
			*uParam1 = 319;
			*uParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*uParam2 = 667;
			}
			else
			{
				*uParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 37:
			*uParam1 = 685;
			*uParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 60:
			*uParam1 = 695;
			*uParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*uParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 116:
			*uParam1 = 718;
			*uParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 69:
			*uParam1 = 730;
			*uParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 71:
			*uParam1 = 739;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 75:
			*uParam1 = 745;
			*uParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 82:
			*uParam1 = 725;
			*uParam2 = 726;
			break;
		
		case 102:
			*uParam1 = 735;
			*uParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 30:
			*uParam1 = 738;
			*uParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 106:
			*uParam1 = 749;
			*uParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 108:
			*uParam1 = 758;
			*uParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 77:
			*uParam1 = 727;
			*uParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 131:
			*uParam1 = 785;
			*uParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 91:
			*uParam1 = 762;
			*uParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 134:
			*uParam1 = 767;
			*uParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 127:
			*uParam1 = 426;
			*uParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 121:
			*uParam1 = 339;
			*uParam2 = 369;
			if (bVar0)
			{
				*uParam2 = 369;
			}
			break;
		
		case 132:
			*uParam1 = 370;
			*uParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 122:
			*uParam1 = 777;
			*uParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 21:
			*uParam1 = 774;
			*uParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 44:
			*uParam1 = 788;
			*uParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 94:
			*uParam1 = 793;
			*uParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 23:
			*uParam1 = 795;
			*uParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 28:
			*uParam1 = 796;
			*uParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 107:
			*uParam1 = 798;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 123:
			*uParam1 = 501;
			*uParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 11:
			*uParam1 = 801;
			*uParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 137:
			*uParam1 = 828;
			*uParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		
		case 65:
			return 1;
		
		case 66:
			return 1;
		
		case 67:
			return 1;
		
		case 68:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_130(iParam0, 2))
	{
		return 0;
	}
	if (func_130(iParam0, 32) && !bParam1)
	{
		func_138(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_137(iParam0)));
		if (func_45() == -1)
		{
			if (func_130(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_139(iParam0));
				func_140(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_139(iParam0));
		}
		return 0;
	}
	if (!func_141(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_139(iParam0)))
	{
		func_140(iParam0, 128);
		return 1;
	}
	func_138(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_137(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_139(iParam0));
	if (func_130(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_139(iParam0));
		func_140(iParam0, 2048);
	}
	return 1;
}

bool func_96(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_99(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_100(int iParam0)
{
	return func_142(1, iParam0);
}

void func_101(var uParam0, var uParam1)
{
	if (func_143(uParam0, uParam1))
	{
		uParam1->f_62 = func_144(uParam1);
	}
}

int func_102(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1273882->f_17, (Global_1070355->f_22101.f_366[iVar1 /*272*/])->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1070355->f_22101.f_366[iVar0 /*272*/];
	iVar5 = func_145(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_146(iVar0, iVar6, uParam0, fParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_147(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	if (!func_59(iParam0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iParam0 /*36*/])->f_4))
	{
		return 0;
	}
	uParam1->f_17.f_6 = { VOLUME::_0xF70F00013A62F866(((*Global_1887327)[iParam0 /*36*/])->f_4) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &uVar0, 0))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901929->f_44.f_1;
	uParam1->f_17.f_1 = Global_1901929->f_44.f_1;
	uParam1->f_17.f_2 = Global_1901929->f_44.f_1;
	vVar1 = { VOLUME::_0x3E2A25B2416DD67E(((*Global_1887327)[iParam0 /*36*/])->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901929->f_44)
	{
		fVar4 = Global_1901929->f_44;
	}
	if (fVar4 > Global_1901929->f_44.f_1)
	{
		fVar4 = Global_1901929->f_44.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return 1;
}

void func_105(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_148(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_149(uParam0->f_17.f_6))
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901929->f_44.f_1;
			uParam0->f_17.f_1 = Global_1901929->f_44.f_1;
			uParam0->f_17.f_2 = Global_1901929->f_44.f_1;
		}
	}
	if (func_149(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_103(0);
	func_103(3);
	Global_1099293->f_586 = iParam2;
	Global_1099293->f_587 = bParam3;
	Global_1099293->f_588 = iParam4;
	func_150(&(Global_1099293->f_516));
	Global_1099293->f_516 = { *uParam0 };
	func_151(&(Global_1099293->f_555));
	Global_1099293->f_555 = { *uParam1 };
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	func_152(Global_1099293->f_516, 36);
	func_153(Global_1099293->f_555, 36);
}

int func_106(int iParam0)
{
	if (func_154(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_107(vector3 vParam0, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_102(&vVar0, &fVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_155(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, bParam6, iParam7, iParam8, 1);
}

int func_108(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_156())
	{
		return 1;
	}
	if (iParam0 == 66)
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (Global_13)
	{
		return 0;
	}
	if (!func_157())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_55))
	{
		return 0;
	}
	if (func_158(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_110(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893575->f_162)))
	{
		sVar0 = func_159(Global_1893575->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_161(func_160(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_162(iParam0) || func_163(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				
				case 134:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				
				case 135:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				
				case 137:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_111(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 2:
			return 2;
		
		case 11:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 12:
			return 3;
		
		case 1:
			return 3;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 13:
			return 4;
		
		case 14:
			return 4;
		
		case 15:
			return 4;
		
		case 16:
			return 4;
		
		default:
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;
	
	if (!func_111(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_40.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_164(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070355->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070355->f_19592[iParam0 /*12*/]);
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		
		case 795414694:
			return 0;
		
		case -557290573:
			return 2;
		
		case 650214731:
			return 1;
		
		case -1073312073:
			return 0;
		
		case 231313522:
			return 0;
		
		case -804804953:
			return 0;
		
		case 370072007:
			return 1;
		
		case 1245451421:
			return 1;
		
		case 469159176:
			return 1;
		
		case -105598602:
			return 0;
		
		case -1356490953:
			return 0;
		
		case -1276586360:
			return 1;
		
		case 1755369577:
			return 0;
		
		case 1175365009:
			return 0;
		
		case -1229593481:
			return 1;
		
		case -1369817450:
			return 0;
		
		case 592454541:
			return 0;
		
		case -2040708515:
			return 1;
		
		case -1410384421:
			return 1;
		
		case -1308233316:
			return 1;
		
		case 301094150:
			return 0;
		
		case -811730579:
			return 0;
		
		case -1817904483:
			return 0;
		
		case -1300497193:
			return 0;
		
		case 2005774838:
			return 1;
		
		case -1504425495:
			return 1;
		
		case -247856387:
			return 1;
		
		case -823661292:
			return 0;
		
		case -218679770:
			return 1;
		
		case -1287619521:
			return 1;
		
		case -1781130443:
			return 1;
		
		case -261541730:
			return 1;
		
		default:
			break;
	}
	return -1;
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		
		case 1:
			return "WATER_TYPE_RIVER";
		
		case 2:
			return "WATER_TYPE_SWAMP";
		
		default:
			break;
	}
	return "";
}

bool func_116(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_40.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070355->f_19665[iParam0] && iParam1) != 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (!func_111(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_40.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070355->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_118()
{
	return &Global_1902688;
}

int func_119(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_120(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_121(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_122(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_165(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_123(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;
	
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_124(int iParam0)
{
	if (func_162(iParam0))
	{
		if (!func_163(44))
		{
			return 0;
		}
	}
	return 1;
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_126(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_127(var uParam0, var uParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_128(int iParam0)
{
	func_166((Global_1938932->f_5[iParam0 /*11*/])->f_6, 1);
	func_167((Global_1938932->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1938932->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11((Global_1938932->f_5[iParam0 /*11*/])->f_8);
	}
	func_168(iParam0, 8192);
	func_168(iParam0, 32768);
	func_168(iParam0, 524288);
	func_168(iParam0, 1048576);
	(Global_1938932->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1938932->f_5[&Global_1938932 /*11*/])->f_9 = 0;
	Global_1938932->f_5[iParam0 /*11*/] = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1938932->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_7 = 0;
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_93((Global_1915170->f_3[iParam0 /*447*/])->f_21) && func_169((Global_1915170->f_3[iParam0 /*447*/])->f_21))
	{
		func_170((Global_1915170->f_3[iParam0 /*447*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { 0f, 0f, 0f };
	(Global_1915170->f_3[iParam0 /*447*/])->f_21 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_22 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	(Global_1915170->f_3[iParam0 /*447*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1915170->f_3[iParam0 /*447*/])->f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1915170->f_3[iParam0 /*447*/])->f_35, false);
	}
	func_171((Global_1915170->f_3[iParam0 /*447*/])->f_9, 0);
	func_172(iParam0, 536870912);
	iVar1 = func_173(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_174(&((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/]));
			(Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/] = 0;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_4 = 0f;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	if ((Global_1915170->f_3[iParam0 /*447*/])->f_441 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1915170->f_3[iParam0 /*447*/])->f_441, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_23 = 0;
	func_175(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = -1;
}

bool func_130(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_93(iParam0))
	{
		return false;
	}
	return (Global_9657[iParam0 /*2*/] && iParam1) != 0;
}

int func_131(int iParam0, bool bParam1)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_130(iParam0, 2))
	{
		return 0;
	}
	if (func_137(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_139(iParam0)))
	{
		return 1;
	}
	if (func_130(iParam0, 1) && !bParam1)
	{
		func_176(iParam0, 128);
		return 1;
	}
	func_140(iParam0, 129);
	func_177(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_139(iParam0));
	func_138(iParam0, 0);
	return 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_134()
{
	int iVar0;
	var uVar1;
	
	func_178(30);
	func_179(30);
	func_180(30);
	func_181(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar0 /*19*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_3582[iVar0 /*19*/])->f_6);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_6 = uVar1;
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar0 /*19*/])->f_13))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_3582[iVar0 /*19*/])->f_13);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_17))
		{
			MAP::REMOVE_BLIP(&((Global_1051387->f_3582[iVar0 /*19*/])->f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_8, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_15, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_15));
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_1 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_5 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_8 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_15 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_7 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_14 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = -1;
		Global_1051387->f_3582[iVar0 /*19*/] = -1;
		iVar0++;
	}
	if (func_182(30, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[30 /*76*/])->f_22);
		func_183(30, 262144);
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051387->f_4319[iVar0 /*7*/] = -1;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_3 = 0;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_4 = 0;
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_4319[iVar0 /*7*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_4319[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	func_181(32);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_184(iParam0);
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21) && !ENTITY::DOES_ENTITY_EXIST(&(Global_1051387->f_3222[(Global_1051387->f_69[iParam0 /*76*/])->f_18 /*2*/])))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_69[iParam0 /*76*/])->f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&((Global_1051387->f_69[iParam0 /*76*/])->f_21));
		}
		if (STREAMING::IS_MODEL_VALID((Global_1051387->f_69[iParam0 /*76*/])->f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Global_1051387->f_69[iParam0 /*76*/])->f_19);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		NETWORK::_0xA35E7BF20FA269E0((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::_0xA1CFB35069D23C23((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::_0x74C2B3DC0B294102((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		if (func_185(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_26))
	{
		POPULATION::_0xA1CFB35069D23C23((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		POPULATION::_0x74C2B3DC0B294102((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		if (func_185(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_28))
	{
		if (func_185(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_28);
		}
	}
	if (func_182(iParam0, 16384) && !bVar0)
	{
		iVar1 = TASK::_0x295514F198EFD0CA((Global_1051387->f_69[iParam0 /*76*/])->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
		}
		func_183(iParam0, 16384);
	}
	Global_1051387->f_69[iParam0 /*76*/] = -1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { 0f, 0f, 0f };
	(Global_1051387->f_69[iParam0 /*76*/])->f_21 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_19 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 1;
	if (func_182(iParam0, 262144) && !bVar0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iParam0 /*76*/])->f_22);
		func_183(iParam0, 262144);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	iVar3 = func_186(iParam0);
	if (iVar3 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_174(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2]));
			(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2] = 0;
			iVar2++;
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_48 = 0;
	}
	func_187(iParam0);
	if (func_185(iParam0, 262144))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 262144;
	}
	else
	{
		func_178(iParam0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25) && func_188(iParam0, 2))
	{
		VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
		PATHFIND::_0x2C87C3E1C7B96EE2((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	}
	func_179(iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 &= 2375680;
	func_181(iParam0);
}

int func_137(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	return Global_1893763[iParam0 /*3*/];
}

void func_138(int iParam0, int iParam1)
{
	if (!func_93(iParam0))
	{
		return;
	}
	((*Global_1893763)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_139(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_1;
}

void func_140(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (&Global_9657[iParam0 /*2*/] - (Global_9657[iParam0 /*2*/] && iParam1));
}

int func_141(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_130(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_189(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_190())
	{
		return func_189(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_189(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_143(var uParam0, var uParam1)
{
	bool bVar0;
	
	func_191(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_61 = uParam0->f_5;
	bVar0 = true;
	func_192(uParam1);
	if (!func_193(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_194(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == joaat("weapon_fall"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("weapon_drowning"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("weapon_drowning_in_vehicle"))
	{
		return true;
	}
	if (!func_193(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_194(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_144(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_30)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == joaat("weapon_fall") && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == joaat("weapon_drowning") || uParam0->f_30.f_5 == joaat("weapon_drowning_in_vehicle")) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1938998->f_28.f_1 == 1)
		{
			return 27;
		}
		return 2;
	}
	iVar0 = func_195(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_196(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_197(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

var func_145(int iParam0)
{
	struct<4> Var0;
	
	Var0 = Global_1070355->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_146(int iParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;
	
	Var0 = Global_1070355->f_22101.f_366.f_4357;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return 1;
	}
	return 0;
}

bool func_147(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_148(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return ((*Global_1097609)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

int func_149(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_150(var uParam0)
{
	struct<30> Var0;
	
	*uParam0 = { Var0 };
}

void func_151(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_152(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_153(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

bool func_154(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_155(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, var uParam11, var uParam12, int iParam13)
{
	if (func_148(255) == 4)
	{
		return;
	}
	if (func_149(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (bParam10)
	{
		func_198(0, 0, 0, 1);
	}
	func_103(0);
	func_103(3);
	Global_1099293->f_586 = uParam11;
	Global_1099293->f_587 = uParam12;
	Global_1099293->f_588 = iParam13;
	func_150(&(Global_1099293->f_516));
	Global_1099293->f_516 = fParam3;
	Global_1099293->f_516.f_5 = 1;
	Global_1099293->f_516.f_17.f_6 = { vParam0 };
	Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
	Global_1099293->f_516.f_17 = { fParam9, fParam9, fParam9 };
	Global_1099293->f_516.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1099293->f_516.f_16 = 1;
		Global_1099293->f_516.f_6.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_516.f_6.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_6 = { fParam8, fParam8, fParam8 };
		Global_1099293->f_516.f_6.f_9 = -432403087;
	}
	func_151(&(Global_1099293->f_555));
	Global_1099293->f_555.f_6 = { vParam4 };
	Global_1099293->f_555 = fParam7;
	Global_1099293->f_555.f_5 = 1;
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	func_152(Global_1099293->f_516, 36);
	func_153(Global_1099293->f_555, 36);
}

int func_156()
{
	return 0;
}

int func_157()
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (func_45() != 0)
	{
		return 1;
	}
	if (func_199())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_200() };
	if (func_201(Var0))
	{
		return 0;
	}
	Var2 = { func_202() };
	if (func_201(Var2))
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_199())
		{
			return 1;
		}
		if (Global_1070355->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_201(func_56(0)))
	{
		return 1;
	}
	if ((Global_1939168 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_57(func_56(0)))
	{
		case -1:
			return 0;
		
		case 2:
			return iParam0 & 1 == 0;
		
		case 5:
			return iParam0 & 2 == 0;
		
		case 3:
			return iParam0 & 16 == 0;
		
		case 4:
			return iParam0 & 32 == 0;
		
		case 7:
			return iParam0 & 1024 == 0;
		
		default:
			break;
	}
	return 0;
}

char* func_159(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_160(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_203(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		
		case 2:
			return "LANDMARK_JORGES_GAP";
		
		case 3:
			return "LANDMARK_MERCER_STATION";
		
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		
		case 6:
			return "LANDMARK_SILENT_STEAD";
		
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		
		case 9:
			return "LANDMARK_TWO_CROWS";
		
		case 10:
			return "LANDMARK_REPENTANCE";
		
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		
		case 12:
			return "WATER_MANTECA_FALLS";
		
		case 13:
			return "SETTLEMENT_LIMPANY";
		
		case 14:
			return "WATER_MOUNT_SHANN";
		
		case 15:
			return "LANDMARK_THREE_SISTERS";
		
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		
		case 17:
			return "SETTLEMENT_EL_NIDO";
		
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		
		case 19:
			return "LANDMARK_ERIS_FIELD";
		
		case 20:
			return "LANDMARK_GRANITE_PASS";
		
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		
		case 26:
			return "LANDMARK_CUEVA_SECA";
		
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		
		case 29:
			return "LANDMARK_DONNER_FALLS";
		
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		
		case 35:
			return "LANDMARK_MESCALERO";
		
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		
		case 38:
			return "LANDMARK_BROKEN_TREE";
		
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		
		case 40:
			return "LANDMARK_FACE_ROCK";
		
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return 1;
	}
	return 0;
}

int func_163(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	return func_205(iParam0);
}

struct<7> func_164(int iParam0)
{
	struct<7> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_165(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_166(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_167(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_168(int iParam0, int iParam1)
{
	func_206(&((Global_1938932->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_169(int iParam0)
{
	if (!func_93(iParam0))
	{
		return false;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_170(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_93(iParam0))
	{
		return;
	}
	if (!func_130(iParam0, 1))
	{
		return;
	}
	if (!func_130(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_169(iParam0)) && func_207(iParam0))
	{
		return;
	}
	func_140(iParam0, 1);
	func_177(iParam0);
	if (func_208(func_137(iParam0)))
	{
		iVar0 = func_139(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_140(iParam0, 16);
	}
	if (func_130(iParam0, 128) && !bParam3)
	{
		func_131(iParam0, 0);
	}
}

void func_171(int iParam0, bool bParam1)
{
	if (!func_209(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_210(iParam0, 1024))
		{
			func_211(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_210(iParam0, 1024))
	{
		func_212(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_213(iParam0);
}

void func_172(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_6 = ((Global_1915170->f_3[iParam0 /*447*/])->f_6 - ((Global_1915170->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

var func_173(int iParam0)
{
	return (Global_1915170->f_3[iParam0 /*447*/])->f_409;
}

void func_174(int iParam0)
{
	if (func_215(iParam0) && func_216())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_175(int iParam0)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_6 = 0;
}

void func_176(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (Global_9657[iParam0 /*2*/] || iParam1);
}

void func_177(int iParam0)
{
	int iVar0;
	
	if (!func_93(iParam0))
	{
		return;
	}
	iVar0 = func_217(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1893763)[iParam0 /*3*/])->f_2 = 0;
}

void func_178(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 0;
}

void func_179(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_51 = 0;
}

void func_180(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = 0;
}

void func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Global_1051387->f_40 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051387->f_40)
	{
		if (iParam0 == Global_1051387[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051387->f_40 = (Global_1051387->f_40 - 1);
	if (Global_1051387->f_40 < 0)
	{
		Global_1051387->f_40 = 0;
	}
	(*Global_1051387)[iVar1] = Global_1051387[Global_1051387->f_40];
}

bool func_182(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
}

void func_183(int iParam0, int iParam1)
{
	if (func_182(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
}

int func_184(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return 1;
	}
	if (func_185(iParam0, 65536))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_50 && iParam1) != 0;
}

var func_186(int iParam0)
{
	return (Global_1051387->f_69[iParam0 /*76*/])->f_48;
}

void func_187(int iParam0)
{
}

bool func_188(int iParam0, int iParam1)
{
	return func_98((Global_1051387->f_69[iParam0 /*76*/])->f_51, iParam1);
}

bool func_189(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_190()
{
	return Global_1099293->f_339;
}

void func_191(var uParam0)
{
	struct<31> Var0;
	
	func_218(uParam0);
	func_218(&(uParam0->f_6));
	func_218(&(uParam0->f_12));
	func_218(&(uParam0->f_18));
	func_218(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_62 = 0;
}

int func_192(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = PLAYER::PLAYER_ID();
	uParam0->f_2 = PLAYER::GET_PLAYER_PED(uParam0->f_3);
	uParam0->f_1 = func_219(uParam0->f_2);
	uParam0->f_4 = PLAYER::GET_PLAYER_TEAM(uParam0->f_3);
	uParam0->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2);
	return 1;
}

int func_193(int iParam0, var uParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			*uParam1 = 1;
		}
		else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (PED::IS_PED_HUMAN(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return 1;
}

int func_194(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_193(PED::_0xB676EFDA03DADA52(uParam0->f_2, 0), uParam1);
		
		case 4:
			return func_193(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1), uParam1);
		
		default:
			break;
	}
	return 0;
}

int func_195(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			
			case 2:
				return 9;
			
			case 3:
				return 9;
			
			case 4:
				return 7;
			
			case 6:
				return 7;
			
			case 5:
				return 4;
			
			case 7:
				return 4;
			
			case 0:
				return 4;
			
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_196(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 17;
	}
	if (uParam0->f_18 == 6)
	{
		return 16;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18.f_1))
	{
		if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1)))
		{
			return 18;
		}
	}
	if (LAW::_0x40851BCC33ACD9AB(uParam0->f_18.f_2))
	{
		return 11;
	}
	switch (uParam0->f_18.f_5)
	{
		case -1976316465:
			return 10;
		
		case 841021282:
			return 10;
		
		case -350651841:
			return 10;
		
		case -1683752762:
			if (FLOCK::_0x3B005FF0538ED2A9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		
		case -1329647920:
			return 10;
		
		case 707888648:
			return 11;
		
		case 106566339:
			return 11;
		
		case -50399569:
			return 11;
		
		case -767591988:
			return 14;
		
		case 1986610512:
			return 14;
		
		case -989642646:
			return 15;
		
		case 889541022:
			return 15;
		
		case -319516747:
			return 15;
		
		case 1269650476:
			return 12;
		
		case 1222652248:
			return 12;
		
		case -350226955:
			return 12;
		
		case 1030835986:
			return 12;
		
		case -1448293989:
			return 12;
		
		case 266218800:
			return 12;
		
		case 555364152:
			return 12;
		
		case -1663301869:
			return 12;
		
		case -1996978098:
			return 12;
		
		case 1078461828:
			return 12;
		
		case 1733741057:
			return 19;
		
		case -2003007004:
			return 19;
		
		case 1965820175:
			return 19;
		
		case -1164995627:
			return 19;
		
		case -1406404850:
			return 19;
		
		case 892340488:
			return 19;
		
		case 570352286:
			return 19;
		
		case 1809249877:
			return 19;
		
		case 1185197041:
			return 19;
		
		case -1901478918:
			return 19;
		
		case 2097877918:
			return 19;
		
		case -1158905413:
			return 19;
		
		case 358397622:
			return 19;
		
		case 65999835:
			return 19;
		
		case 814443795:
			return 19;
		
		case 519621102:
			return 19;
		
		case -1628223003:
			return 19;
		
		case 1278256225:
			return 19;
		
		case 2038628101:
			return 19;
		
		case 1742494648:
			return 19;
		
		case -1010166918:
			return 19;
		
		case 660170868:
			return 19;
		
		case -1278312096:
			return 19;
		
		case -509158128:
			return 19;
		
		case -226656579:
			return 19;
		
		case 2115868159:
			return 19;
		
		case 1495813101:
			return 19;
		
		case 1197385818:
			return 19;
		
		case 1015780020:
			return 19;
		
		case -1286733825:
			return 19;
		
		case -1670393277:
			return 19;
		
		case -415733461:
			return 19;
		
		case -1207924036:
			return 19;
		
		case 497702414:
			return 19;
		
		case 719188085:
			return 19;
		
		case 43753457:
			return 19;
		
		case 771290791:
			return 19;
		
		case 20356387:
			return 19;
		
		case 309149584:
			return 19;
		
		case 1613781781:
			return 19;
		
		case 1693607065:
			return 19;
		
		case 1132176120:
			return 19;
		
		case 869270437:
			return 19;
		
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		
		case 2:
			return 10;
		
		case 3:
			return 10;
		
		case 4:
			return 12;
		
		case 6:
			return 12;
		
		case 5:
			return 13;
		
		case 7:
			return 13;
		
		case 0:
			return 13;
		
		default:
			break;
	}
	return 13;
	return 0;
}

int func_197(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 21;
	}
	switch (iVar3)
	{
		case -1976316465:
			return 20;
		
		case 841021282:
			return 20;
		
		case -350651841:
			return 20;
		
		case -1683752762:
			return 20;
		
		case -1329647920:
			return 20;
		
		case 707888648:
			return 21;
		
		case 106566339:
			return 21;
		
		case -50399569:
			return 21;
		
		case -767591988:
			return 24;
		
		case 1986610512:
			return 24;
		
		case -989642646:
			return 25;
		
		case 889541022:
			return 25;
		
		case -319516747:
			return 25;
		
		case 1269650476:
			return 22;
		
		case 1222652248:
			return 22;
		
		case -350226955:
			return 22;
		
		case 1030835986:
			return 22;
		
		case -1448293989:
			return 22;
		
		case 266218800:
			return 22;
		
		case 555364152:
			return 22;
		
		case -1663301869:
			return 22;
		
		case -1996978098:
			return 22;
		
		case 1078461828:
			return 22;
		
		case 1733741057:
			return 26;
		
		case -2003007004:
			return 26;
		
		case 1965820175:
			return 26;
		
		case -1164995627:
			return 26;
		
		case -1406404850:
			return 26;
		
		case 892340488:
			return 26;
		
		case 570352286:
			return 26;
		
		case 1809249877:
			return 26;
		
		case 1185197041:
			return 26;
		
		case -1901478918:
			return 26;
		
		case 2097877918:
			return 26;
		
		case -1158905413:
			return 26;
		
		case 358397622:
			return 26;
		
		case 65999835:
			return 26;
		
		case 814443795:
			return 26;
		
		case 519621102:
			return 26;
		
		case -1628223003:
			return 26;
		
		case 1278256225:
			return 26;
		
		case 2038628101:
			return 26;
		
		case 1742494648:
			return 26;
		
		case -1010166918:
			return 26;
		
		case 660170868:
			return 26;
		
		case -1278312096:
			return 26;
		
		case -509158128:
			return 26;
		
		case -226656579:
			return 26;
		
		case 2115868159:
			return 26;
		
		case 1495813101:
			return 26;
		
		case 1197385818:
			return 26;
		
		case 1015780020:
			return 26;
		
		case -1286733825:
			return 26;
		
		case -1670393277:
			return 26;
		
		case -415733461:
			return 26;
		
		case -1207924036:
			return 26;
		
		case 497702414:
			return 26;
		
		case 719188085:
			return 26;
		
		case 43753457:
			return 26;
		
		case 771290791:
			return 26;
		
		case 20356387:
			return 26;
		
		case 309149584:
			return 26;
		
		case 1613781781:
			return 26;
		
		case 1693607065:
			return 26;
		
		case 1132176120:
			return 26;
		
		case 869270437:
			return 26;
		
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 20;
		
		case 2:
			return 20;
		
		case 3:
			return 20;
		
		case 4:
			return 22;
		
		case 6:
			return 22;
		
		case 5:
			return 23;
		
		case 7:
			return 23;
		
		case 0:
			return 23;
		
		default:
			break;
	}
	return 23;
	return 0;
}

void func_198(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	func_220(iParam0);
	if (!func_221(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_222(128) && !func_223(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (iParam3 && func_224() == 4)
	{
		func_106(17);
	}
	func_225(1024);
}

int func_199()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_201(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_200()
{
	return *Global_1051163;
}

int func_201(struct<2> Param0)
{
	if (!func_226(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_227(Param0))
	{
		return 0;
	}
	return 1;
}

struct<2> func_202()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_56(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_56(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

int func_203(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	
	func_228(iParam3, &vVar0, &Var3, &fVar6);
	if (func_229(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_3434[iVar1]), iVar2);
}

void func_206(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_207(int iParam0)
{
	if (!func_93(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1893763)[iParam0 /*3*/])->f_2);
}

bool func_208(int iParam0)
{
	return iParam0 != 0;
}

bool func_209(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_209(iParam0))
	{
		return false;
	}
	return (Global_1915170->f_17437[iParam0] && iParam1) != 0;
}

void func_211(int iParam0, int iParam1)
{
	if (!func_209(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (Global_1915170->f_17437[iParam0] || iParam1);
}

void func_212(int iParam0, int iParam1)
{
	if (!func_209(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (&Global_1915170->f_17437[iParam0] - (Global_1915170->f_17437[iParam0] && iParam1));
}

void func_213(int iParam0)
{
	func_231(func_230(iParam0));
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_215(int iParam0)
{
	if (func_232(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_216()
{
	return 1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = func_139(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

void func_218(var uParam0)
{
	struct<6> Var0;
	
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = 623901053;
	*uParam0 = { Var0 };
}

var func_219(var uParam0)
{
	return uParam0;
}

void func_220(var uParam0)
{
	Global_1099293->f_26.f_12 = uParam0;
}

bool func_221(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_222(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

bool func_223(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

int func_224()
{
	if (&Global_1099293 <= 5)
	{
		return &Global_1099293;
	}
	if (&Global_1099293 <= 22)
	{
		return 4;
	}
	if (&Global_1099293 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_225(int iParam0)
{
	if (func_233(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070355->f_634.f_601;
		
		case 3:
			return Global_1070355->f_634.f_2103;
		
		case 4:
			return Global_1070355->f_634.f_12605;
		
		case 5:
			return Global_1070355->f_634.f_12907;
		
		case 6:
			return Global_1070355->f_634.f_15909;
		
		case 7:
			return Global_1070355->f_634.f_15980;
		
		case 8:
			return Global_1070355->f_634.f_17182;
		
		default:
			break;
	}
	return -1;
}

void func_228(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_229(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_230(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		
		case 149:
			return 28;
		
		case 150:
			return 29;
		
		case 26:
			return 14;
		
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		
		case 134:
			return 37;
		
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		
		case 19:
		case 53:
			return 7;
		
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		
		case 20:
			return 33;
		
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		
		case 8:
		case 43:
		case 78:
			return 8;
		
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		
		case 159:
			return 5;
		
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		
		case 70:
		case 90:
			return 17;
		
		case 119:
			return 11;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 174:
			return 21;
		
		case 12:
		case 60:
			return 18;
		
		case 148:
			return 34;
		
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		
		case 175:
			return 20;
		
		case 109:
		case 113:
		case 114:
			return 35;
		
		case 61:
		case 62:
		case 89:
			return 36;
		
		default:
			break;
	}
	return -1;
}

void func_231(var uParam0)
{
	Global_1915170->f_17792 = uParam0;
}

bool func_232(int iParam0)
{
	return iParam0 != 0;
}

bool func_233(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

