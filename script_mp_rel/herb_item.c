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
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	int iVar5;
	bool bVar6;
	
	iVar0 = ScriptParam_0.f_1;
	bVar1 = ScriptParam_0.f_3;
	bVar2 = ScriptParam_0.f_4;
	iVar5 = func_1(iVar0);
	bVar6 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var3, 3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_3(Global_35, 0) != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			func_2(&Var3, 3);
		}
		switch (func_4(&Var3))
		{
			case 0:
				if (func_3(Global_35, 0) != joaat("weapon_unarmed"))
				{
				}
				else
				{
					func_2(&Var3, 1);
				}
				break;
			
			case 1:
				func_5(iVar5);
				func_6(iVar0);
				Var3.f_1 = MISC::GET_GAME_TIMER();
				func_7(iVar5, 1);
				func_2(&Var3, 2);
				break;
			
			case 2:
				if (bVar2)
				{
					if ((MISC::GET_GAME_TIMER() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(ScriptParam_0);
						func_9(iVar5, 1, !bVar6);
						if (bVar1)
						{
							func_10(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							func_12(238, func_11(iVar5), 1);
						}
						func_2(&Var3, 3);
					}
				}
				else
				{
					func_2(&Var3, 3);
				}
				break;
			
			case 3:
				func_13();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		
		case -1602657245:
			return 4;
		
		case -1991037110:
			return 5;
		
		case 1047281747:
			return 6;
		
		case -398744080:
			return 7;
		
		case -1066874997:
			return 8;
		
		case -2085219828:
			return 11;
		
		case 2064962445:
			return 12;
		
		case -1620920647:
			return 15;
		
		case -1664530975:
			return 16;
		
		case -597058368:
			return 20;
		
		case 128702355:
			return 23;
		
		case -2051332199:
			return 26;
		
		case 546981776:
			return 27;
		
		case -2013384490:
			return 28;
		
		case 228922461:
			return 29;
		
		case -746674788:
			return 31;
		
		case 599861917:
			return 33;
		
		case -1781387050:
			return 34;
		
		case 2006811763:
			return 37;
		
		case -90546043:
			return 38;
		
		case 1216456215:
			return 48;
		
		case 746300881:
			return 49;
		
		case -435006002:
			return 50;
		
		case -624139784:
			return 51;
		
		case -529638012:
			return 52;
		
		case 1338475089:
			return 39;
		
		case 2605459:
			return 40;
		
		case 1071702353:
			return 41;
		
		case -1183422860:
			return 42;
		
		case -1957546791:
			return 43;
		
		case -589542533:
			return 44;
		
		case -1776738559:
			return 45;
		
		case 1602215994:
			return 46;
		
		case -396757268:
			return 47;
	}
	return 0;
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_3(int iParam0, int iParam1)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_4(var uParam0)
{
	return *uParam0;
}

void func_5(int iParam0)
{
	var uVar0;
	
	uVar0 = func_16(MISC::_CREATE_VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::_CREATE_VAR_STRING(0, func_15(func_14(iParam0))), 1), "", 0, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	(*Global_1914742)[iParam0 /*4*/] = uVar0;
}

void func_6(int iParam0)
{
	if (!func_17(iParam0, 0))
	{
	}
}

void func_7(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = { func_18(-372368982, func_11(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_20(func_19(106002964), iParam1);
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = func_1(iVar0);
	if (!bVar2 || func_21(iVar3))
	{
		return 0;
	}
	iVar4 = func_22(iVar3);
	if ((!bVar1 || !func_17(iVar4, 0)) || func_23(iVar4))
	{
		return 0;
	}
	return 1;
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_14(iParam0);
	iVar1 = func_1(iVar0);
	if (iVar1 != iParam0)
	{
		func_24(iVar1, 4);
	}
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_21(iParam0))
	{
		return;
	}
	func_24(iParam0, 4);
	func_26(iParam0, bParam1);
	if (!func_27(iParam0))
	{
		func_28(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

void func_10(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0))
	{
		return;
	}
	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		
		case 3:
			return 1660962977;
		
		case 4:
			return -131409450;
		
		case 5:
			return -1487527516;
		
		case 6:
			return 561629573;
		
		case 7:
			return 1829679323;
		
		case 8:
			return -618617794;
		
		case 11:
			return 653458791;
		
		case 12:
			return 437319607;
		
		case 13:
			return -1519488075;
		
		case 15:
			return 1014445254;
		
		case 16:
			return 224814421;
		
		case 18:
			return 1012187868;
		
		case 19:
			return -1040706491;
		
		case 20:
			return -1910627346;
		
		case 23:
			return -1812487593;
		
		case 26:
			return 1983971282;
		
		case 27:
			return 1561519041;
		
		case 28:
			return -980496853;
		
		case 29:
			return -1738887126;
		
		case 31:
			return 424771379;
		
		case 33:
			return 787316814;
		
		case 34:
			return 984616481;
		
		case 37:
			return 1078285403;
		
		case 38:
			return -262897007;
		
		case 48:
			return -1727702531;
		
		case 49:
			return 1783324404;
		
		case 50:
			return 1288848815;
		
		case 51:
			return 918090738;
		
		case 52:
			return 170272501;
		
		case 1:
			return 2056650000;
		
		case 9:
			return -1195354638;
		
		case 10:
			return 1077596967;
		
		case 14:
			return -2145199848;
		
		case 17:
			return 752824478;
		
		case 21:
			return -819513569;
		
		case 22:
			return 1906968775;
		
		case 24:
			return -135434663;
		
		case 25:
			return 920123680;
		
		case 30:
			return 150470908;
		
		case 32:
			return -1665125257;
		
		case 35:
			return 1587928307;
		
		case 36:
			return -1738925422;
		
		case 39:
			return 656594395;
		
		case 41:
			return -1174738785;
		
		case 42:
			return 1073505629;
		
		case 40:
			return -658674894;
		
		case 43:
			return -1504155535;
		
		case 44:
			return -1917345716;
		
		case 45:
			return 1823406682;
		
		case 46:
			return -1003637772;
		
		case 47:
			return -1571524081;
	}
	return 0;
}

void func_12(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_34(iParam0, 1024))
	{
		return;
	}
	func_35(iVar0, iVar1);
	(Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		
		case 3:
			return 1433048902;
		
		case 4:
			return -1602657245;
		
		case 5:
			return -1991037110;
		
		case 6:
			return 1047281747;
		
		case 7:
			return -398744080;
		
		case 8:
			return -1066874997;
		
		case 11:
			return -2085219828;
		
		case 12:
			return 2064962445;
		
		case 13:
			return -1781387050;
		
		case 15:
			return -1620920647;
		
		case 16:
			return -1664530975;
		
		case 18:
			return 1047281747;
		
		case 19:
			return -1781387050;
		
		case 20:
			return -597058368;
		
		case 23:
			return 128702355;
		
		case 26:
			return -2051332199;
		
		case 27:
			return 546981776;
		
		case 28:
			return -2013384490;
		
		case 29:
			return 228922461;
		
		case 31:
			return -746674788;
		
		case 33:
			return 599861917;
		
		case 34:
			return -1781387050;
		
		case 37:
			return 2006811763;
		
		case 38:
			return -90546043;
		
		case 48:
			return 1216456215;
		
		case 49:
			return 746300881;
		
		case 50:
			return -435006002;
		
		case 51:
			return -624139784;
		
		case 52:
			return -529638012;
		
		case 39:
			return 1338475089;
		
		case 40:
			return 2605459;
		
		case 41:
			return 1071702353;
		
		case 42:
			return -1183422860;
		
		case 43:
			return -1957546791;
		
		case 44:
			return -589542533;
		
		case 45:
			return -1776738559;
		
		case 46:
			return 1602215994;
		
		case 47:
			return -396757268;
		
		default:
			break;
	}
	return 0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_16(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_37(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<2> func_18(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

struct<2> func_19(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_20(var uParam0, var uParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_21(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_38(iParam0, 4, 1);
}

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779;
		
		case 3:
			return -755485480;
		
		case 6:
			return 747460826;
		
		case 7:
			return 1627068364;
		
		case 13:
			return -1067476102;
		
		case 15:
			return -1080874779;
		
		case 18:
			return -801397594;
		
		case 19:
			return 730856618;
		
		case 20:
			return -486559882;
		
		case 23:
			return -1976480343;
		
		case 26:
			return 2036955137;
		
		case 29:
			return -1067476102;
		
		case 34:
			return 1566032147;
		
		case 38:
			return 2036955137;
		
		case 49:
			return 1566032147;
		
		case 52:
			return -755485480;
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;
	
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_39(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

void func_24(int iParam0, int iParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_40() != -1)
	{
		Global_17173[iParam0] = (Global_17173[iParam0] || iParam1);
		return;
	}
	Global_40.f_4458[iParam0] = (Global_40.f_4458[iParam0] || iParam1);
}

bool func_25(int iParam0)
{
	return !iParam0 <= 0;
}

void func_26(int iParam0, bool bParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_41(iParam0))
	{
		return;
	}
	func_24(iParam0, 2);
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			if (func_40() == -1)
			{
				func_30(1, 6);
			}
			else
			{
				func_42(1, 1017438712);
			}
		}
	}
}

int func_27(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_38(iParam0, 1, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_27(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_43(iParam0);
	}
	if (!bParam1)
	{
		func_44(iParam0);
	}
	func_24(iParam0, 1);
	func_26(iParam0, 1);
	if (bParam2)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

int func_29(int iParam0, bool bParam1, int iParam2)
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
		if (func_45())
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
	if (iParam0 == 0 && func_47(func_46(0)))
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
	switch (func_48(func_46(0)))
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

void func_30(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_49(&Global_0, 8);
	}
	if (!func_50() || func_40() != -1)
	{
		return;
	}
	func_49(&Global_0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_39(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_39(iParam0, Var2, 1))
				{
					if (func_51(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_51(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if (func_40() != -1)
			{
				func_52(571, 1);
			}
			else
			{
				func_52(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_53(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_34(iParam0, 1)) || func_56(32768))
	{
		if (!func_34(iParam0, 262144) || !Global_1904612->f_8189)
		{
			return 0;
		}
	}
	if (!func_57())
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0, int iParam1)
{
	return ((Global_1904612->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1904612[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904612)[iParam0] = uVar0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		
		case 1018123892:
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		
		case 982182330:
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		
		case -1406390556:
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		
		case -1455768246:
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		
		case -921879912:
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_37(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_25(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17173[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_4458[iParam0] && iParam1) != 0;
}

int func_39(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!func_17(iParam0, 0))
	{
		return func_59(func_58(iParam0), iParam1, iParam2);
	}
	if (func_60(iParam0))
	{
		return func_62(func_61(iParam0, 1), iParam1);
	}
	if ((iParam2 && func_40() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_63(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_40()
{
	return Global_1572887->f_13;
}

int func_41(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_38(iParam0, 2, 1);
}

int func_42(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099293->f_16)
	{
		return 0;
	}
	if (!func_64())
	{
		return 0;
	}
	if (!func_65())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_49(&Global_0, 8);
	}
	func_49(&Global_0, 1);
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		
		default:
			return 0;
	}
	return 0;
}

void func_44(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_52(239, 0);
			break;
		
		case 16:
			func_52(240, 0);
			break;
		
		case 33:
			func_52(241, 0);
			break;
		
		case 51:
			func_52(242, 0);
			break;
		
		case 2:
			func_52(243, 0);
			break;
		
		case 3:
			func_52(244, 0);
			break;
		
		case 52:
			func_52(245, 0);
			break;
		
		case 15:
			func_52(246, 0);
			break;
		
		case 23:
			func_52(247, 0);
			break;
		
		case 37:
			func_52(248, 0);
			break;
		
		case 26:
			func_52(249, 0);
			break;
		
		case 13:
			func_52(250, 0);
			break;
		
		case 19:
			func_52(251, 0);
			break;
		
		case 34:
			func_52(252, 0);
			break;
		
		case 38:
			func_52(253, 0);
			break;
		
		case 49:
			func_52(254, 0);
			break;
		
		case 7:
			func_52(255, 0);
			break;
		
		case 20:
			func_52(256, 0);
			break;
		
		case 18:
			func_52(257, 0);
			break;
		
		case 6:
			func_52(258, 0);
			break;
		
		case 29:
			func_52(259, 0);
			break;
		
		case 48:
			func_52(260, 0);
			break;
		
		case 11:
			break;
		
		case 4:
			func_52(262, 0);
			break;
		
		case 8:
			func_52(263, 0);
			break;
		
		case 28:
			func_52(264, 0);
			break;
		
		case 31:
			func_52(265, 0);
			break;
		
		case 12:
			func_52(266, 0);
			break;
		
		case 27:
			func_52(267, 0);
			break;
		
		case 50:
			func_52(268, 0);
			break;
	}
}

int func_45()
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
	if (!func_47(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_46(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_47(struct<2> Param0)
{
	if (!func_66(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_67(Param0))
	{
		return 0;
	}
	return 1;
}

int func_48(var uParam0, var uParam1)
{
	return uParam0;
}

void func_49(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_50()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_51(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	
	if (func_40() != -1)
	{
		return false;
	}
	if (func_63(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_35(iVar0, iVar1);
}

bool func_53(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iParam0]), iParam1);
}

int func_54(int iParam0)
{
	if (func_34(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_3327)
	{
		if ((Global_40.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_40.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904612->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_57()
{
	if (!func_65())
	{
		return 0;
	}
	return Global_1904612->f_8187;
}

int func_58(int iParam0)
{
	return iParam0;
}

int func_59(int iParam0, int iParam1, var uParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	if ((uParam2 && func_40() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_69(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_70(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	if (!func_17(iParam0, 0))
	{
		return func_71(func_58(iParam0), iParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (iParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_62(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;
	
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;
	
	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

bool func_64()
{
	return !Global_1572887->f_9;
}

int func_65()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
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

int func_67(int iParam0)
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

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;
	
	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_72(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_70(int iParam0, int iParam1)
{
	if (!func_17(iParam0, 0))
	{
		return func_73(func_58(iParam0), iParam1);
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

int func_71(int iParam0, var uParam1)
{
	int iVar0;
	
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && uParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

