#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	int iLocal_29 = 0;
#endregion

void __EntryFunction__()
{
	struct<141> Var0;
	var uVar186;
	
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_6 = -1;
	Var0.f_19 = 40;
	Var0.f_140 = 40;
	uVar186 = func_1();
	Var0.f_2 = uVar186;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (func_3(255))
		{
			return;
		}
		switch (Var0)
		{
			case 0:
				if (func_4(&Var0))
				{
					func_5(&Var0);
				}
				if (func_6(&Var0, Var0.f_2))
				{
					MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
					func_7(&Var0, 1);
				}
				else
				{
					func_7(&Var0, 2);
				}
				break;
			
			case 1:
				if (func_4(&Var0))
				{
					func_5(&Var0);
				}
				if (!func_8(&Var0))
				{
					func_7(&Var0, 2);
				}
				else if (func_1() != 0)
				{
					if (func_1() == -1)
					{
						func_9();
					}
				}
				else
				{
					func_10();
				}
				break;
			
			case 2:
				if (func_4(&Var0))
				{
					func_5(&Var0);
				}
				func_2(&Var0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(int iParam0)
{
	if (func_11())
	{
		func_12();
	}
	func_13(iParam0);
	func_14();
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return func_15(32, iParam0);
}

bool func_4(int iParam0)
{
	return iParam0->f_1;
}

void func_5(int iParam0)
{
	iParam0->f_1 = 0;
}

bool func_6(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (func_16())
	{
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		iVar1 = 1;
	}
	if (Global_1898068->f_8 == 3)
	{
		iVar2 = 3;
	}
	else
	{
		iVar2 = 0;
	}
	sVar3 = func_17(Global_1898068->f_8);
	if (UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", sVar3) == 0 || iVar1)
	{
		bVar0 = true;
		Global_1898068->f_4 = 0;
		func_18(0);
	}
	if (bVar0)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	}
	iParam0->f_181 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "player_menu_data");
	iParam0->f_182 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_181, "header_text", MISC::_CREATE_VAR_STRING(2, "SP_PLAYER_MENU_HEADER"));
	iParam0->f_184 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0->f_181, "player_menu_root_filter_index", iVar2);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iLocal_0))
	{
		iLocal_0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_183))
	{
		iParam0->f_183 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_183, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iLocal_0, 0);
	TXD::_0xDB1BD07FB464584D(-786228517, 0);
	TXD::_0xDB1BD07FB464584D(1997120069, 0);
	TXD::_0xDB1BD07FB464584D(908516622, 0);
	return bVar0;
}

void func_7(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		func_19(iParam0);
	}
}

bool func_8(int iParam0)
{
	func_20();
	func_21();
	return func_22(iParam0);
}

void func_9()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, 278816850, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(2, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1623727326, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, 648122183, false);
	PAD::DISABLE_CONTROL_ACTION(0, -163964935, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1582581421, false);
}

void func_10()
{
	PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1291350480, false);
	PAD::DISABLE_CONTROL_ACTION(0, -417363528, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1814662593, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
}

bool func_11()
{
	return Global_1935689->f_3;
}

void func_12()
{
	func_23(1, 20);
	func_24();
}

void func_13(var uParam0)
{
	func_25();
	func_26(0);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	NETWORK::_0x49CF17A564918E8D();
}

void func_14()
{
	if (Global_1572887->f_12 == -1)
	{
		return;
	}
	Global_1058888->f_2 = 0;
}

int func_15(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_27(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_28())
	{
		return func_27(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_27(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_16()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_2;
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sp";
		
		case 3:
			return "sp_notifications";
		
		case 5:
			return "sp_missions";
		
		case 4:
			return "sp_post_office";
		
		default:
			break;
	}
	return "sp";
	return "invalid";
}

void func_18(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 1;
}

void func_20()
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() / 1000);
	Global_1898068->f_6 = iVar0;
}

void func_21()
{
	int iVar0;
	var uVar1;
	struct<7> Var2;
	int iVar9;
	char* sVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1935689->f_1225.f_1207 - 1))
	{
		iVar9 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_18);
		if (iVar9 != 1)
		{
		}
		else
		{
			uVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_19);
			if (!NETWORK::_0xD1FFB246F4E088AC(uVar1))
			{
			}
			else
			{
				NETWORK::_0x16EFB123C4451032(NETWORK::_0x27B1AE4D8C652F08(uVar1), &Var2);
				func_29(&Var2);
				if (!func_30(Var2))
				{
				}
				else
				{
					sVar10 = NETWORK::_0xB5C4B18B12A2AF23(&Var2, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
					{
						iVar11 = MISC::GET_HASH_KEY(sVar10);
						iVar12 = iVar11;
					}
					else
					{
						iVar11 = 0;
						iVar12 = 0;
					}
					if (DATABINDING::_0x81D7183E7A8ECA72((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_15) != iVar11)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_15, iVar11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_16, iVar12);
					}
				}
			}
		}
		iVar0++;
	}
}

var func_22(var uParam0)
{
	bool bVar0;
	var uVar1;
	
	func_31();
	func_32();
	if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		func_26(0);
	}
	else
	{
		switch (func_33(&(uParam0->f_185)))
		{
			case 2:
				if (func_34(uParam0->f_185))
				{
					Global_43889 = uParam0->f_185;
					func_26(0);
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				break;
			
			case 3:
				if (func_34(uParam0->f_185))
				{
					if (func_35(uParam0->f_185) == 1)
					{
						uVar1 = func_37(func_36(uParam0->f_185));
						bVar0 = MISSIONDATA::_0x57E798B54C45EE1A(MISC::GET_HASH_KEY(&uVar1)) >= 2;
					}
					else if (func_35(uParam0->f_185) == 8)
					{
						if (func_39(((*Global_1347702)[func_38(uParam0->f_185) /*49*/])->f_12, 1) || func_39(((*Global_1347702)[func_38(uParam0->f_185) /*49*/])->f_12, 33554432))
						{
							uVar1 = func_40(func_38(uParam0->f_185));
							bVar0 = MISSIONDATA::_0x57E798B54C45EE1A(MISC::GET_HASH_KEY(&uVar1)) >= 2;
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
				if (func_41())
				{
					bVar0 = false;
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iLocal_0, bVar0);
				break;
		}
	}
	if (CAM::_0x139EFB0A71DD9011())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_183, 0);
	}
	CAM::_0x8910C24B7E0046EC();
	return &Global_1898068;
}

void func_23(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_42(&Global_0, 8);
	}
	if (!func_43() || func_1() != -1)
	{
		return;
	}
	func_42(&Global_0, 1);
}

void func_24()
{
	Global_1935689->f_3 = 0;
}

void func_25()
{
	if (func_1() == -1)
	{
		return;
	}
	switch (Global_1935689->f_2439)
	{
		case 14:
		case 15:
		case 16:
			MAP::DISPLAY_RADAR(true);
			break;
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		if (!&Global_1898068)
		{
			Global_1898068 = bParam0;
		}
	}
	else if (&Global_1898068)
	{
		Global_1898068 = bParam0;
	}
}

bool func_27(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_28()
{
	return Global_1109400->f_244;
}

void func_29(var uParam0)
{
}

bool func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_31()
{
	int iVar0;
	int iVar1;
	struct<30> Var2;
	
	iVar1 = Global_1898068->f_6;
	if (Global_1935689->f_1225.f_1207 <= 0)
	{
		return;
	}
	if (Global_1935689->f_1225.f_1210 >= Global_1935689->f_1225.f_1207)
	{
		Global_1935689->f_1225.f_1210 = 0;
	}
	Var2 = { *(Global_1935689->f_1225.f_5[Global_1935689->f_1225.f_1210 /*30*/]) };
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_17);
	if (iVar0 < iVar1)
	{
		func_44(Var2);
	}
	Global_1935689->f_1225.f_1210++;
}

void func_32()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	if (!func_45())
	{
		return;
	}
	iVar4 = 1433015236;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			iVar5 = Var0.f_2;
			switch (Var0)
			{
				case -1340543710:
					func_46(Var0, Var0.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				
				case -1740156697:
					func_47(&Var0);
					switch (iVar5)
					{
						case 290710310:
							Global_1935689->f_1225 = Var0.f_3;
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_1225.f_1, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Var0.f_3, func_48(70)));
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				
				case -1203660660:
					switch (iVar5)
					{
						case 290710310:
							func_49(Var0.f_3);
							break;
						
						case -2111588953:
							func_50(Global_1935689->f_1225);
							break;
						
						case 110545328:
							func_51(Global_1935689->f_1225);
							break;
						
						case -1883210336:
							func_52(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				
				case 922460030:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				
				case -2075827635:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

int func_33(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE(1433015236))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
						}
						iVar5 = 1;
					}
					break;
				
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = func_53(vVar0.z);
						iVar5 = 3;
					}
					break;
				
				case 922460030:
					iVar5 = 2;
					break;
				
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

bool func_34(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_35(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return func_55(func_54(iParam0));
}

int func_36(int iParam0)
{
	if (func_35(iParam0) == 1)
	{
		return func_56(iParam0);
	}
	return -1;
}

var func_37(int iParam0)
{
	var uVar0;
	
	if (!func_57(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

int func_38(int iParam0)
{
	if (func_35(iParam0) == 8)
	{
		return func_56(iParam0);
	}
	return -1;
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_40(int iParam0)
{
	var uVar0;
	
	if (!func_58(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

int func_41()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_43())
	{
		return 0;
	}
	if (!func_59(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_59(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_59(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_59(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_59(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_59(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_59(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_59(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_59(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_59(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_59(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_59(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_59(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_59(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_59(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_59(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_59(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_59(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_59(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_59(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_59(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_59(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_59(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_59(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_59(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_59(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_42(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_43()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_44(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1935689->f_1225.f_3, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_1225.f_1, 0);
	func_60(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_61((Global_1935689->f_1225.f_1207 - 1));
}

bool func_45()
{
	return &Global_1898068;
}

void func_46(struct<4> Param0, int iParam4)
{
	switch (iParam4)
	{
		case 778915895:
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Param0.f_3, func_48(78)))
			{
				return;
			}
			else if (!func_62(3))
			{
				func_49(Param0.f_3);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Param0.f_3, func_48(78), 1);
			func_60(Param0.f_3);
			break;
		
		case 1511356879:
			break;
		
		default:
			break;
	}
}

void func_47(var uParam0)
{
	int iVar0;
	
	func_63();
	iVar0 = uParam0->f_3;
	if (iVar0 != 0)
	{
		Global_1935689->f_1225.f_1211 = uParam0->f_3;
	}
	Global_1935689->f_1225.f_1212 = uParam0->f_2;
	Global_1935689->f_1225.f_1213 = uParam0->f_1;
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		
		case 1:
			return "dynamic_list_item_visible";
		
		case 2:
			return "dynamic_list_item_main_color";
		
		case 3:
			return "dynamic_list_item_secondary_color";
		
		case 4:
			return "dynamic_list_item_tertiary_color";
		
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		
		case 6:
			return "dynamic_list_item_main_img_texture";
		
		case 7:
			return "dynamic_list_item_main_img_visible";
		
		case 8:
			return "dynamic_list_item_main_img_enabled";
		
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		
		case 10:
			return "dynamic_list_item_status_icon_texture";
		
		case 11:
			return "dynamic_list_item_status_icon_visible";
		
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		
		case 13:
			return "dynamic_list_item_deco__texture";
		
		case 14:
			return "dynamic_list_item_deco_visible";
		
		case 15:
			return "dynamic_list_item_raw_text_entry";
		
		case 16:
			return "dynamic_list_item_text_label_entry";
		
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		
		case 22:
			return "dynamic_list_item_end_img_texture";
		
		case 23:
			return "dynamic_list_item_end_img_visible";
		
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		
		case 27:
			return "dynamic_list_item_entry_player_index";
		
		case 28:
			return "dynamic_list_item_entry_friend_index";
		
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		
		case 32:
			return "dynamic_list_item_option_stepper_items";
		
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		
		case 40:
			return "dynamic_list_item_main_fill_value";
		
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		
		case 53:
			return "dynamic_list_item_link";
		
		case 54:
			return "dynamic_list_item_event_channel_hash";
		
		case 55:
			return "dynamic_list_item_focus_hash";
		
		case 56:
			return "dynamic_list_item_select_hash";
		
		case 57:
			return "dynamic_list_item_prompt_text";
		
		case 58:
			return "dynamic_list_item_prompt_enabled";
		
		case 59:
			return "dynamic_list_item_prompt_visible";
		
		case 60:
			return "dynamic_list_item_prompt_option_text";
		
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		
		case 72:
			return "mount_collection_index";
		
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		
		case 76:
			return "invite_unique_id";
		
		case 77:
			return "invite_tracked";
		
		case 78:
			return "invite_processed";
		
		case 79:
			return "invite_script_type";
		
		case 80:
			return "invite_gang_id";
		
		case 81:
			return "invite_expiration_time";
		
		case 82:
			return "invite_filter_type";
		
		case 83:
			return "invite_feed_message_id";
		
		default:
			break;
	}
	return "null";
}

void func_49(int iParam0)
{
	int iVar0;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(79));
	switch (iVar0)
	{
		case 1:
			func_64(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(50)), 1);
			break;
	}
	func_44(iParam0);
}

void func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(79));
	func_44(iParam0);
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(71));
	switch (iVar0)
	{
		case 2:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(50));
			uVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0x16EFB123C4451032(uVar2, &uVar3);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&uVar3);
			break;
	}
}

void func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "not_script_data_int_1");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "not_unique_id");
	if (func_65(&(Global_40.f_9910[iVar0 /*6*/])) && func_66(&(Global_40.f_9910[iVar0 /*6*/]), -1))
	{
		func_67(&(Global_40.f_9910[iVar0 /*6*/]), 0, Global_1901433->f_4504, &uVar2, &iVar3);
		iVar4 = uVar2;
		if (iVar4 != 0)
		{
			Var5 = { func_68(iVar4, 0, 0) };
			if (func_69(iVar4, &Var5, 0, 0) < iVar3)
			{
				func_70(MISC::_CREATE_VAR_STRING(2, "SHOP_MAILBOX_CANT_CARRY", iVar3), 7500, 0, 0, 0, 1);
			}
			else
			{
				func_71(&(Global_40.f_9910[iVar0 /*6*/]), 0);
				func_72(&(Global_40.f_9910[iVar0 /*6*/]), Global_1901433->f_4504);
				AUDIO::PLAY_SOUND_FRONTEND("MAIL", "HUD_MAIL_SOUNDSET", true, 0);
				if (!func_73(0, 0, 1))
				{
					func_23(0, 17);
				}
				func_74(iVar1);
				Global_1901433->f_4506 = 1;
			}
		}
	}
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_75(iParam0);
	if (func_57(iVar1))
	{
		iVar0 = ((*Global_1835011)[iVar1 /*74*/])->f_1;
	}
	else
	{
		iVar2 = func_76(iParam0);
		if (func_58(iVar2))
		{
			iVar0 = ((*Global_1347702)[iVar2 /*49*/])->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_77(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

int func_54(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_55(int iParam0)
{
	return iParam0 & 31;
}

int func_56(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return func_78(func_54(iParam0));
}

bool func_57(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_58(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_59(int iParam0, bool bParam1)
{
	switch (func_79(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_48(83));
	if (func_80(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_61(int iParam0)
{
	Global_1935689->f_1225.f_1207 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_1225.f_4, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1935689->f_1225.f_1207), 0));
}

int func_62(int iParam0)
{
	if (!func_81())
	{
		return 0;
	}
	func_18(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

void func_63()
{
}

void func_64(int iParam0, bool bParam1)
{
	var uVar0;
	
	uVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	if (bParam1)
	{
		if (func_82())
		{
			return;
		}
		if (NETWORK::_0x981146E5C9CE9250(uVar0))
		{
			func_83(iParam0);
			func_84(0);
			func_85(0);
		}
	}
	else
	{
		NETWORK::_0x3AA0CDC63696166D(uVar0);
	}
}

bool func_65(int iParam0)
{
	return iParam0 != 0;
}

int func_66(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_86(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_87(Global_40.f_9910[iParam1 /*6*/], 4);
}

int func_67(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	
	if (!func_65(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = 833374898;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		DATAFILE::_DATAFILE_GET_HASH(uParam3, &Var0);
		Var0.f_2 = 1214284824;
		DATAFILE::_DATAFILE_GET_INT(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

struct<5> func_68(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_88(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_89(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_90(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_91(bParam1) };
			if (iParam2 && func_92(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_93(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_93(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_94(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_95(bParam1) };
			switch (func_96(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_97(iParam0, -1823706425))
			{
				Var0 = { func_90(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_97(iParam0, -1483207246))
			{
				Var0 = { func_90(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_98(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_69(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_99(&iParam0);
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!func_101(0))
	{
		bParam2 = true;
	}
	iVar0 = func_102(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_103(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_104(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

var func_70(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_71(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_65(iParam0))
	{
		return;
	}
	iVar0 = func_86(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_87(Global_40.f_9910[iVar0 /*6*/], 4))
	{
		return;
	}
	else
	{
		func_105(Global_40.f_9910[iVar0 /*6*/], 4);
		func_106(Global_40.f_9910[iVar0 /*6*/], 8);
	}
	if (bParam1)
	{
		if (!func_73(0, 0, 1))
		{
			func_23(0, 17);
		}
	}
}

void func_72(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_65(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0, uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_67(iParam0, iVar1, uParam1, &iVar2, &iVar3);
		func_108(iVar2, iVar3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		iVar1++;
	}
}

int func_73(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_109())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_56(&(Global_1898164->f_1[0 /*5*/]));
		if (func_58(iVar0) && func_39(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_34(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

void func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_110(iParam0);
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_111())
	{
		iVar2 = func_111();
	}
	iVar5 = func_112(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_54(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_54(iVar6) == 0)
			{
				return func_113(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_54(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_54(iVar6) == 0)
			{
				return func_113(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_113(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_79(int iParam0)
{
	if (!func_34(iParam0))
	{
		return -1;
	}
	return func_114(iParam0);
}

bool func_80(int iParam0)
{
	return iParam0 != 0;
}

int func_81()
{
	if ((((func_115(0) && !func_116()) || func_117()) || Global_1935689->f_1) || func_45())
	{
		return 0;
	}
	return 1;
}

bool func_82()
{
	return Global_1572887->f_164 > 0;
}

void func_83(int iParam0)
{
	var uVar0;
	struct<22> Var1;
	struct<5> Var23;
	
	uVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	StringCopy(&(Var1.f_7), NETWORK::_0xE59F4924BD3A718D(uVar0), 64);
	NETWORK::_0x16EFB123C4451032(uVar0, &Var1);
	StringCopy(&(Var1.f_17), NETWORK::_0xE79BA3BC265895DA(uVar0), 24);
	Var1.f_15 = iParam0;
	Var1.f_21 = NETWORK::_0x5ED39DA62BEB1330(uVar0);
	Var23.f_2 = -1;
	Var23.f_3 = -1;
	Var23.f_4 = -1;
	NETWORK::_0xC0CFFDA87C2C163D(uVar0, &Var23, 10);
	func_118(&Var1, &Var23);
}

void func_84(int iParam0)
{
	Global_1572887->f_164.f_1 = iParam0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		func_119(128);
	}
	if (func_1() == 0)
	{
		func_120(2);
	}
	func_121(1);
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_65(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

struct<4> func_88(bool bParam0)
{
	return func_90(1328661203, func_122(), -1591664384, bParam0);
}

int func_89(int iParam0)
{
	vector3 vVar0;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_90(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_100(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_104(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_91(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_104(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_90(923904168, func_88(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_90(923904168, func_88(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_90(923904168, func_88(bParam0), -740156546, 0);
}

int func_92(int iParam0, bool bParam1)
{
	if (func_96(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_123(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_93(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_103(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_94(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_124(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_95(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_104(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_90(271701509, func_88(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_90(271701509, func_88(bParam0), 12999093, 0);
}

int func_96(int iParam0)
{
	struct<2> Var0;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_97(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_96(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_98(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_104(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_99(var uParam0)
{
	if (!func_100(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*uParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*uParam0 = 206762213;
			return 1;
		
		case 998010398:
			*uParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*uParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_101(bool bParam0)
{
	if (func_1() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_104(bParam0));
}

int func_102(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!func_101(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_104(bParam3), iParam0);
}

int func_103(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_90(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_104(bParam6), &Var0, 0);
	return uVar4;
}

int func_104(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_107(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	if (!func_65(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 192444604;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_108(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!func_125(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_126(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_127(iParam0, bParam2);
	iVar2 = 0;
	if (func_128(iParam0, 0, 0) == 0)
	{
		if (func_129(iParam0))
		{
			iVar5 = func_130(iParam0);
			iVar6 = func_131(iVar5);
			iVar7 = func_132(iVar6) + 1;
			func_133(iVar5);
			if (func_134(38))
			{
				func_135(483, 0);
			}
			else
			{
				func_135(482, 0);
			}
			if (iVar7 == func_136(iVar6))
			{
				func_108(func_137(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_43() && func_138(4))
				{
					if (func_43() && (func_139(38) || func_134(38)))
					{
						func_141(38, func_137(iVar6), 0, 0, func_140(), 0, -1, 0);
						func_142(2);
					}
					else
					{
						func_141(38, func_137(iVar6), 0, 0, func_140(), 0, -1, 0);
						func_142(1);
					}
				}
			}
			else if (func_43() && func_138(4))
			{
				if (func_43() && (func_139(38) || func_134(38)))
				{
					func_141(38, 0, 0, 0, func_140(), 0, -1, 0);
					func_142(2);
				}
				else
				{
					func_141(38, 0, 0, 0, func_140(), 0, -1, 0);
					func_142(1);
				}
			}
			if (func_43() && func_138(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_43() && (func_139(38) || func_134(38)))
					{
						func_143(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_143(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_89(iParam0) == -1037537535)
	{
		if ((!func_144(iParam0, 866047851) && !func_144(iParam0, -1979000645)) && !func_144(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_145(iParam0, 8388608) && !func_146(28))
	{
		func_147(28);
	}
	if (!bVar3)
	{
		if (func_144(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_96(iParam0) == -1447088266)
			{
				iVar1 = func_149(func_148(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_1() == -1)
					{
						func_150(iVar1);
					}
					if (func_101(0) && func_151(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_152(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_1() == -1)
					{
						func_150(iParam0);
					}
					if (func_101(0) && func_151(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_152(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_89(iParam0) == -427144552)
		{
			if (!func_153(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_89(iParam0) == 307971639 && func_154(iParam0))
		{
			if (!func_155(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_144(iParam0, 866047851))
		{
			func_156(iParam0);
		}
		else if (func_144(iParam0, 2000026003))
		{
			func_157(iParam0);
		}
		else if (func_144(iParam0, -103750053))
		{
			func_159(func_158(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_159(func_160(-717883113, 2091222383), iVar0);
		}
		else if (func_144(iParam0, -121341956) && !func_144(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_59(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_135(498, 0);
				}
			}
			if (func_144(iParam0, -2017733358) || func_144(iParam0, -1369131378))
			{
				func_161(iParam0);
			}
		}
		else if (func_144(iParam0, -136654233))
		{
			if (func_144(iParam0, -1021472396))
			{
			}
		}
		else if (func_144(iParam0, -1466706512) && func_144(iParam0, 1147021565))
		{
			func_135(484, 0);
		}
		else if (func_144(iParam0, 1147021565) && func_144(iParam0, -524514947))
		{
		}
		else if (func_144(iParam0, 554195525))
		{
		}
		else if (func_144(iParam0, 589988438))
		{
			if (func_162())
			{
				func_163(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_144(iParam0, 787083290) && func_144(iParam0, 949916894))
		{
			func_164(iParam0);
		}
		else if (func_144(iParam0, -1718133314))
		{
			func_165(iParam0);
		}
		else if (func_144(iParam0, -1738650224))
		{
			func_166(iParam0);
		}
		else if (func_144(iParam0, -1112814642) && func_144(iParam0, 949916894))
		{
			func_167(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_144(iParam0, 1841149704))
		{
			func_168();
		}
		else if (func_144(iParam0, 606799272))
		{
			func_169(iParam0, iParam1);
			func_170(iParam0);
		}
		else if (func_144(iParam0, -1112814642) && func_144(iParam0, -1697809989))
		{
			func_171(iParam0, 0, 0, 0);
		}
		else if (func_144(iParam0, -2017733358) || func_144(iParam0, -1369131378))
		{
			func_161(iParam0);
		}
		else if (func_144(iParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return 0;
			}
			func_172(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_144(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_173(215778062, 1, 0))
					{
						func_108(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_173(670273567, 1, 0))
					{
						func_108(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_173(-967317137, 1, 0))
					{
						func_108(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_173(526074061, 1, 0))
					{
						func_108(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_173(-1045488665, 1, 0))
					{
						func_108(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_173(471514780, 1, 0))
					{
						func_108(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_144(iParam0, -839724752) && func_145(iParam0, 4))
		{
			if (!func_134(42))
			{
				func_174(iParam0);
			}
		}
		else if (func_144(iParam0, 1399091007))
		{
			func_175(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_144(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_108(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_147(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_176(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_177(&iVar9, 0))
				{
					func_151(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_1() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_176(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_135(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_178();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_179();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_180();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_181();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_182();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_183(499813453, 854119837, 0);
				func_184(499813453, 0);
				func_185(1);
				break;
			
			case 2127812557:
				func_183(499813453, -1292544588, 0);
				func_184(499813453, 0);
				func_185(2);
				break;
			
			case 808991383:
				func_183(499813453, -1003325394, 0);
				func_184(499813453, 0);
				func_185(4);
				break;
			
			case 1134518629:
				func_183(666607663, -335460405, 0);
				func_184(666607663, 0);
				func_186(1);
				break;
			
			case 902940106:
				func_183(666607663, 903797617, 0);
				func_184(666607663, 0);
				func_186(2);
				break;
			
			case -418174898:
				func_183(666607663, 669728650, 0);
				func_184(666607663, 0);
				func_186(4);
				break;
			
			case -648114971:
				func_183(-220219788, 1214120047, 0);
				func_184(-220219788, 0);
				func_187(1);
				break;
			
			case 211153747:
				func_183(-220219788, 655769340, 0);
				func_184(-220219788, 0);
				func_187(2);
				break;
			
			case -32876996:
				func_183(-220219788, 885316185, 0);
				func_184(-220219788, 0);
				func_187(4);
				break;
			
			case 1191437462:
				func_183(218622660, -1491419385, 0);
				func_184(218622660, 0);
				func_188(1);
				break;
			
			case 1119149048:
				func_183(218622660, 1809565830, 0);
				func_184(218622660, 0);
				func_188(2);
				break;
			
			case 506073827:
				func_183(390004462, -628873767, 0);
				func_184(390004462, 0);
				func_189(1);
				break;
			
			case -1876986168:
				func_183(390004462, -405421956, 0);
				func_184(390004462, 0);
				func_189(2);
				break;
			
			case 2142623221:
				func_183(390004462, -1108972386, 0);
				func_184(390004462, 0);
				func_189(4);
				break;
			
			case 1508215381:
				func_183(6410548, 1053716392, 0);
				func_184(6410548, 0);
				func_190(1);
				break;
			
			case -888935280:
				func_183(6410548, 806507056, 0);
				func_184(6410548, 0);
				func_190(2);
				break;
			
			case -1252474566:
				func_183(6410548, 1571925350, 0);
				func_184(6410548, 0);
				func_190(4);
				break;
			
			case -1465702449:
				func_183(6410548, 1330352282, 0);
				func_184(6410548, 0);
				func_190(8);
				break;
			
			case -21093309:
				func_192(242, func_191(-21093309), 0);
				break;
			
			case 204375141:
				func_192(240, func_191(204375141), 0);
				break;
			
			case -417963070:
				func_192(241, func_191(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_193(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_135(488, 0);
				break;
			
			case 1613651027:
				func_135(491, 0);
				break;
			
			case -885810591:
				func_135(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_108(func_194(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_108(func_195(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_146(1))
				{
					func_135(487, 0);
				}
				break;
			
			case -898386032:
				func_135(486, 0);
				break;
			
			case -2035110427:
				if (func_1() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_135(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_196(&iVar10);
		if (!func_197(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_101(0))
		{
			return 1;
		}
		if (func_89(iParam0) == -1037537535)
		{
			func_198(iParam0);
		}
		if (func_144(iParam0, -1979000645))
		{
			func_199(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_101(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_108(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_200(iVar2, 0);
		}
	}
	Var35 = { func_201(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_202(iParam0);
	if (sParam6 > 0f)
	{
		if (func_144(iParam0, -839724752))
		{
			func_203(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_204(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_109()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	DATABINDING::_0x6318FB3BE37E11B3(Global_1901433->f_4501, iParam0);
	func_205(iParam0);
	Global_1901433->f_4503 = (Global_1901433->f_4503 - 1);
}

int func_111()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_112(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_206(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_111())
	{
		return -1;
	}
	uVar0 = func_112(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_207(iVar1, 0);
	func_208(iVar1, 0);
	func_209(iVar1, 0);
	func_210(iVar1, 0);
	func_211(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_212(iVar1, iParam4);
	}
	return iVar1;
}

int func_114(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_213(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

var func_115(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_116()
{
	return Global_1914319->f_17375;
}

int func_117()
{
	int iVar0;
	
	if (func_214())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return 0;
}

void func_118(var uParam0, var uParam1)
{
	Global_1572887->f_164.f_27 = { *uParam0 };
	Global_1572887->f_164.f_49 = { *uParam1 };
}

void func_119(int iParam0)
{
	func_215(&(Global_1572887->f_164.f_61), iParam0);
}

void func_120(int iParam0)
{
	Global_1572887->f_164.f_64 = iParam0;
}

void func_121(int iParam0)
{
	Global_1572887->f_164 = iParam0;
}

struct<4> func_122()
{
	struct<4> Var0;
	
	return Var0;
}

int func_123(int iParam0, bool bParam1)
{
	if (func_154(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_104(bParam1), iParam0, 0);
}

int func_124(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_104(0);
	*uParam1 = { func_90(iParam0, func_91(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_216(iParam0) && func_217(iParam0))
		{
			func_218(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_219(iParam0, uParam1);
	Var0 = { func_68(iParam0, 0, 1) };
	iVar5 = func_102(iParam0, &Var0, 0, 0);
	iVar6 = func_123(iParam0, 0);
	if ((iVar5 > 1 && !func_41()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_144(iParam0, -2051813666))
		{
			func_135(583, 1);
		}
		else
		{
			func_135(582, 0);
		}
	}
	if (func_220(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_127(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_221(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_222(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_223(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_104(bParam2), iParam0, 0);
	return iVar2;
}

bool func_129(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_130(iParam0) != 0;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_224())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_225(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_131(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_224())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_131(iVar0))
		{
			if (func_173(func_225(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_133(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_226(48);
	func_23(0, -1);
}

int func_134(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_59(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_135(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_227(iParam0, &iVar0, &iVar1);
	if (!func_228(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_229(iVar0, iVar1);
}

int func_136(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_137(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_138(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_59(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_139(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_58(iParam0))
	{
		return 0;
	}
	return func_230(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_173(func_231(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_43() && (func_139(38) || func_134(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_43() && (func_139(39) || func_134(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_232(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_43() && (func_139(41) || func_134(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_43() && (func_139(49) || func_134(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_232(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_233(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_234(iParam0, iVar13, iVar14))
	{
	}
	if (func_235(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_236(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_237(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_238(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_239(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_142(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_43() && (func_139(38) || func_134(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_43() && (func_139(39) || func_134(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_43() && (func_139(49) || func_134(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_43() && (func_139(38) || func_134(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_242(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_241(func_137(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_43() && (func_139(39) || func_134(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_43() && (func_139(49) || func_134(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_240(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_146(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	return func_244(iParam0);
}

void func_147(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	func_245(iParam0);
	func_246(iParam0);
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_100(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_247(iVar0) || func_248(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_149(int iParam0, bool bParam1)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_150(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_249(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_151(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_68(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_250((375 + iVar28), 1);
			if (func_93(iParam0, &Var0, iVar5, 0))
			{
				if (func_94(iParam0, &Var6, iVar5))
				{
					Var29 = { func_90(iParam0, Var0, iVar5, 0) };
					func_251(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_101(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_152(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_252(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_152(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_154(iParam0))
	{
		return 0;
	}
	if (!func_101(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_153(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_149(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_1() == -1)
		{
			func_150(iVar0);
			if (iParam1 == 1248274121)
			{
				func_253(iVar0);
			}
		}
		if (!func_220(iParam0, &uVar1, 1, 0, 0))
		{
			func_218(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_254(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_151(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_255())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_256(iVar0))
				{
					func_151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_151(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_257(Global_35, 2, 0, 1);
				if ((((func_249(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_173(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_249(iVar7) && func_173(-1185145312, 1, 0))
				{
					if (!func_151(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_151(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_135(480, 1);
	}
	return 1;
}

bool func_154(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_154(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_249(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_173(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_192(func_258(iParam0), func_191(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_59(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_135(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_101(0))
	{
		if (func_152(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_197(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_156(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_259()) || iParam0 != -615217896)
	{
		if (func_260(Global_35, iParam0, &uVar0))
		{
			func_176(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_182();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_182();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_182();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_180();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_178();
			break;
	}
}

void func_157(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_178();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_179();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_180();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_181();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_182();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_261();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_262();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_159(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_160(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_161(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_144(iParam0, -2017733358);
	if (func_263() < 3)
	{
		if (bVar0)
		{
			if (func_265(func_264(iParam0), iParam0))
			{
				func_192(79, func_191(func_264(iParam0)), 1);
			}
			else
			{
				func_192(78, func_191(func_264(iParam0)), 1);
			}
		}
		else
		{
			func_192(80, func_191(func_266(iParam0)), 1);
		}
	}
}

int func_162()
{
	if (((((func_267(839908568, 400) || func_267(-1134030454, 400)) || func_267(623353496, 400)) || func_267(-344413337, 400)) || func_267(-1664948962, 400)) || func_267(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_268(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_269(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_270(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_164(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_141(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_143(51, 0, 0, 0, 0, -1, 0);
			func_271(8192);
			break;
		
		case 581047644:
			func_141(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_143(51, 0, 0, 0, 0, -1, 0);
			func_271(524288);
			break;
		
		case -644199619:
			func_141(39, 0, 0, 0, 0, 0, 1, 0);
			func_143(39, 0, 0, 0, 0, -1, 0);
			func_272(16);
			break;
		
		case 684296857:
			func_141(41, 0, 0, 0, 0, 0, 1, 0);
			func_143(41, 0, 0, 0, 0, -1, 0);
			func_273(8);
			break;
		
		case 466137807:
			func_141(49, 0, 0, 0, 0, 0, 1, 0);
			func_143(49, 0, 0, 0, 0, -1, 0);
			func_274(16);
			break;
		
		case -1087522507:
			func_141(43, 0, 0, -1791518714, func_275(1), 0, -1, 0);
			func_276(1);
			break;
		
		case -405829000:
			func_141(43, 0, 0, -2087881550, func_275(2), 0, -1, 0);
			func_276(2);
			break;
		
		case 378660860:
			func_141(43, 0, 0, 1908068621, func_275(4), 0, -1, 0);
			func_276(4);
			break;
		
		case 1566111097:
			func_141(43, 0, 0, 1611247019, func_275(8), 0, -1, 0);
			func_276(8);
			break;
		
		case 1276007140:
			func_141(43, 0, 0, 1319635688, func_275(16), 0, -1, 0);
			func_276(16);
			break;
	}
}

void func_165(int iParam0)
{
	if (func_277() == 1)
	{
		if (func_134(39))
		{
			func_135(342, 0);
		}
		else
		{
			func_135(343, 0);
			func_272(1);
		}
	}
	if (func_277() >= 30)
	{
		func_135(344, 0);
	}
	func_141(39, 0, 0, 0, 0, 0, -1, 0);
	func_143(39, 0, 0, func_277(), 30, 1, 0);
}

void func_166(int iParam0)
{
	if (func_278() == 1)
	{
		if (func_134(49))
		{
			func_135(409, 0);
		}
		else
		{
			func_135(410, 0);
			func_274(1);
		}
	}
	if (func_278() >= 10)
	{
		func_135(411, 0);
	}
	func_141(49, 0, 0, 0, 0, 0, -1, 0);
	func_143(49, 0, 0, func_278(), 10, 1, 0);
}

void func_167(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_135(437, 0);
			func_135(440, 0);
			func_279(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_141(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_143(51, 0, 0, iVar0, func_232(-949689219, 20), 1, 0);
			func_271(1);
			func_280(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_279(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_141(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_143(51, 0, 0, iVar0, func_232(-1248968496, 20), 1, 0);
			func_271(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_279(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_141(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_143(51, 0, 0, iVar0, func_232(1706369307, 20), 1, 0);
			func_271(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_279(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_141(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_143(51, 0, 0, iVar0, func_232(1520110311, 20), 1, 0);
			func_271(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_135(438, 0);
			func_279(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_141(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_143(51, 0, 0, iVar0, func_232(-1992824800, 20), 1, 0);
			func_271(32768);
			break;
		
		default:
			func_135(439, 0);
			break;
	}
}

void func_168()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_134(43))
		{
			if (iParam0 == 281887510)
			{
				func_135(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_135(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_135(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_135(400, 0);
			}
		}
		else if (func_144(iParam0, 412399755))
		{
			func_281(-1791518714);
			if (func_282() == 0)
			{
				func_23(0, 10);
				iVar1 = func_283(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_134(44))
		{
			if (iParam0 == -222563712)
			{
				func_135(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_135(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_135(401, 0);
			}
		}
		else if (func_144(iParam0, 709057512))
		{
			func_281(-2087881550);
			if (func_282() == 1)
			{
				func_23(0, 10);
				iVar1 = func_283(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_134(45))
		{
			if (iParam0 == 2116770557)
			{
				func_135(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_135(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_135(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_135(398, 0);
			}
		}
		else if (func_144(iParam0, -1478961327))
		{
			func_281(1908068621);
			if (func_282() == 2)
			{
				func_23(0, 10);
				iVar1 = func_283(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_286(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_287(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_226(48);
					}
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_134(46))
		{
			if (iParam0 == 2085530337)
			{
				func_135(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_135(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_135(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_135(406, 0);
			}
		}
		else if (func_144(iParam0, -1238404098))
		{
			func_281(1611247019);
			if (func_282() == 3)
			{
				func_23(0, 10);
				iVar1 = func_283(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_134(47))
		{
			if (iParam0 == -1521783510)
			{
				func_135(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_135(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_135(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_135(403, 0);
			}
		}
		else if (func_144(iParam0, 1160548794))
		{
			func_281(1319635688);
			if (func_282() == 4)
			{
				func_23(0, 10);
				iVar1 = func_283(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_284(iParam0) < func_285(iParam0))
					{
						func_141(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_143(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_170(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_286(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_287(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_226(48);
		}
	}
}

void func_171(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_173(func_288(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_289(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_290(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_1() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_163(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_163(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_163(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_163(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_163(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_163(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_163(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_163(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_163(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_163(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_163(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_163(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_163(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_291())
			{
				func_163(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_163(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_163(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_163(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_163(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_163(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_163(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_163(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_163(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_163(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_163(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_163(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_163(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_173(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_100(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_89(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_292(iParam0, 1))
		{
			return false;
		}
	}
	return func_128(iParam0, 0, bParam2) >= iParam1;
}

void func_174(int iParam0)
{
	if (func_134(41))
	{
		func_135(363, 0);
	}
	else
	{
		func_135(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_293(-1865241121);
			func_294(-642026005);
			func_295(-642026005);
			func_23(0, 10);
			break;
		
		case -2108314374:
			func_293(2117142684);
			func_294(-940584364);
			func_295(-940584364);
			func_23(0, 10);
			break;
		
		case -1193798153:
			func_293(-1409326024);
			func_294(1972645282);
			func_295(1972645282);
			func_23(0, 10);
			break;
		
		case -787702678:
			func_293(-641744968);
			func_294(1667205433);
			func_295(1667205433);
			func_23(0, 10);
			break;
		
		case -804542901:
			func_293(-946988203);
			func_294(1362715885);
			func_295(1362715885);
			func_23(0, 10);
			break;
		
		case -1696275132:
			func_293(-646136018);
			func_294(1053540370);
			func_295(1053540370);
			func_23(0, 10);
			break;
		
		case -161595323:
			func_293(-955835837);
			func_294(-1100103852);
			func_295(-1100103852);
			func_23(0, 10);
			break;
		
		case -1114363619:
			func_293(-179276075);
			func_294(-1409869209);
			func_295(-1409869209);
			func_23(0, 10);
			break;
		
		case -368407134:
			func_293(-492711560);
			func_294(-1760235357);
			func_295(-1760235357);
			func_23(0, 10);
			break;
		
		case 1997759228:
			func_293(1764383959);
			func_294(-138366827);
			func_295(-138366827);
			func_23(0, 10);
			break;
		
		case 1265573293:
			func_293(317501533);
			func_294(-1261163843);
			func_295(-1261163843);
			func_23(0, 10);
			break;
		
		case -1030441283:
			func_293(817753087);
			func_294(-963523016);
			func_295(-963523016);
			func_23(0, 10);
			break;
		
		case -1490884871:
			func_293(576606016);
			func_294(560825326);
			func_295(560825326);
			func_23(0, 10);
			break;
		
		case -395458616:
			func_293(814934957);
			func_294(858269539);
			func_295(858269539);
			break;
	}
}

void func_175(int iParam0, int iParam1)
{
	var uVar0;
	
	func_296(iParam0, iParam1, &uVar0);
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_68(iParam1, 1, 0) };
		iParam3 = func_297(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_299(iParam1, iParam2, func_298(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_300(1, (func_1() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_298(iParam3, 1) /*11*/])
			{
				func_301(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_302(32768) && iParam1 != &Global_1946804->f_57[func_298(iParam3, 1) /*11*/])
			{
				func_303();
				func_301(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_301(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_304(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_301(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_305(0);
			func_306(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_301(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_177(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_257(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_257(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_307("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_308(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_309(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_178()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_179()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_180()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_181()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_182()
{
	func_310();
	func_311();
	func_312();
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_184(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_240(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_185(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_186(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_187(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_188(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_189(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_190(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_191(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_192(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_227(iParam0, &iVar0, &iVar1);
	if (!func_228(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_229(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_193(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_227(iParam0, &iVar0, &iVar1);
	if (!func_228(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_229(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_194()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_224())
	{
		return func_195();
	}
	iVar4 = (func_224() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_224())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_314(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_225(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_195()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_224());
	return func_225(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_196(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_68(iParam0, 0, 1) };
	Var5 = { func_90(iParam0, Var0, Var0.f_4, 0) };
	return func_315(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1() != -1)
	{
		return;
	}
	switch (func_96(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_316(81053684, 0) <= 0)
			{
				func_301(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_301(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_317(iParam0);
			if (func_318(iVar0))
			{
				func_319(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_301(30, iParam0, 0, 0, 0);
			}
			if (func_320() == -2125499975 || func_320() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_301(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_320() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_301(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_321(-525676072, 0))
			{
				if (func_322(-525676072, &iVar1))
				{
					func_301(33, iVar1, 0, 0, 0);
				}
			}
			func_301(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_323(99217379))
		{
			func_176(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_147(24);
		if (func_177(&iVar2, 0))
		{
			func_151(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_199(int iParam0)
{
	if (func_144(iParam0, 943695443))
	{
		func_324(0, iParam0);
	}
	else if (func_144(iParam0, -2096528786))
	{
		func_324(1, iParam0);
	}
	else if (func_144(iParam0, -1094167013))
	{
		func_324(2, iParam0);
	}
	else if (func_144(iParam0, 1936654645))
	{
		func_324(3, iParam0);
	}
	else if (func_144(iParam0, 1306489306))
	{
		func_324(4, iParam0);
	}
	else if (func_144(iParam0, 435762317))
	{
		func_324(5, iParam0);
	}
	else if (func_144(iParam0, 1259363210))
	{
		func_324(6, iParam0);
	}
	else if (func_144(iParam0, 881398259))
	{
		func_324(7, iParam0);
	}
	else if (func_144(iParam0, -541549214))
	{
		func_324(8, iParam0);
	}
	else if (func_144(iParam0, 130796156))
	{
		func_324(-1, iParam0);
	}
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_325(&Var4, 1356624740);
	return func_326(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_201(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_100(iParam0, 0))
	{
		return Var0;
	}
	if (func_144(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_144(iParam0, -537818634))
			{
				return func_327(189951448);
			}
			else
			{
				return func_327(1176172851);
			}
		}
	}
	else if (func_144(iParam0, -537818634))
	{
		return func_327(-963660207);
	}
	if (func_144(iParam0, 2084895747))
	{
		return func_327(1694039471);
	}
	return Var2;
}

void func_202(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_1() == -1)
			{
				if (func_59(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_135(109, 1);
				}
			}
			break;
	}
}

void func_203(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_329(func_328(0));
	func_331(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_330(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_204(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_100(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_332())
	{
		func_333(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_334(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
		{
			StringCopy(&cVar2, func_334(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_145(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_89(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_335(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_336(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_191(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_144(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_191(iParam0));
	}
	func_331(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_205(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(((*Global_1901433)[iParam0 /*30*/])->f_26, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(((*Global_1901433)[iParam0 /*30*/])->f_17, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*Global_1901433)[iParam0 /*30*/])->f_28, 0);
}

bool func_206(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_207(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_337(iParam0);
	}
	else
	{
		func_338(iParam0, iParam1);
	}
	func_339();
}

void func_208(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_209(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_210(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_211(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_212(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_214()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

void func_215(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_216(int iParam0)
{
	return func_89(iParam0) == -427144552;
}

int func_217(int iParam0)
{
	var uVar0;
	
	if (func_1() != -1)
	{
		return 0;
	}
	if (func_145(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_220(iParam0, &uVar0, 1, 0, 0);
	}
	return func_173(iParam0, 1, 0);
}

void func_218(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (func_89(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_149(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_248(iVar0))
	{
		if (func_1() == -1)
		{
			func_150(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_128(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_204(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_219(int iParam0, var uParam1)
{
	int iVar0;
	
	if (func_144(iParam0, 58855631))
	{
		func_340(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_220(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_99(&iParam0);
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (!func_101(0))
	{
		bParam3 = true;
	}
	if (func_216(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_91(0) };
			Var4.f_9 = -1591664384;
			if (!func_93(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_94(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_92(iParam0, 1))
			{
				if (!func_93(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_94(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_341(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_102(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_103(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_104(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_144(iParam0, 1399091007))
	{
		func_296(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_223(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_342(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_343(&Var0, func_91(0));
	}
	if (!func_344(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_309(iVar14);
	return uVar15;
}

int func_224()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_225(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_226(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_345(iParam0);
	fVar1 = func_346(iParam0);
	if ((Global_1347477->f_117 || !func_146(31)) || !func_347(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_348(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_349(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_331(MISC::_CREATE_VAR_STRING(6, func_350(iParam0), fVar1), "itemtype_textures", func_351(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_227(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_228(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_352(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_353(iParam0))
	{
		return 0;
	}
	if (func_354(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_313(iParam0, 1)) || func_355(32768))
	{
		if (!func_313(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_356())
	{
		return 0;
	}
	return 1;
}

void func_229(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_357(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_233(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_140() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_358(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_359(), 12);
			}
			break;
		
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_277() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_360(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_277(), 30);
			}
			break;
		
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_361(), 13);
			}
			break;
		
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_278() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_362(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_278(), 10);
			}
			break;
		
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_232(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_234(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_235(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_236(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_363(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_173(iVar2, 1, 0) || func_365(func_364(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_241(func_363(iVar0))), func_241(func_363(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_277() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_366(iVar0)), func_366(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_360() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_366(iVar0)), func_366(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_366(iVar0)), func_366(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_288(iParam3, func_367(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_284(iVar2) - iParam7) >= func_232(iParam3, func_368(iVar0));
				}
				else
				{
					bVar1 = func_284(iVar2) >= func_232(iParam3, func_368(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_284(iVar2) + iParam7) >= func_232(iParam3, func_368(iVar0));
			}
			else
			{
				bVar1 = func_284(iVar2) >= func_232(iParam3, func_368(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_369(iVar2)), func_369(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_370(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_371(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_371(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_278() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_372(iVar0)), func_372(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_362() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_372(iVar0)), func_372(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_372(iVar0)), func_372(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_288(iParam3, func_367(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_284(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_373(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_373(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_374(iVar2)), func_374(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_238(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_361() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_34(func_375(0)) && ((func_376(0) == 1 || func_376(0) == 8) || func_376(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_240(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		
		case -1021394391:
			return "COL_CC_ART_SET";
		
		case -987306668:
			return "COL_CC_LND_SET";
		
		case -1028735103:
			return "COL_CC_GRL_SET";
		
		case 515229791:
			return "COL_CC_PLT_SET";
		
		case -1230863414:
			return "COL_CC_ACT_SET";
		
		case 232875659:
			return "COL_CC_AML_SET";
		
		case 1423129537:
			return "COL_CC_VEH_SET";
		
		case -435742319:
			return "COL_CC_SPT_SET";
		
		case -1854702679:
			return "COL_CC_INV_SET";
		
		case 1265323898:
			return "COL_CC_HOR_SET";
		
		case -479775696:
			return "COL_CC_PAM_SET";
		
		default:
			break;
	}
	return "";
}

var func_242(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_243(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_246(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			break;
		
		case 11:
			func_377(1);
			break;
		
		case 14:
			break;
		
		case 15:
			break;
		
		case 16:
			break;
		
		case 17:
			break;
		
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_378(1);
			break;
		
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_378(2);
			break;
		
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_378(3);
			break;
		
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		
		case 31:
			break;
		
		case 10:
			break;
		
		case 12:
			break;
		
		case 13:
			break;
		
		case 32:
			break;
		
		case 33:
			func_379(1);
			break;
		
		case 34:
			func_380(1);
			break;
		
		case 35:
			func_381(1);
			break;
		
		case 36:
			break;
		
		case 37:
			func_382(0);
			break;
		
		case 38:
			func_383(0);
			break;
		
		case 39:
			func_384(0);
			break;
		
		case 40:
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			break;
		
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 2:
			if ((!&Global_1879534 && func_43()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_242("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_135(586, 0);
			break;
		
		case 3:
			if ((!&Global_1879534 && func_43()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_242("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_135(587, 0);
			break;
		
		case 4:
			if ((!&Global_1879534 && func_43()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_242("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_135(588, 0);
			break;
		
		case 5:
			if ((!&Global_1879534 && func_43()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_242("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_135(589, 0);
			break;
		
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_1() == -1)
			{
				if (!func_323(99217379) || func_385(99217379) == 2110595215)
				{
					if (func_255())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_173(iVar0, 1, 0))
					{
						func_197(iVar0, 1, 752097756);
					}
					func_176(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		
		case 48:
			if (func_1() == -1)
			{
				if (!func_173(1013902307, 1, 0))
				{
					func_197(1013902307, 1, 752097756);
				}
			}
			break;
		
		case 50:
			if (func_1() == -1)
			{
				if (!func_173(1013902307, 1, 0))
				{
					func_197(1013902307, 1, 752097756);
				}
				if (!func_173(142640135, 1, 0))
				{
					func_197(142640135, 1, 752097756);
				}
			}
			break;
		
		case 49:
			if (func_1() == -1)
			{
				if (!func_173(786809402, 1, 0))
				{
					func_197(786809402, 1, 752097756);
				}
			}
			break;
		
		case 51:
			if (func_1() == -1)
			{
				if (!func_173(786809402, 1, 0))
				{
					func_197(786809402, 1, 752097756);
				}
				if (!func_173(-518019409, 1, 0))
				{
					func_197(-518019409, 1, 752097756);
				}
			}
			break;
		
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		
		case 25:
			break;
		
		case 26:
			break;
		
		case 27:
			break;
		
		case 28:
			break;
		
		case 29:
			break;
		
		case 30:
			break;
		
		case 44:
			break;
		
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		
		case 46:
			func_386();
			break;
		
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_250(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_251(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_387(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_98(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_101(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_104(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_388(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_253(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_389();
	func_390(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_391(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_255()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_256(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_257(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_146(50))
			{
				if (!func_146(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_146(51))
			{
				if (!func_146(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_259()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_260(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_100(iParam1, 0))
	{
		return 0;
	}
	if (func_89(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_1() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_96(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_392(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_144(iParam1, 866047851))
	{
		iVar5 = func_298(iVar4, 1);
		if (func_393(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_96(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_144(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return 0;
			}
			break;
		
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return 0;
			}
			break;
		
		case -1505978566:
			if (func_394(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return 0;
			}
		
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_395(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_395(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_96(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_144(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012;
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_261()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_262()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_263()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_173(func_396(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_173(iVar0, 1, 0) && func_173(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		
		case -649219937:
			return 1289585739;
		
		case -858567048:
			return -269048282;
		
		case -718162726:
			return 1441506783;
		
		case -1284282080:
			return 780305678;
		
		case -725003445:
			return 1811977508;
		
		case -1445630104:
			return -935153695;
		
		case 580970876:
			return 1299744282;
		
		case 967601061:
			return 1631240196;
		
		case 1946030891:
			return 517396587;
		
		case -1511404982:
			return 1620353486;
		
		case -944465290:
			return 1816443627;
		
		case -1701098855:
			return -127011478;
		
		default:
			break;
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_397(iParam0);
	if (iVar0 != -15)
	{
		func_390(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_398(iVar0, 1);
	}
	return 0;
}

int func_268(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (uParam1 && func_173(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_100(iVar25, 0) && func_144(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_269(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_331(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_270(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_399())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_331(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_400(iVar0);
			func_401(iVar0, 0, 0);
		}
		func_331(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_159(func_327(1644987397), iVar1);
	}
}

void func_271(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_272(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_273(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_274(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_284(iVar9);
	iVar2 = func_284(iVar10);
	iVar3 = func_284(iVar11);
	iVar5 = func_285(iVar9);
	iVar6 = func_285(iVar10);
	iVar7 = func_285(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_284(iVar12);
		iVar8 = func_285(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_276(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_277()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_402(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_278()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_279(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_373(iVar0))
		{
			*iParam2++;
		}
		if (func_373(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_373(iVar0))
		{
			*iParam2++;
		}
		if (func_373(iVar1))
		{
			*iParam2++;
		}
		if (func_373(iVar0) && func_373(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_373(iVar0))
		{
			*iParam2++;
		}
		if (func_373(iVar1))
		{
			*iParam2++;
		}
		if (func_373(iVar2))
		{
			*iParam2++;
		}
		if ((func_373(iVar0) && func_373(iVar1)) && func_373(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_373(iVar0))
		{
			*iParam2++;
		}
		if (func_373(iVar1))
		{
			*iParam2++;
		}
		if (func_373(iVar2))
		{
			*iParam2++;
		}
		if (func_373(iVar3))
		{
			*iParam2++;
		}
		if (((func_373(iVar0) && func_373(iVar1)) && func_373(iVar2)) && func_373(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_403(1497516462);
			func_404(2016141805);
			func_404(1010885152);
			func_404(-502324015);
			break;
		
		case 2016141805:
			func_404(1497516462);
			func_403(2016141805);
			func_404(1010885152);
			func_404(-502324015);
			break;
		
		case 1010885152:
			func_404(1497516462);
			func_404(2016141805);
			func_403(1010885152);
			func_404(-502324015);
			break;
		
		case -502324015:
			func_404(1497516462);
			func_404(2016141805);
			func_404(1010885152);
			func_403(-502324015);
			break;
		
		case -1056767524:
		case -538889627:
		case -538880323:
			func_404(-538889627);
			func_404(-538880323);
			func_404(-1056767524);
			func_403(iParam0);
			break;
		
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_405();
			func_403(iParam0);
			break;
		
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_406();
			func_403(iParam0);
			break;
		
		case 2019386373:
			func_404(-664252410);
			func_404(2109952320);
			func_403(2019386373);
			break;
		
		case -664252410:
			func_404(2019386373);
			func_404(2109952320);
			func_403(-664252410);
			break;
		
		case 2109952320:
			func_404(2019386373);
			func_404(-664252410);
			func_403(2109952320);
			break;
		
		case -1674179981:
			func_404(-1835851517);
			func_404(-1838352012);
			func_403(-1674179981);
			break;
		
		case -1835851517:
			func_404(-1674179981);
			func_404(-1838352012);
			func_403(-1835851517);
			break;
		
		case -1838352012:
			func_404(-1674179981);
			func_404(-1835851517);
			func_403(-1838352012);
			break;
		
		case -1717960576:
			func_404(210001842);
			func_403(-1717960576);
			break;
		
		case 210001842:
			func_404(-1717960576);
			func_403(210001842);
			break;
		
		case -150493654:
			func_404(-1271608261);
			func_404(1846061697);
			func_404(-1145519186);
			func_403(-150493654);
			break;
		
		case -1271608261:
			func_404(-150493654);
			func_404(1846061697);
			func_404(-1145519186);
			func_403(-1271608261);
			break;
		
		case 1846061697:
			func_404(-150493654);
			func_404(-1271608261);
			func_404(-1145519186);
			func_403(1846061697);
			break;
		
		case -1145519186:
			func_404(-150493654);
			func_404(-1271608261);
			func_404(1846061697);
			func_403(-1145519186);
			break;
		
		case 1766284049:
			func_404(280705402);
			func_404(1926308480);
			func_403(1766284049);
			break;
		
		case 280705402:
			func_404(1766284049);
			func_404(1926308480);
			func_403(280705402);
			break;
		
		case 1926308480:
			func_404(1766284049);
			func_404(280705402);
			func_403(1926308480);
			break;
		
		case 1609506757:
			if (bParam1)
			{
				func_404(439465264);
				func_403(1609506757);
			}
			else
			{
				func_404(1609506757);
				func_404(439465264);
			}
			break;
		
		case 439465264:
			if (func_407(1609506757))
			{
				if (bParam1)
				{
					func_403(439465264);
				}
				else
				{
					func_404(439465264);
				}
			}
			break;
		
		case 1822001510:
			func_404(-1612662716);
			func_403(1822001510);
			break;
		
		case -1612662716:
			func_404(1822001510);
			func_403(-1612662716);
			break;
		
		case 1306158345:
			func_404(1952610440);
			func_404(-223469678);
			func_404(-404698347);
			func_404(1517904467);
			func_403(1306158345);
			break;
		
		case 1952610440:
			func_404(1306158345);
			func_404(-223469678);
			func_404(-404698347);
			func_404(1517904467);
			func_403(1952610440);
			break;
		
		case -223469678:
			func_404(1306158345);
			func_404(1952610440);
			func_404(-404698347);
			func_404(1517904467);
			func_403(-223469678);
			break;
		
		case -404698347:
			func_404(1306158345);
			func_404(1952610440);
			func_404(-223469678);
			func_404(1517904467);
			func_403(-404698347);
			break;
		
		case 1517904467:
			func_404(1306158345);
			func_404(1952610440);
			func_404(-223469678);
			func_404(-404698347);
			func_403(1517904467);
			break;
		
		case 1376646519:
			func_404(931649776);
			func_404(-434590080);
			func_404(1743048395);
			func_404(449774763);
			func_403(1376646519);
			break;
		
		case 931649776:
			func_404(1376646519);
			func_404(-434590080);
			func_404(1743048395);
			func_404(449774763);
			func_403(931649776);
			break;
		
		case -434590080:
			func_404(1376646519);
			func_404(931649776);
			func_404(1743048395);
			func_404(449774763);
			func_403(-434590080);
			break;
		
		case 1743048395:
			func_404(1376646519);
			func_404(931649776);
			func_404(-434590080);
			func_404(449774763);
			func_403(1743048395);
			break;
		
		case 449774763:
			func_404(1376646519);
			func_404(931649776);
			func_404(-434590080);
			func_404(1743048395);
			func_403(449774763);
			break;
		
		case -1414537028:
			func_404(38162571);
			func_404(1350391819);
			func_404(54073871);
			func_403(-1414537028);
			break;
		
		case 38162571:
			func_404(-1414537028);
			func_404(1350391819);
			func_404(54073871);
			func_403(38162571);
			break;
		
		case 1350391819:
			func_404(-1414537028);
			func_404(38162571);
			func_404(54073871);
			func_403(1350391819);
			break;
		
		case 54073871:
			func_404(-1414537028);
			func_404(38162571);
			func_404(1350391819);
			func_403(54073871);
			break;
		
		case 198200492:
			func_403(198200492);
			func_404(-1124061431);
			func_404(52706132);
			func_404(-259123672);
			break;
		
		case -1124061431:
			func_404(198200492);
			func_403(-1124061431);
			func_404(52706132);
			func_404(-259123672);
			break;
		
		case 52706132:
			func_404(198200492);
			func_404(-1124061431);
			func_403(52706132);
			func_404(-259123672);
			break;
		
		case -259123672:
			func_404(198200492);
			func_404(-1124061431);
			func_404(52706132);
			func_403(-259123672);
			break;
		
		case -919512195:
			func_403(-919512195);
			func_404(-1925798111);
			func_404(420709909);
			func_404(1703426636);
			break;
		
		case -1925798111:
			func_403(-1925798111);
			func_404(-919512195);
			func_404(420709909);
			func_404(1703426636);
			break;
		
		case 420709909:
			func_403(420709909);
			func_404(-919512195);
			func_404(-1925798111);
			func_404(1703426636);
			break;
		
		case 1703426636:
			func_403(1703426636);
			func_404(-919512195);
			func_404(-1925798111);
			func_404(420709909);
			break;
		
		case -1223121209:
			func_403(-1223121209);
			func_404(630808005);
			break;
		
		case 630808005:
			func_403(630808005);
			func_404(-1223121209);
			break;
		
		case 1453909576:
			func_403(1453909576);
			func_404(1643531967);
			break;
		
		case 1643531967:
			func_403(1643531967);
			func_404(1453909576);
			break;
		
		case 0:
			func_403(0);
			func_404(473295046);
			func_404(-1738165526);
			break;
		
		case 473295046:
			func_403(473295046);
			func_404(0);
			func_404(-1738165526);
			break;
		
		case -1738165526:
			func_403(-1738165526);
			func_404(0);
			func_404(473295046);
			break;
		
		case 932909855:
			func_403(932909855);
			func_404(2051822093);
			break;
		
		case 2051822093:
			func_403(2051822093);
			func_404(932909855);
			break;
		
		case 405586984:
			func_403(405586984);
			func_404(1509509592);
			func_404(-959357075);
			func_404(-1311865656);
			break;
		
		case 1509509592:
			func_403(1509509592);
			func_404(405586984);
			func_404(-959357075);
			func_404(-1311865656);
			break;
		
		case -959357075:
			func_403(-959357075);
			func_404(1509509592);
			func_404(405586984);
			func_404(-1311865656);
			break;
		
		case -1311865656:
			func_403(-1311865656);
			func_404(1509509592);
			func_404(-959357075);
			func_404(405586984);
			break;
		
		case -524145696:
			if (bParam1)
			{
				func_403(-524145696);
			}
			else
			{
				func_404(-524145696);
			}
			func_404(1626481264);
			func_404(282809459);
			break;
		
		case 282809459:
			func_403(282809459);
			func_404(1626481264);
			func_404(-524145696);
			break;
		
		case 1626481264:
			func_403(1626481264);
			func_404(-524145696);
			func_404(282809459);
			break;
		
		case 885203519:
			if (bParam1)
			{
				func_403(885203519);
			}
			else
			{
				func_404(885203519);
			}
			break;
		
		case -1080627546:
			if (bParam1)
			{
				func_403(-1080627546);
			}
			else
			{
				func_404(-1080627546);
			}
			break;
		
		default:
			if (bParam1)
			{
				if (!func_407(iParam0))
				{
					func_403(iParam0);
				}
			}
			else if (func_407(iParam0))
			{
				func_404(iParam0);
			}
			break;
	}
}

void func_281(int iParam0)
{
	if (!func_408(iParam0))
	{
		func_410(func_409(iParam0));
	}
}

int func_282()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_408(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_284(iVar9);
	iVar2 = func_284(iVar10);
	iVar3 = func_284(iVar11);
	iVar5 = func_285(iVar9);
	iVar6 = func_285(iVar10);
	iVar7 = func_285(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_284(iVar12);
		iVar8 = func_285(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (func_173(iParam0, 1, 0))
	{
		iVar0 = func_128(iParam0, 0, 0);
	}
	return iVar0;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		
		case -164081697:
			return 5;
		
		case -1161319399:
			return 5;
		
		case 728781265:
			return 15;
		
		case -222563712:
			return 20;
		
		case 1794857344:
			return 7;
		
		case 1952409553:
			return 10;
		
		case 2116770557:
			return 25;
		
		case -651064726:
			return 3;
		
		case -404270094:
			return 7;
		
		case 2093126853:
			return 5;
		
		case 2085530337:
			return 30;
		
		case -150591160:
			return 5;
		
		case -323969289:
			return 10;
		
		case 1504361882:
			return 5;
		
		case -1521783510:
			return 5;
		
		case 1714875242:
			return 5;
		
		case 1019229063:
			return 5;
		
		case 927763737:
			return 10;
		
		default:
			break;
	}
	return 0;
}

int func_286(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_287(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_288(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_357(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_289(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_288(iParam1, 5) || iParam0 == func_288(iParam1, 6)) || iParam0 == func_288(iParam1, 7)) || iParam0 == func_288(iParam1, 8)) || iParam0 == func_288(iParam1, 9))
	{
		func_279(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_141(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_143(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == func_288(iParam1, 5) || iParam0 == func_288(iParam1, 6)) || iParam0 == func_288(iParam1, 7)) || iParam0 == func_288(iParam1, 8)) || iParam0 == func_288(iParam1, 9))
	{
		if (func_279(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_141(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_143(51, 0, 0, iVar0, func_232(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_141(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_143(51, 0, 0, iVar0, func_232(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_291()
{
	if (func_230(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_222(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_307("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_308(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_249(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_309(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_309(iVar1);
	}
	return 0;
}

void func_293(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_294(int iParam0)
{
	if (!func_411(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_295(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_296(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_412(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
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

int func_299(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_413();
	if (iParam2 == 39)
	{
		Var0 = { func_68(iParam0, 1, 0) };
		iParam2 = func_298(func_297(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_144(iParam0, 866047851) && func_393(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_302(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_414(func_412(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_415(iParam2);
	func_416(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_417(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_417(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_418(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_419(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_420(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_420(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_421(func_412(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_300(bool bParam0, bool bParam1, bool bParam2)
{
	func_422(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_301(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_423(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_424(Var0);
}

bool func_302(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_303()
{
	func_425(&(Global_1946804->f_2776));
	func_426(32768);
	func_421(1108822547, 8, 6);
}

int func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_298(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_305(int iParam0)
{
	struct<4> Var0;
	
	if (func_427(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_428(Var0);
}

void func_306(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_428(Var0);
}

int func_307(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_104(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_308(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_310()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_429())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_430(2);
	}
	if (Global_1347477->f_119)
	{
		return func_430(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_431();
	fVar2 = func_432();
	fVar3 = func_433();
	fVar4 = func_434();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_435()));
	fVar7 = (func_430(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_436(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_437(3, fVar9, fVar9 > 100f);
	return func_438(fVar7, -100f, 100f);
}

float func_311()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_429())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_430(1);
	}
	if (Global_1347477->f_119)
	{
		return func_430(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_431();
	fVar2 = func_432();
	fVar3 = func_433();
	fVar4 = func_434();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_435()));
	fVar7 = (func_430(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_436(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_437(2, fVar9, fVar9 > 100f);
	return func_438(fVar7, -100f, 100f);
}

float func_312()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_429())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_430(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_439())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_440())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_430(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_431();
	fVar2 = func_432();
	fVar3 = func_433();
	fVar4 = func_434();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_435()));
	fVar7 = (func_430(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_436(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_437(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_430(0);
	}
	return func_438(fVar7, -100f, 100f);
}

bool func_313(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_315(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_100(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_220(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_101(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_104(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		
		case 81053684:
			return Global_1946804->f_2657.f_23;
		
		case -525676072:
			return Global_1946804->f_2657.f_22;
		
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		
		case -413129408:
			return Global_1946804->f_2657.f_25;
		
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_441();
			}
			break;
	}
	return 0;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		
		case 1661121390:
			return 6;
		
		case 1164374808:
			return 7;
		
		case 624063935:
			return 9;
		
		case -1476781101:
			return 10;
		
		case 1560492757:
			return 15;
		
		case -769081407:
			return 16;
		
		case 688004210:
			return 20;
		
		case 166243423:
			return 0;
		
		case -1826731591:
			return 24;
		
		case 2119049229:
			return 25;
		
		case 1352942778:
			return 26;
		
		case 1964379549:
			return 27;
		
		case 1201189539:
			return 28;
		
		case 1351927599:
			return 21;
		
		case 2032023096:
			return 22;
		
		case 1784889667:
			return 13;
		
		case 1160643979:
			return 8;
		
		case 1383300684:
			return 1;
		
		case 2051441678:
			return 2;
		
		case 162509669:
			return 3;
		
		case 635948769:
			return 4;
		
		case 274995506:
			return 5;
		
		case 1902428294:
			return 17;
		
		case -2114499732:
			return 18;
		
		case 800827126:
			return 19;
		
		case 294553332:
			return 11;
		
		case 1788874135:
			return 12;
		
		case -1243402388:
			return 66;
		
		case 65931886:
			return 67;
		
		case 1371678229:
			return 68;
		
		case 2102263084:
			return 69;
		
		case -272211555:
			return 61;
		
		case -55563408:
			return 64;
		
		case -1914506115:
			return 71;
		
		case 802495462:
			return 75;
		
		case 842905332:
			return 77;
		
		case 1511551084:
			return 79;
		
		case -1725704631:
			return 81;
		
		case 1257427489:
			return 83;
		
		case -659341240:
			return 85;
		
		case 2038771525:
			return 87;
		
		case -535599244:
			return 89;
		
		case -389591806:
			return 73;
		
		case -1205612021:
			return 70;
		
		case 890706995:
			return 93;
		
		case 1156438275:
			return 90;
		
		case -1611873049:
			return 91;
		
		case 594312243:
			return 92;
		
		case -978578725:
			return 94;
		
		case -361635024:
			return 62;
		
		case -1951220140:
			return 78;
		
		case 1460520700:
			return 76;
		
		case 523337834:
			return 80;
		
		case -19271249:
			return 82;
		
		case 214175524:
			return 84;
		
		case -1303643297:
			return 86;
		
		case 411856831:
			return 88;
		
		case -926815459:
			return 72;
		
		case -1300731953:
			return 74;
		
		case -409616653:
			return 65;
		
		case 509954990:
			return 29;
		
		case -445916744:
			return 30;
		
		case -866249154:
			return 31;
		
		case -2077063704:
			return 32;
		
		case 205207539:
			return 33;
		
		case -1033657275:
			return 34;
		
		case 1806002837:
			return 35;
		
		case 705324896:
			return 36;
		
		case -1541763703:
			return 37;
		
		case 387052410:
			return 38;
		
		case -361288914:
			return 39;
		
		case -911054515:
			return 40;
		
		case 1084200963:
			return 41;
		
		case 1847948074:
			return 42;
		
		case -1212526764:
			return 43;
		
		case 1851440270:
			return 44;
		
		case -2028985700:
			return 45;
		
		case 1074435214:
			return 46;
		
		case -883015675:
			return 47;
		
		case -1047155604:
			return 48;
		
		case 1123231221:
			return 49;
		
		case 1866989210:
			return 50;
		
		case 478183719:
			return 51;
		
		case -1698955868:
			return 52;
		
		case -2029378634:
			return 53;
		
		case 1339864416:
			return 54;
		
		case 890998115:
			return 55;
		
		case -1376288999:
			return 56;
		
		case -1041123771:
			return 57;
		
		case 1389254668:
			return 58;
		
		case -346112633:
			return 59;
		
		case 773309172:
			return 60;
		
		case -291256376:
			return 23;
		
		default:
			break;
	}
	return -1;
}

int func_318(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_319(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_318(iParam0))
	{
		return;
	}
	if (func_442(iParam0))
	{
		return;
	}
	if (!func_443(iParam0))
	{
		func_444(iParam0, 1, 0);
	}
	iVar0 = func_445(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_446(iParam0, 512))
		{
			func_301(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_447() && !bParam1) && !func_73(0, 0, 1))
	{
		func_448(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_449(iParam0, 6);
	if (bParam2)
	{
		if (!func_73(0, 0, 1))
		{
			func_23(1, 4);
		}
	}
}

int func_320()
{
	return Global_1946804->f_1;
}

bool func_321(int iParam0, bool bParam1)
{
	return func_316(iParam0, 0) < func_450(iParam0, bParam1);
}

int func_322(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_96(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_323(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_298(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_298(iParam0, 1) /*11*/];
}

void func_324(int iParam0, int iParam1)
{
	if (func_144(iParam1, 130796156))
	{
		func_451(iParam1, 0);
	}
	else if (func_144(iParam1, 930141731))
	{
		func_451(iParam1, 1);
		func_452(iParam0);
	}
}

void func_325(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_326(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_453(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_454(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_327(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

int func_328(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		
		case 7:
			return "PROVISION_FISH_MUSKIE";
		
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		
		case 9:
			return "PROVISION_FISH_PERCH";
		
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_330(int iParam0)
{
	var uVar0;
	
	if (!func_455(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_331(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_456(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_332()
{
	return !&Global_1911774;
}

void func_333(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_334(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_335(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_336(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_457(iVar0);
}

int func_338(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_458(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_339()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_340(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<37> Var0;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*uParam2 = Var0.f_1;
	return 1;
}

int func_341(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_68(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_250((375 + iVar29), 1);
		if (func_93(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_94(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

struct<14> func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_343(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_344(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_104(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_346(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		
		case 2:
			return 20f;
		
		case 3:
			return 10f;
		
		case 4:
			return 10f;
		
		case 5:
			return 20f;
		
		case 6:
			return 10f;
		
		case 7:
			return 15f;
		
		case 8:
			return 15f;
		
		case 9:
			return 20f;
		
		case 10:
			return 5f;
		
		case 11:
			return 5f;
		
		case 12:
			return 10f;
		
		case 13:
			return 20f;
		
		case 14:
			return 30f;
		
		case 15:
			return 5f;
		
		case 16:
			return 5f;
		
		case 17:
			return 3f;
		
		case 18:
			return 20f;
		
		case 19:
			return func_459(iParam0);
		
		case 20:
			return 25f;
		
		case 21:
			return 50f;
		
		case 22:
			return 100f;
		
		case 23:
			return 150f;
		
		case 24:
			return 20f;
		
		case 25:
			return 10f;
		
		case 26:
			return 20f;
		
		case 27:
			return 20f;
		
		case 28:
			return 20f;
		
		case 29:
			return 20f;
		
		case 30:
			return func_459(iParam0);
		
		case 31:
			return 25f;
		
		case 32:
			return 50f;
		
		case 33:
			return 100f;
		
		case 34:
			return 150f;
		
		case 35:
			return 1f;
		
		case 36:
			return 5f;
		
		case 37:
			return 1f;
		
		case 38:
			return 3f;
		
		case 39:
			return 1f;
		
		case 40:
			return 1f;
		
		case 41:
			return 1f;
		
		case 42:
			return 5f;
		
		case 43:
			return 10f;
		
		case 49:
			return 20f;
		
		case 44:
			return 5f;
		
		case 45:
			return 5f;
		
		case 46:
			return 10f;
		
		case 47:
			return 10f;
		
		case 48:
			return 5f;
		
		case 50:
			return func_459(iParam0);
		
		case 51:
			return 25f;
		
		case 52:
			return 50f;
		
		case 53:
			return 100f;
		
		case 54:
			return 150f;
		
		case 55:
			return 5f;
		
		default:
			break;
	}
	return 0f;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_146(18);
		
		case 2:
			return func_146(20);
		
		case 1:
			return func_146(19);
		
		default:
			break;
	}
	return 1;
}

int func_348(int iParam0)
{
	return func_460(&(Global_40.f_11095.f_11[iParam0]));
}

void func_349(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_146(31))
	{
		return;
	}
	iVar0 = func_348(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_348(iParam0);
	if (func_461(iParam0) && func_462(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_463(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_464(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_135(func_465(iParam0), 0);
					}
					func_466(iParam0, iVar2, iVar3);
					func_467(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_350(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		
		case 0:
			return 2001720289;
		
		case 2:
			return 234329797;
		
		default:
			break;
	}
	return 0;
}

bool func_352(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_353(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_313(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_313(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_313(iParam0, 65536) && !func_313(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_313(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_313(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_355(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_356()
{
	return Global_1905944->f_5694;
}

int func_357(int iParam0, var uParam1)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_358()
{
	return func_469(Global_40.f_12018);
}

int func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_231(iVar1);
		if (func_173(iVar2, 1, 0) || func_365(func_364(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_360()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_470(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_361()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_370(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_362()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		
		case -1021394391:
			return 8;
		
		case 232875659:
			return 4;
		
		case -1028735103:
			return 16;
		
		case 554799588:
			return 32;
		
		case 1265323898:
			return 64;
		
		case -1854702679:
			return 128;
		
		case -987306668:
			return 256;
		
		case -479775696:
			return 2;
		
		case 515229791:
			return 512;
		
		case -435742319:
			return 1024;
		
		case 1423129537:
			return 2048;
		
		default:
			break;
	}
	return 0;
}

bool func_365(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		
		case 1:
			return "COL_DB_SEND";
		
		case 2:
			return "COL_DB_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		default:
			break;
	}
	return 5;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		case 3:
			return 18;
		
		case 4:
			return 19;
		
		default:
			break;
	}
	return 15;
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		
		case -222563712:
			return "COL_HF_FOUND";
		
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		
		case 2116770557:
			return "COL_GF_FOUND";
		
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		
		case 2085530337:
			return "COL_SF_FOUND";
		
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		
		default:
			break;
	}
	return "";
}

bool func_370(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_371(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		
		default:
			break;
	}
	return "";
}

char* func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		
		case 1:
			return "COL_RC_SEND";
		
		case 2:
			return "COL_RC_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_373(int iParam0)
{
	if (func_471(iParam0) && func_173(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_472(iParam0) && func_473(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_374(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_191(iParam0));
}

int func_375(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_376(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_377(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_378(int iParam0)
{
	int iVar0;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_379(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_380(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_381(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_382(bool bParam0)
{
	int iVar0;
	
	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_383(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_384(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_385(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_298(iParam0, 1) /*3*/]);
}

void func_386()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_474();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_150(-916314281);
		func_197(-916314281, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -916314281, true, 2, false, false);
		func_150(494733111);
		func_197(494733111, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 494733111, true, 4, false, false);
	}
}

int func_387(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_389()
{
	return &Global_1899515;
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_475(*iParam0);
	iVar1 = func_476(*iParam0);
	iVar2 = func_477(*iParam0);
	iVar3 = func_478(*iParam0);
	iVar4 = func_479(*iParam0);
	iVar5 = func_480(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_481(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_481(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_482(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_391(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_392(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_68(iParam0, 1, 0) };
	return func_297(Var0.f_4);
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_394(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_298(func_483(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_96(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_395(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == &Global_1946804->f_57[func_298(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_302(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		
		case 1:
			return -649219937;
		
		case 2:
			return -858567048;
		
		case 3:
			return -718162726;
		
		case 4:
			return -1284282080;
		
		case 5:
			return -725003445;
		
		case 6:
			return -1445630104;
		
		case 7:
			return 580970876;
		
		case 8:
			return 967601061;
		
		case 9:
			return 1946030891;
		
		case 10:
			return -1511404982;
		
		case 11:
			return -944465290;
		
		case 12:
			return -1701098855;
		
		case 13:
			return 425319238;
		
		case 14:
			return 363594903;
		
		case 15:
			return -1217729597;
		
		case 16:
			return -1540119664;
		
		case 17:
			return 2100194981;
		
		case 18:
			return 446659922;
		
		case 19:
			return -390982951;
		
		case 20:
			return -1018798851;
		
		case 21:
			return -757567246;
		
		case 22:
			return -2054602073;
		
		case 23:
			return -378441099;
		
		case 24:
			return -585121677;
		
		case 25:
			return 1566949660;
		
		default:
			break;
	}
	return 0;
}

int func_397(var uParam0)
{
	return func_484(uParam0, -1);
}

bool func_398(int iParam0, bool bParam1)
{
	return func_485(func_389(), iParam0, bParam1);
}

int func_399()
{
	if (func_259())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_400(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_486((Global_40.f_4283.f_325 + iParam0));
}

void func_401(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_399())
	{
		func_331(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_331(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_402(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_403(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_487(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_487(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_405()
{
	func_404(-939420910);
	func_404(-1187950766);
	func_404(356365161);
	func_404(753127042);
	func_404(-2038424081);
	func_404(1884271742);
	func_404(459290420);
}

void func_406()
{
	func_404(704802028);
	func_404(588987611);
	func_404(2008888900);
	func_404(1649996811);
	func_404(227918160);
	func_404(168171957);
	func_404(1193080109);
	func_404(-491981251);
	func_404(-639037538);
	func_404(-618620429);
}

bool func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_487(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_408(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		
		case -2087881550:
			return 2;
		
		case 1908068621:
			return 4;
		
		case 1611247019:
			return 8;
		
		case 1319635688:
			return 16;
		
		default:
			break;
	}
	return 0;
}

void func_410(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_411(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_412(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_413()
{
	int iVar0;
	
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_414(int iParam0)
{
	func_421(iParam0, 8, 6);
}

void func_415(int iParam0)
{
	func_488(&(Global_1946804->f_2589), iParam0);
}

void func_416(int iParam0, int iParam1)
{
	func_489(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_417(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_418(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 12;
	iVar2 = func_96(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_490(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_416(iVar1, iVar3);
		}
	}
	if (func_323(-1586649372) && func_490(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_416(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_416(iVar1, iVar3);
					}
				}
			}
			func_491(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		
		case 688587926:
			func_491(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_416(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_491(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_416(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_416(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_491(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_491(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_416(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_491(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_416(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_416(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_96(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_416(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_144(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_96(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_96(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_416(iVar1, iVar3);
						}
					}
					break;
				
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_96(&(uParam0->f_1[iVar1 /*3*/])) || func_144(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_416(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_419(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_492(0);
	if (iParam2 != 0 && func_493(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_494(iParam0, func_412(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_420(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	bVar6 = func_1() != -1;
	iVar7 = func_492(0);
	if (func_302(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_412(iVar0, 1);
			if (func_495(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_495(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_395(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_496(uParam0);
				if (iVar3 > 0)
				{
					if (!func_302(524288))
					{
						func_423(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_412(iVar0, 1);
							if (func_495(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_495(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_395(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_416(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_426(524288);
				}
			}
		}
	}

void func_421(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_298(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_298(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_298(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_422(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_497(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_498(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_445(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_445(Global_40.f_7729);
				Global_1946804->f_1378 = func_445(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_499(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_500(0, 1);
	}
}

void func_423(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_424(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_501(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_502(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_423(8);
			break;
		
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_501(Param0))
			{
				return;
			}
			func_502(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_423(8);
			break;
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_306(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_425(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_426(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_427(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_428(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_501(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_501(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_502(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_423(8);
}

int func_429()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_430(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_431()
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_503(13);
	iVar1 = func_504(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_432()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_433()
{
	if (func_259())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_434()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_435()
{
	return Global_1955565->f_3;
}

void func_436(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_505(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_437(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_505(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_438(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_439()
{
	return func_503(12) <= -99f;
}

bool func_440()
{
	return func_503(12) >= 99f;
}

int func_441()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_96(iVar1) == -999503751)
		{
			if (func_506() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_442(int iParam0)
{
	if (!func_318(iParam0))
	{
		return 0;
	}
	if (func_446(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0)
{
	if (!func_318(iParam0))
	{
		return 0;
	}
	if (func_446(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_444(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_318(iParam0))
	{
		return;
	}
	if (!func_443(iParam0))
	{
		func_449(iParam0, 2);
		if (bParam2)
		{
			if (!func_73(0, 0, 1))
			{
				func_23(1, 4);
			}
		}
		if ((!func_447() && !bParam1) && !func_73(0, 0, 1))
		{
			func_448(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_507(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		
		case 6:
			return 1661121390;
		
		case 7:
			return 1164374808;
		
		case 8:
			return 1160643979;
		
		case 9:
			return 624063935;
		
		case 10:
			return -1476781101;
		
		case 11:
			return 294553332;
		
		case 12:
			return 1788874135;
		
		case 15:
			return 1560492757;
		
		case 16:
			return -769081407;
		
		case 17:
			return 1902428294;
		
		case 18:
			return -2114499732;
		
		case 19:
			return 800827126;
		
		case 20:
			return 688004210;
		
		case 0:
			return 166243423;
		
		case 1:
			return 1383300684;
		
		case 2:
			return 2051441678;
		
		case 3:
			return 162509669;
		
		case 4:
			return 635948769;
		
		case 5:
			return 274995506;
		
		case 24:
			return -1826731591;
		
		case 25:
			return 2119049229;
		
		case 26:
			return 1352942778;
		
		case 27:
			return 1964379549;
		
		case 28:
			return 1201189539;
		
		case 21:
			return 1351927599;
		
		case 22:
			return 2032023096;
		
		case 23:
			return -291256376;
		
		case 66:
			return -1243402388;
		
		case 67:
			return 65931886;
		
		case 68:
			return 1371678229;
		
		case 69:
			return 2102263084;
		
		case 61:
			return -272211555;
		
		case 64:
			return -55563408;
		
		case 71:
			return -1914506115;
		
		case 75:
			return 802495462;
		
		case 77:
			return 842905332;
		
		case 78:
			return -1951220140;
		
		case 79:
			return 1511551084;
		
		case 81:
			return -1725704631;
		
		case 83:
			return 1257427489;
		
		case 85:
			return -659341240;
		
		case 87:
			return 2038771525;
		
		case 89:
			return -535599244;
		
		case 73:
			return -389591806;
		
		case 70:
			return -1205612021;
		
		case 93:
			return 890706995;
		
		case 90:
			return 1156438275;
		
		case 91:
			return -1611873049;
		
		case 92:
			return 594312243;
		
		case 94:
			return -978578725;
		
		case 13:
			return 1784889667;
		
		case 62:
			return -361635024;
		
		case 76:
			return 1460520700;
		
		case 80:
			return 523337834;
		
		case 82:
			return -19271249;
		
		case 84:
			return 214175524;
		
		case 86:
			return -1303643297;
		
		case 88:
			return 411856831;
		
		case 72:
			return -926815459;
		
		case 74:
			return -1300731953;
		
		case 65:
			return -409616653;
		
		case 29:
			return 509954990;
		
		case 30:
			return -445916744;
		
		case 31:
			return -866249154;
		
		case 32:
			return -2077063704;
		
		case 33:
			return 205207539;
		
		case 34:
			return -1033657275;
		
		case 35:
			return 1806002837;
		
		case 36:
			return 705324896;
		
		case 37:
			return -1541763703;
		
		case 38:
			return 387052410;
		
		case 39:
			return -361288914;
		
		case 40:
			return -911054515;
		
		case 41:
			return 1084200963;
		
		case 42:
			return 1847948074;
		
		case 43:
			return -1212526764;
		
		case 44:
			return 1851440270;
		
		case 45:
			return -2028985700;
		
		case 46:
			return 1074435214;
		
		case 47:
			return -883015675;
		
		case 48:
			return -1047155604;
		
		case 49:
			return 1123231221;
		
		case 50:
			return 1866989210;
		
		case 51:
			return 478183719;
		
		case 52:
			return -1698955868;
		
		case 53:
			return -2029378634;
		
		case 54:
			return 1339864416;
		
		case 55:
			return 890998115;
		
		case 56:
			return -1376288999;
		
		case 57:
			return -1041123771;
		
		case 58:
			return 1389254668;
		
		case 59:
			return -346112633;
		
		case 60:
			return 773309172;
		
		default:
			break;
	}
	return 0;
}

bool func_446(int iParam0, int iParam1)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_447()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_448(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_449(int iParam0, int iParam1)
{
	if (!func_318(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_450(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		
		case 81053684:
			iVar0 = 1;
			break;
		
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		
		case -1719060085:
			iVar0 = 1;
			break;
		
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		
		case -413129408:
			iVar0 = 1;
			break;
		
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_451(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_508(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_147(50);
			}
			else
			{
				func_147(48);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_147(51);
			}
			else
			{
				func_147(49);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (!func_509(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_178();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_178();
			}
			break;
		
		case 3:
			func_147(24);
			if (bParam1)
			{
				if (!func_509(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_178();
				}
			}
			break;
	}
}

void func_452(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_510(0))
			{
				iVar0++;
			}
			if (func_510(2))
			{
				iVar0++;
			}
			if (func_510(4))
			{
				iVar0++;
			}
			if (!func_511(16))
			{
				if (iVar0 == 1)
				{
					func_512();
					func_135(456, 1);
					func_513(16);
				}
			}
			if (!func_511(32))
			{
				if (iVar0 >= 3)
				{
					func_512();
					func_135(456, 1);
					func_513(32);
				}
			}
			break;
		
		case 1:
		case 3:
		case 7:
			if (func_510(1))
			{
				iVar0++;
			}
			if (func_510(3))
			{
				iVar0++;
			}
			if (func_510(7))
			{
				iVar0++;
			}
			if (!func_511(1))
			{
				if (iVar0 == 1)
				{
					func_514();
					func_135(457, 1);
					func_513(1);
				}
			}
			if (!func_511(2))
			{
				if (iVar0 >= 3)
				{
					func_514();
					func_135(457, 1);
					func_513(2);
				}
			}
			break;
		
		case 5:
		case 6:
		case 8:
			if (func_510(5))
			{
				iVar0++;
			}
			if (func_510(6))
			{
				iVar0++;
			}
			if (func_510(8))
			{
				iVar0++;
			}
			if (!func_511(4))
			{
				if (iVar0 == 1)
				{
					func_515();
					func_135(455, 1);
					func_513(4);
				}
			}
			if (!func_511(8))
			{
				if (iVar0 >= 3)
				{
					func_515();
					func_135(455, 1);
					func_513(8);
				}
			}
			break;
	}
}

void func_453(var uParam0)
{
	func_325(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_325(uParam0, 617531372);
	}
	else
	{
		func_325(uParam0, 291123060);
	}
}

void func_454(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;
	
	if (!func_516(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_455(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_456(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_457(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_458(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

float func_459(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar4 = func_345(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_460(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_517(iVar6) - func_517(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		
		default:
			break;
	}
	return -1f;
}

int func_460(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 4:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 16:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_463(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_460(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_517(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_517(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (func_518(iParam0, &iVar0))
	{
		return func_517(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_519())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		
		case 0:
			if (func_519())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		
		case 2:
			if (func_519())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		
		case 4:
			return 0;
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		
		case 2:
			return 247;
		
		case 1:
			return 248;
		
		default:
			break;
	}
	return -1;
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	var uVar8;
	int iVar9;
	struct<6> Var10;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_520(iParam0));
	sVar4 = func_522(func_521(iVar3, iParam2));
	sVar6 = func_523(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_524(iParam0));
	uVar8 = func_525(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_526(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_240(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_527(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_467(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_468(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_470(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return 1;
		
		case -1969404854:
			return 1;
		
		case 1761263432:
			return 1;
		
		case -843795569:
			return 1;
		
		case -832850511:
			return 1;
		
		case -1464585113:
			return 1;
		
		case -1290897778:
			return 1;
		
		case -100913452:
			return 1;
		
		case 313332607:
			return 1;
		
		case -124539232:
			return 1;
		
		case 59384454:
			return 1;
		
		case 905173572:
			return 1;
		
		case 1432949803:
			return 1;
		
		case -983831788:
			return 1;
		
		case -1882344824:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		
		case -935543049:
			return 1;
		
		case 102446365:
			return 1;
		
		case 924882045:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_473(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;
	
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_528(&iVar0, 0, iVar95, &Var1) && !func_528(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_529(iVar0, &Var1);
			if (func_100(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_474()
{
	int iVar0;
	struct<4> Var30;
	
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_530(Global_35, &iVar0);
	Var30 = { func_88(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_531(0);
	func_532(7);
	func_533(-1623728698, 1, 1, 0);
	if (func_320() == 1160113249)
	{
		func_533(-763730846, 1, 1, 1);
		func_533(-361635024, 1, 1, 1);
	}
	func_534(Global_35, &iVar0);
}

var func_475(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_535(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_476(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_477(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_478(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_479(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_480(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_481(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_482(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_536(uParam0, iParam6);
	func_537(uParam0, iParam5);
	func_538(uParam0, iParam4);
	func_539(uParam0, iParam3);
	func_540(uParam0, iParam2);
	func_541(uParam0, iParam1);
}

int func_483(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_297(iVar0);
}

int func_484(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (iParam1 < 0)
	{
		iParam1 = func_104(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_536(&uVar6, iVar0);
	func_537(&uVar6, iVar1);
	func_538(&uVar6, iVar2);
	func_539(&uVar6, iVar3);
	func_540(&uVar6, iVar4);
	func_541(&uVar6, iVar5);
	return uVar6;
}

bool func_485(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_542(iParam1) || !func_542(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_486(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_327(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_487(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
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

void func_488(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_543(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_543(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_544(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_489(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_545(uParam0, 1))
	{
		func_546(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_490(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_491(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_416(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_416(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_416(iVar2, iVar0);
		}
	}
}

int func_492(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iParam0 = func_320();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_493(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_494(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

bool func_495(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_298(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_496(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_497(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_547(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_548(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_498(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_499(int iParam0, bool bParam1, int iParam2)
{
	func_549(&(Global_1946804->f_1378), iParam0);
	func_550(2, iParam0, 6);
	if (bParam1)
	{
		func_500(0, 1);
	}
}

void func_500(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_551(0);
	}
	if (bParam0)
	{
		func_423(8);
		func_423(512);
	}
	else
	{
		func_423(8);
		func_423(16);
	}
}

bool func_501(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_502(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_503(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_504(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_505(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_334(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				
				case 2:
					return func_334(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				
				default:
					break;
			}
			break;
	}
	return "";
}

int func_506()
{
	return Global_1946804->f_1497;
}

char* func_507(int iParam0)
{
	int iVar0;
	
	iVar0 = func_445(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_374(iVar0);
}

int func_508(int iParam0)
{
	int iVar0;
	
	if (func_552(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_553(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_554(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_555(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_173(func_556(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_173(func_557(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_511(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_512()
{
	int iVar0;
	
	if (func_1() != -1)
	{
		return;
	}
	func_197(1654063339, 1, 752097756);
	iVar0 = func_348(1);
	func_466(1, iVar0, 0);
}

void func_513(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_514()
{
	int iVar0;
	
	if (func_1() != -1)
	{
		return;
	}
	func_197(1623931083, 1, 752097756);
	iVar0 = func_348(2);
	func_466(2, iVar0, 0);
}

void func_515()
{
	int iVar0;
	
	if (func_1() != -1)
	{
		return;
	}
	func_197(-1845241476, 1, 752097756);
	iVar0 = func_348(0);
	func_466(0, iVar0, 0);
}

int func_516(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 0:
			return 0;
		
		case 1:
			return 50;
		
		case 2:
			return 100;
		
		case 3:
			return 200;
		
		case 4:
			return 350;
		
		case 5:
			return 550;
		
		case 6:
			return 800;
		
		case 7:
			return 1100;
		
		default:
			break;
	}
	return 0;
}

int func_518(var uParam0, var uParam1)
{
	return 0;
}

int func_519()
{
	return 0;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_104(0), -1845241476, 0);
		
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_104(0), 1654063339, 0);
		
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_104(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_521(int iParam0, int iParam1)
{
	char cVar0[32];
	
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_522(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_523(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		
		case 0:
			return "stamina";
		
		case 2:
			return "dead_eye_level_up";
		
		default:
			break;
	}
	return "";
}

char* func_524(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		
		case 0:
			return "RPG_HEALTH";
		
		case 2:
			return "RPG_DEADEYE";
		
		default:
			break;
	}
	return "";
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		
		case 0:
			return 1874233471;
		
		case 2:
			return -1285232277;
		
		default:
			break;
	}
	return 0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
			break;
	}
	return 0;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		
		case 1:
			return 304419444;
		
		case 2:
			return 1497019382;
		
		default:
			break;
	}
	return 0;
}

int func_528(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	
	if (func_558(iParam1) && !func_559(iParam1))
	{
		iVar0 = func_560(iParam1);
	}
	else
	{
		return 0;
	}
	func_561(uParam3);
	iVar5 = func_562(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*uParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*uParam0);
	return 1;
}

void func_529(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_563(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_564(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_530(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_249(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_531(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_100(iVar1, 0))
		{
			func_565(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_1() == -1)
	{
		func_566(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_96(iVar2) != -999503751)
		{
			func_567(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_568(iVar2, 0))
		{
			func_569(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_533(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	if (!func_570(iParam0))
	{
		return;
	}
	iVar0 = func_96(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		
		case 81053684:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		
		case -999503751:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		
		case -525676072:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		
		case -1719060085:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		
		case -413129408:
			bVar1 = func_571(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_572(0))
	{
		func_573(iParam0, 1);
		if (func_320() == 1160113249)
		{
			func_573(func_572(-2125499975), 0);
		}
		else
		{
			func_573(func_572(1160113249), 0);
		}
	}
	func_574();
	if (func_575(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_104(0), iParam0, 0);
	}
	func_569(iParam0, bParam3);
	if (bParam2)
	{
		func_500(0, 0);
	}
}

void func_534(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, 0))
			{
				if (func_248(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_535(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_536(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_537(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_538(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_476(*uParam0);
	iVar1 = func_475(*uParam0);
	if (iParam1 < 1 || iParam1 > func_481(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_539(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_540(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_541(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_542(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_480(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_479(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_478(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_475(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_476(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_477(iParam0);
	if (iVar5 < 1 || iVar5 > func_481(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_543(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_544(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_545(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_546(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_547(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_549(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_547(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_548(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_550(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_551(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_552(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (func_144(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (func_144(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_554(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (func_144(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_555(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	if (func_144(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_556(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_576(iParam0);
		
		case 1:
			return func_577(iParam0);
		
		case 2:
			return func_578(iParam0);
		
		case 3:
			return func_579(iParam0);
	}
	return 0;
}

int func_557(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_580(iParam0);
		
		case 1:
			return func_581(iParam0);
		
		case 2:
			return func_582(iParam0);
		
		case 3:
			return func_583(iParam0);
		
		case 4:
			return func_584(iParam0);
		
		case 5:
			return func_585(iParam0);
		
		case 6:
			return func_586(iParam0);
		
		case 7:
			return func_587(iParam0);
		
		case 8:
			return func_588(iParam0);
	}
	return 0;
}

int func_558(int iParam0)
{
	iParam0 = func_589(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_559(int iParam0)
{
	int iVar0;
	
	iParam0 = func_589(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_558(iParam0))
	{
		return 0;
	}
	iVar0 = func_560(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	iParam0 = func_589(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_561(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_562(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
	}
	return 0;
}

void func_563(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			
			case 1:
				*uParam1 = 1;
				break;
			
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_564(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_565(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_96(iParam0))
	{
		case -2061583405:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_590(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_574();
	}
	if (bParam1)
	{
		func_500(0, 0);
	}
}

void func_566(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_342(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_344(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_309(iVar0);
	}
}

void func_567(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_591(iParam2, *uParam0);
	func_592(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_568(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_68(iParam0, 0, 0) };
	Var5 = { func_90(iParam0, Var0, Var0.f_4, 0) };
	if (func_103(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_104(0), &Var5, iParam1);
	return 1;
}

void func_569(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_68(iParam0, 0, 0) };
	Var5 = { func_90(iParam0, Var0, Var0.f_4, 0) };
	if (func_103(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_104(0), &Var5, bParam1);
}

int func_570(int iParam0)
{
	if (func_1() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_571(int iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_593(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_568(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_96(iParam0) != -999503751)
	{
		func_567(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_572(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_320();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_573(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_68(iParam0, 0, 0) };
	Var5 = { func_90(iParam0, Var0, Var0.f_4, 0) };
	if (func_103(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_104(0), &Var5);
	return 1;
}

void func_574()
{
	int iVar0;
	
	if (func_1() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_575(int iParam0)
{
	return func_595(func_594(iParam0));
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		
		case 1:
			return 1877538667;
		
		case 2:
			return -747118240;
		
		case 3:
			return 356885366;
		
		case 4:
			return -733784435;
		
		case 5:
			return -2010021430;
		
		case 6:
			return -1563051210;
		
		case 7:
			return 1532314048;
		
		case 8:
			return -1378972544;
		
		default:
			break;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		
		case 1:
			return 1289620458;
		
		case 2:
			return 351104126;
		
		case 3:
			return -991258198;
		
		case 4:
			return -446539844;
		
		case 5:
			return 2146082234;
		
		case 6:
			return 330185476;
		
		case 7:
			return -1208917184;
		
		case 8:
			return -12904227;
		
		default:
			break;
	}
	return 0;
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		
		case 1:
			return 1398329674;
		
		case 2:
			return -35737408;
		
		case 3:
			return 651323163;
		
		case 4:
			return 343794650;
		
		case 5:
			return 2072880089;
		
		case 6:
			return -2120749726;
		
		case 7:
			return -1749072364;
		
		case 8:
			return -583780175;
		
		default:
			break;
	}
	return 0;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		
		case 1:
			return -567070698;
		
		case 2:
			return 797308288;
		
		case 3:
			return -1669506545;
		
		case 4:
			return -1011624341;
		
		case 5:
			return 516134254;
		
		case 6:
			return -940514956;
		
		case 7:
			return 2030473481;
		
		case 8:
			return 2084389834;
		
		default:
			break;
	}
	return 0;
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		
		case 1:
			return -77597297;
		
		case 2:
			return 624387589;
		
		case 3:
			return 1066104444;
		
		default:
			break;
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		
		case 1:
			return 1289620458;
		
		case 2:
			return 1398329674;
		
		case 3:
			return -567070698;
		
		default:
			break;
	}
	return 0;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		
		case 1:
			return 351104126;
		
		case 2:
			return -35737408;
		
		case 3:
			return 797308288;
		
		default:
			break;
	}
	return 0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		
		case 1:
			return -991258198;
		
		case 2:
			return 651323163;
		
		case 3:
			return -1669506545;
		
		default:
			break;
	}
	return 0;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		
		case 1:
			return -446539844;
		
		case 2:
			return 343794650;
		
		case 3:
			return -1011624341;
		
		default:
			break;
	}
	return 0;
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		
		case 1:
			return 2146082234;
		
		case 2:
			return 2072880089;
		
		case 3:
			return 516134254;
		
		default:
			break;
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		
		case 1:
			return 330185476;
		
		case 2:
			return -2120749726;
		
		case 3:
			return -940514956;
		
		default:
			break;
	}
	return 0;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		
		case 1:
			return -1208917184;
		
		case 2:
			return -1749072364;
		
		case 3:
			return 2030473481;
		
		default:
			break;
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		
		case 1:
			return -12904227;
		
		case 2:
			return -583780175;
		
		case 3:
			return 2084389834;
		
		default:
			break;
	}
	return 0;
}

int func_589(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_590(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (!func_593(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_96(iParam0) != -999503751)
		{
			func_596(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_96(iParam0) != -999503751)
	{
		func_596(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_568(iParam0, 1);
	return 1;
}

void func_591(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_592(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_597(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_298(func_392(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_598(uParam0);
	}
}

int func_593(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

bool func_595(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_596(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_599(iParam1);
	func_600(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_601(&(uParam0->f_26), iVar1);
		if (func_602(uParam0->f_26, &iVar0))
		{
			func_603(iVar0, iVar1);
		}
	}
}

void func_597(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_604(&(uParam0->f_3));
}

void func_598(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_605(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_599(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_600(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_601(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_597(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_602(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_603(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_604(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_605(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_606(func_320());
	if (*uParam0)
	{
		func_604(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_1() != -1, iParam2);
	*uParam0 = 1;
}

int func_606(int iParam0)
{
	if (func_1() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			
			case -449205311:
				return 0;
			
			case 1160113249:
				return 0;
			
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		
		case 24043185:
			return 1;
		
		default:
			break;
	}
	return 0;
}

