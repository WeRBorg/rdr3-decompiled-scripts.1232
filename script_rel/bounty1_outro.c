#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 24;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<4> Local_111 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 722156226;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_111);
	}
	func_2(&Local_111, &uScriptParam_0);
	while (!func_3(&Local_111))
	{
		func_4(&Local_111);
		switch (func_5(Local_111))
		{
			case 0:
				if (func_6(&Local_111))
				{
					func_7(&Local_111, 1);
				}
				break;
			
			case 1:
				if (func_8(&Local_111))
				{
					func_7(&Local_111, 2);
				}
				break;
			
			case 2:
				if (func_9(&Local_111))
				{
					func_7(&Local_111, 3);
				}
				break;
			
			case 3:
				func_1(&Local_111);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_111);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return 1;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_2) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_0x25557E324489393C(uParam0->f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

int func_6(var uParam0)
{
	if ((!func_21(uParam0) || !func_22(uParam0)) || !func_23())
	{
		return 0;
	}
	func_24();
	func_25(iLocal_3, 76, 1);
	func_26(iLocal_3, 76);
	func_27();
	return 1;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_28(uParam0);
}

int func_9(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_29())
	{
		iVar0 = 0;
	}
	if (!func_30(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_31(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_32(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	func_33(3, 0, 1, 0, 0);
	func_34(&iLocal_109);
	func_34(&iLocal_110);
}

int func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_35(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_31(iParam0, 56, 1);
		func_32(&(Global_1359489->f_40), 1);
	}
	func_36(iParam0, 0);
	func_37(iParam0, 4, 0);
	func_38(iParam0);
	func_39(iParam0);
	func_40(iParam0, 37, 1);
	bVar0 = func_41(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_42(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_43(iParam0, 64, 1))
	{
		func_40(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_40(iParam0, 33, 1);
		func_40(iParam0, 34, 1);
		func_44(iParam0, 1056964608, -1, 1061158912);
		func_45(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_31(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_31(iParam0, 35, 1);
			if (bParam8)
			{
				func_31(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_46(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_40(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_31(iParam0, 33, 1);
		func_45(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_32(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_47(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_31(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_48(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_43(iParam0, 45, 1))
	{
		func_40(iParam0, 45, 1);
	}
	func_49(iParam0, 16, 1);
	func_40(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_41(func_50(iParam0), 0))
		{
			func_51(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_2))
	{
	}
	PED::_0xED9582B3DA8F02B4(1);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!func_41(iLocal_108, 0))
	{
		iLocal_108 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "U_M_M_ValSheriff_01", false);
		return 0;
	}
	if (!func_52(3))
	{
		func_53(3);
	}
	if (!func_54(3, 1))
	{
		func_55(3, 1);
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_108))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, true, true);
	}
	func_56(&uLocal_7, iLocal_108, "VAL_Sheriff", 1);
	return 1;
}

int func_22(var uParam0)
{
	if (!func_41(iLocal_109, 0))
	{
		iLocal_109 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "u_m_m_bht_benedictallbright", false);
		return 0;
	}
	return 1;
}

int func_23()
{
	if (!func_41(Global_35, 0))
	{
		return 0;
	}
	func_56(&uLocal_7, Global_35, "ARTHUR", 1);
	return 1;
}

void func_24()
{
	func_57(76, 1);
	func_58(76, 1);
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = -1;
	iVar1 = func_59(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if ((Global_40.f_9829[iVar0 /*4*/])->f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_60(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_61(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_60(iVar3, iParam0, iParam1, 0);
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1 && (Global_40.f_9829[iVar0 /*4*/])->f_1 == iParam0)
		{
			func_62(iVar0, 128);
		}
		iVar0++;
	}
}

void func_27()
{
	func_63(99);
	func_64(99);
	if (func_65(99) < 2)
	{
		func_66(99, 1, -249.417f, 764.93f, 116.441f, -1, 0, 1);
		func_67("spd_thomasdowne1", 523);
	}
}

int func_28(var uParam0)
{
	if (!func_68())
	{
		return 0;
	}
	if (func_41(iLocal_108, 0))
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_108, -276.0093f, 810.7167f, 118.3755f, 0.5f, 0, 0, 0, 0, 0);
	}
	return 1;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 1;
	return iVar0;
}

bool func_30(var uParam0)
{
	func_69();
	return func_70() != 76;
}

void func_31(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return;
		}
	}
	func_72(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_32(var uParam0, int iParam1)
{
	if (iParam1 || !func_73(uParam0))
	{
		func_74(uParam0);
	}
}

void func_33(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_75(iParam0))
	{
		return;
	}
	if (!func_54(iParam0, 1))
	{
		return;
	}
	if (!func_54(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_52(iParam0)) && func_76(iParam0))
	{
		return;
	}
	func_77(iParam0, 1);
	func_78(iParam0);
	if (func_80(func_79(iParam0)))
	{
		iVar0 = func_81(iParam0);
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
		func_77(iParam0, 16);
	}
	if (func_54(iParam0, 128) && !bParam3)
	{
		func_82(iParam0, 0);
	}
}

void func_34(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

bool func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_36(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_83(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_37(iParam0, 1, 0);
		}
	}
	func_37(iParam0, 16, bParam1);
}

void func_37(int iParam0, int iParam1, bool bParam2)
{
	if (!func_71(iParam0))
	{
		return;
	}
	func_84(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_38(int iParam0)
{
	func_37(iParam0, 8, 0);
}

void func_39(int iParam0)
{
	func_31(iParam0, 36, 1);
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return;
		}
	}
	func_72(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_85(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_85(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_42(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_86(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_43(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return false;
		}
	}
	func_72(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_12(iParam0))
	{
		iVar1 = func_87(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_88(iParam0);
		}
	}
	if (func_43(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 137, true);
	}
}

void func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_40(iParam0, 50, 1);
		func_40(iParam0, 48, 1);
		func_40(iParam0, 49, 1);
		func_40(iParam0, 51, 1);
		func_40(iParam0, 52, 1);
		func_40(iParam0, 54, 1);
		func_40(iParam0, 55, 1);
	}
	else
	{
		func_31(iParam0, 50, 1);
		func_31(iParam0, 48, 1);
		func_31(iParam0, 49, 1);
		func_31(iParam0, 51, 1);
		if (bParam3)
		{
			func_31(iParam0, 54, 1);
		}
		else
		{
			func_40(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_31(iParam0, 52, 1);
			if (bParam3)
			{
				func_31(iParam0, 55, 1);
			}
		}
		else
		{
			func_40(iParam0, 52, 1);
			if (!bParam3)
			{
				func_40(iParam0, 55, 1);
			}
		}
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 204, false);
	}
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_43(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_42(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_87(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_89(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_31(iParam0, 2, 1);
	}
	else
	{
		func_90(iParam0);
		func_31(iParam0, 1, 1);
	}
}

void func_49(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_50(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_51(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_71(iParam1))
	{
		return;
	}
	iVar0 = func_50(iParam1);
	if (func_91(iParam1))
	{
		if (!func_92(iParam1))
		{
			return;
		}
	}
	func_40(iParam1, 39, 1);
	func_93(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_93(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_93(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_31(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_94(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_52(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_53(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_54(int iParam0, int iParam1)
{
	if (func_95() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

void func_55(int iParam0, int iParam1)
{
	if (func_95() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_56(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_96(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_57(int iParam0, int iParam1)
{
	func_98(func_97(iParam0, iParam1));
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				(Global_40.f_9829[iVar0 /*4*/])->f_1 = 0;
				(Global_40.f_9829[iVar0 /*4*/])->f_3 = 1;
				uVar2 = func_99(iParam0, iParam1);
				uVar3 = func_100(iParam0);
				_NAMESPACE48::_0x70605812ABC9FF0F(uVar2, uVar3);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		
		case 26:
			return 2;
		
		case 105:
			return 1;
		
		case 78:
			return 2;
		
		case 5:
			return 2;
		
		case 38:
			return 2;
		
		case 115:
			return 6;
	}
	return 0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	(Global_40.f_9829[iParam0 /*4*/])->f_1 = iParam1;
	Global_40.f_9829[iParam0 /*4*/] = iParam2;
	(Global_40.f_9829[iParam0 /*4*/])->f_2 = 0;
	(Global_40.f_9829[iParam0 /*4*/])->f_3 = iParam3;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = -1;
	iVar1 = func_59(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (iVar3 >= 0)
			{
				func_60(iVar3, (Global_40.f_9829[iVar0 /*4*/])->f_1, iParam1, (Global_40.f_9829[iVar0 /*4*/])->f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				func_60(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

void func_62(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_101(&((Global_40.f_9829[iParam0 /*4*/])->f_2), iParam1);
}

void func_63(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 1;
}

void func_64(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_47 = 1;
}

int func_65(int iParam0)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

void func_66(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_102(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750->f_16071 != -1 && !bParam6)
	{
		return;
	}
	func_103();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750->f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479->f_1 = iParam5;
	Global_1327479->f_10 = func_104(iParam0, vParam2);
	func_105(0);
	func_106(0, 0, 1);
	if (bParam1)
	{
		Global_1310750->f_16077 = 0;
		Global_1310750->f_16071 = -1;
		Global_1310750->f_16075 = 1;
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
		func_107(8);
		func_108(Global_36, 1137180672);
	}
	if (bParam7)
	{
		Global_1310750->f_16076 = 1;
	}
}

void func_67(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_109(MISC::GET_HASH_KEY(sParam0), iParam1);
}

int func_68()
{
	func_34(&iLocal_109);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		iLocal_110 = func_110(76, iLocal_3);
		return 0;
	}
	func_111(((*Global_1835011)[7 /*74*/])->f_1, 1);
	func_112(iLocal_3, 76, 2);
	LAW::_0x73BAD7B2F2DB50DE(PLAYER::GET_PLAYER_INDEX(), func_113(76, 1, 1));
	return 1;
}

void func_69()
{
	if (func_41(iLocal_108, 0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, -1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_108, 1))
				{
					iLocal_6 = 1;
				}
				break;
			
			case 1:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					if (func_114())
					{
						func_32(&uLocal_105, 0);
						if (func_115(&uLocal_105) > 4.5f)
						{
							if (func_117(&uLocal_7, func_116(), iLocal_108, iLocal_110, 0, 0, 1, 1))
							{
								func_47(&uLocal_105);
								iLocal_4++;
								if (iLocal_4 > 1)
								{
									func_118(3);
									iLocal_5 = 1;
									iLocal_6 = 2;
								}
								else
								{
									iLocal_6 = 3;
								}
							}
						}
					}
					else
					{
						func_47(&uLocal_105);
					}
				}
				else
				{
					func_47(&uLocal_105);
				}
				break;
			
			case 2:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					if (func_114())
					{
						func_32(&uLocal_105, 0);
						if (func_115(&uLocal_105) > 4.5f)
						{
							if (func_117(&uLocal_7, "BOU1_SH_AFTERCS", iLocal_108, iLocal_110, 0, 0, 1, 1))
							{
								func_47(&uLocal_105);
								iLocal_6 = 3;
							}
						}
					}
					else
					{
						func_47(&uLocal_105);
					}
				}
				else
				{
					func_47(&uLocal_105);
				}
				break;
			
			case 3:
				func_32(&uLocal_105, 0);
				if (func_115(&uLocal_105) > 8f)
				{
					func_47(&uLocal_105);
					if (iLocal_5 == 1)
					{
						iLocal_6 = 2;
					}
					else
					{
						iLocal_6 = 1;
					}
				}
				break;
			
			case 4:
				break;
		}
	}
}

int func_70()
{
	return Global_1894899->f_2;
}

bool func_71(int iParam0)
{
	return iParam0 > -1;
}

int func_72(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_73(var uParam0)
{
	return func_119(*uParam0, 1);
}

void func_74(var uParam0)
{
	func_120(uParam0, 0f);
}

bool func_75(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_76(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_77(int iParam0, int iParam1)
{
	if (func_95() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_78(int iParam0)
{
	int iVar0;
	
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_79(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_80(int iParam0)
{
	return iParam0 != 0;
}

int func_81(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_82(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_54(iParam0, 2))
	{
		return 0;
	}
	if (func_79(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		return 1;
	}
	if (func_54(iParam0, 1) && !bParam1)
	{
		func_55(iParam0, 128);
		return 1;
	}
	func_77(iParam0, 129);
	func_78(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_81(iParam0));
	func_122(iParam0, 0);
	return 1;
}

bool func_83(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_84(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

bool func_85(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_86(int iParam0)
{
	int iVar0;
	
	if (!func_71(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_123(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_87(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_88(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_87(iParam0)))
		{
			func_124(iParam0, 67108864, 1);
			func_40(iParam0, 19, 1);
		}
	}
}

float func_89(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_87(iParam0);
	iVar1 = func_42(iParam0, 0);
	func_125(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_91(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_92(int iParam0)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_93(int iParam0, int iParam1, bool bParam2)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_94(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_71(iParam0))
	{
		return 0;
	}
	iVar0 = func_50(iParam0);
	if (func_41(iVar0, 0))
	{
		if (func_41(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_91(iParam0)) || func_92(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_126(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_127(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_128(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_129(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_129(iParam0, 0));
					func_130(iParam0);
				}
			}
			else
			{
				if (func_35(iParam0, 32768, 1))
				{
					iVar2 = func_129(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_41(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_35(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_128(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_129(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_129(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_128(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_131(iParam0, 0);
	return 1;
}

int func_95()
{
	return Global_1572887->f_12;
}

bool func_96(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				
				case 1:
					iVar0 = 363;
					break;
				
				case 2:
					iVar0 = 362;
					break;
				
				case 3:
					iVar0 = 361;
					break;
				
				case 4:
					iVar0 = 360;
					break;
				
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_80(func_79(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_81(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_81(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_81(iParam0));
	return 1;
}

int func_99(int iParam0, int iParam1)
{
	return func_79(func_97(iParam0, iParam1));
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 685634567;
		
		case 26:
			return -935154888;
		
		case 105:
			return -1762155239;
		
		case 78:
			return 550408623;
		
		case 5:
			return -122235554;
		
		case 38:
			return -1264444972;
		
		case 115:
			return -1705419773;
		
		default:
			break;
	}
	return -1;
}

void func_101(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_102(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_103()
{
	if (!func_102(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_105(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

int func_104(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < func_132(iParam0))
	{
		vVar1 = { func_133(iParam0, iVar0) };
		if (func_134(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_105(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_106(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_135(iParam0, iParam1, bParam2);
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1f, 0, iParam0, 16384))
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				(*Global_1911670)[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_108(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16078)
	{
		iVar1 = &Global_1310750->f_16078[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(iVar1), vParam0) < fParam3)
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1310750->f_16078[iVar0] = 0;
				*(Global_17503.f_2084[iVar0 /*5*/]) = { 0f, 0f, 0f };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = -1;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = 0;
			}
		}
		iVar0++;
	}
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar3 /*4*/] == iParam0)
		{
			iVar2++;
			if ((Global_40.f_9829[iVar3 /*4*/])->f_1 == iParam1)
			{
			}
			else
			{
				iVar3++;
			}
			if (iVar2 == -1)
			{
				return 0;
			}
			iVar0 = func_99(iParam0, iVar2);
			iVar1 = func_97(iParam0, iVar2);
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, iParam1);
			func_136(iVar1, 0);
			if (func_137(iVar1, 0, 0, 0, 0, 0))
			{
				return func_121(iVar1);
			}
			return 0;
		}
	}

void func_111(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_139(iParam0, iParam1);
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1 && (Global_40.f_9829[iVar0 /*4*/])->f_1 == iParam0)
		{
			(Global_40.f_9829[iVar0 /*4*/])->f_3 = iParam2;
		}
		iVar0++;
	}
}

int func_113(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 76:
			if (func_140(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		
		case 105:
			if (func_140(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		
		case 5:
			return 1559741032;
		
		case 61:
			return 60667583;
		
		case 78:
			return 1758133584;
		
		case 26:
			return -577559008;
		
		case 38:
			if (!bParam1 || func_95() != -1)
			{
				return 1624541293;
			}
			if (func_141(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		
		case 92:
			return 1637569166;
		
		case 65:
			return -867798278;
		
		case 69:
			return 1543937523;
		
		case 93:
			return 1030875135;
		
		case 95:
			return -201437056;
		
		case 57:
			return 794246846;
		
		case 3:
			return -968357677;
		
		case 32:
			return 728480338;
		
		case 82:
			return 725489698;
		
		case 35:
			return 183652754;
		
		case 56:
			return 2056744450;
		
		case 126:
			return 963280223;
		
		case 120:
			return -256309418;
		
		case 124:
			return 1666986024;
		
		case 115:
			return 251328732;
		
		case 127:
			if (!bParam1 || func_95() != -1)
			{
				return 1024208566;
			}
			if (func_141(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		
		case 22:
			if (!bParam1 || func_95() != -1)
			{
				return 965626876;
			}
			if (func_142(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		
		case 37:
			if (!bParam1 || func_95() != -1)
			{
				return -497792649;
			}
			if (func_142(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_141(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_143())
			{
				return 2126166785;
			}
			break;
		
		case 110:
			if (!bParam1 || func_95() != -1)
			{
				return -1990305778;
			}
			if (func_141(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_144(iParam0);
		if (iVar0 != -1)
		{
			return func_145(iVar0, bParam1);
		}
	}
	return 0;
}

int func_114()
{
	if (func_41(iLocal_108, 0) && func_41(Global_35, 0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_108) && func_146(Global_35, iLocal_108, 2.5f, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_115(var uParam0)
{
	if (!func_73(uParam0))
	{
		return 0f;
	}
	if (func_147(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_148() - uParam0->f_1);
}

char* func_116()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "BOU1_SH_CELL1";
		
		case 1:
			return "BOU1_SH_CELL2";
		
		case 2:
			return "BOU1_SH_CELL3";
		
		case 3:
			return "BOU1_SH_CELL4";
		
		default:
			break;
	}
	return "";
}

int func_117(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	bool bVar3;
	
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_149(iParam2, iParam3, 1, 1) < 70f || iParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_149(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			bVar3 = true;
		}
		func_74(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_150(sParam1))
			{
				return 1;
			}
		}
		else if (func_151(uParam0, cVar0, bVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)
{
	int iVar0;
	
	if (func_80(func_79(iParam0)))
	{
		iVar0 = func_81(iParam0);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
			{
				_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
			}
		}
	}
}

bool func_119(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_120(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_148() - fParam1);
	func_152(uParam0, 1);
	func_153(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
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

void func_122(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		
		case 0:
			return -1758735922;
		
		case 6:
			return -680519380;
		
		case 3:
			return 263744889;
		
		case 7:
			return 351057032;
		
		case 4:
			return 1172283326;
		
		case 2:
			return -1046310682;
		
		case 5:
			return 652984488;
		
		case 8:
			return 1389665576;
		
		case 9:
			return -1066280913;
		
		case 13:
			return 1975793632;
		
		case 14:
			return -1887627202;
		
		case 15:
			return 1851096281;
		
		case 16:
			return 47402526;
		
		case 17:
			return 1762683397;
		
		case 18:
			return -1154551809;
		
		case 19:
			return -333682158;
		
		case 20:
			return 1465089966;
		
		case 21:
			return 511213393;
		
		case 22:
			return -1214580355;
		
		case 23:
			return -1397900723;
		
		case 10:
			return 541398842;
		
		case 24:
			return -1960060437;
		
		case 25:
			return 1634371177;
		
		case 26:
			return -1308114737;
		
		case 11:
			return 683250525;
		
		case 12:
			return -814958461;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_125(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_154(iParam1);
	}
}

float func_126(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_155(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_127(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		
		case 7:
			return 230221572;
		
		case 0:
			return 47961446;
		
		case 5:
			return 1268955201;
		
		case 2:
			return 2103924091;
		
		case 1:
			return 1554677062;
		
		case 9:
			return 984702223;
		
		case 6:
			return -1825091419;
		
		case 11:
			return 948152617;
		
		case 8:
			return 795059774;
		
		case 23:
			return -1880884094;
		
		case 20:
			return 849012978;
		
		case 4:
			return 404801781;
		
		case 10:
			return -1094022447;
		
		case 26:
			return -1484815615;
		
		case 12:
		case 14:
			return 0;
		
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_156(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_50(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_129(int iParam0, int iParam1)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_157(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_130(int iParam0)
{
	int iVar0;
	
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)
{
	if (!func_71(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		
		case 1:
			return 12;
		
		case 2:
			return 23;
		
		case 3:
			return 6;
		
		case 4:
			return 17;
		
		case 5:
			return 1;
		
		case 6:
			return 3;
		
		case 7:
			return 23;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 12:
			return 18;
		
		case 13:
			return 12;
		
		case 14:
			return 7;
		
		case 15:
			return 21;
		
		case 16:
			return 19;
		
		case 17:
			return 12;
		
		case 18:
			return 7;
		
		case 19:
			return 1;
		
		case 20:
			return 17;
		
		case 21:
			return 3;
		
		case 22:
			return 1;
		
		case 23:
			return 17;
		
		case 24:
			return 14;
		
		case 27:
			return 11;
		
		case 28:
			return 5;
		
		case 29:
			return 8;
		
		case 30:
			return 38;
		
		case 31:
			return 20;
		
		case 32:
			return 10;
		
		case 33:
			return 13;
		
		case 34:
			return 11;
		
		case 35:
			return 2;
		
		case 36:
			return 12;
		
		case 37:
			return 20;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 12;
		
		case 41:
			return 3;
		
		case 42:
			return 1;
		
		case 43:
			return 27;
		
		case 44:
			return 9;
		
		case 45:
			return 15;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 48:
			return 9;
		
		case 49:
			return 7;
		
		case 50:
			return 36;
		
		case 51:
			return 5;
		
		case 53:
			return 3;
		
		case 54:
			return 6;
		
		case 55:
			return 2;
		
		case 56:
			return 12;
		
		case 57:
			return 14;
		
		case 58:
			return 8;
		
		case 59:
			return 3;
		
		case 60:
			return 11;
		
		case 61:
			return 2;
		
		case 62:
			return 17;
		
		case 63:
			return 6;
		
		case 64:
			return 7;
		
		case 65:
			return 10;
		
		case 66:
			return 12;
		
		case 67:
			return 5;
		
		case 68:
			return 5;
		
		case 69:
			return 5;
		
		case 70:
			return 6;
		
		case 71:
			return 8;
		
		case 72:
			return 9;
		
		case 73:
			return 4;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 3;
		
		case 78:
			return 2;
		
		case 79:
			return 6;
		
		case 80:
			return 3;
		
		case 81:
			return 15;
		
		case 82:
			return 9;
		
		case 83:
			return 2;
		
		case 84:
			return 2;
		
		case 85:
			return 11;
		
		case 86:
			return 2;
		
		case 87:
			return 9;
		
		case 88:
			return 2;
		
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 2;
		
		case 92:
			return 3;
		
		case 93:
			return 1;
		
		case 94:
			return 9;
		
		case 95:
			return 1;
		
		case 96:
			return 7;
		
		case 97:
			return 6;
		
		case 98:
			return 4;
		
		case 99:
			return 2;
		
		case 100:
			return 1;
		
		case 101:
			return 2;
		
		case 102:
			return 3;
		
		case 103:
			return 3;
		
		case 104:
			return 3;
		
		case 105:
			return 2;
		
		case 106:
			return 4;
		
		case 107:
			return 1;
		
		case 108:
			return 3;
		
		case 109:
			return 3;
		
		case 110:
			return 1;
		
		case 111:
			return 4;
		
		case 112:
			return 3;
		
		case 113:
			return 3;
		
		case 114:
			return 16;
		
		case 115:
			return 3;
		
		case 116:
			return 7;
		
		case 117:
			return 2;
		
		case 118:
			return 10;
		
		case 119:
			return 17;
		
		default:
			break;
	}
	return 0;
}

Vector3 func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_102(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_132(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_158(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

int func_134(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_135(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_136(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_54(iParam0, 2))
	{
		return 0;
	}
	if (func_54(iParam0, 32) && !bParam1)
	{
		func_122(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_79(iParam0)));
		if (func_95() == -1)
		{
			if (func_54(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_81(iParam0));
				func_77(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_81(iParam0));
		}
		return 0;
	}
	if (!func_159(iParam0) && func_95() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		func_77(iParam0, 128);
		return 1;
	}
	func_122(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_79(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_81(iParam0));
	if (func_54(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_81(iParam0));
		func_77(iParam0, 2048);
	}
	return 1;
}

int func_137(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_80(func_79(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		func_136(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_160(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_161(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_162(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_81(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_81(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_81(iParam0), 0);
	}
	if (!func_162(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_81(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_139(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = uParam1;
}

int func_140(int iParam0)
{
	if (!func_163(iParam0))
	{
		return 0;
	}
	return func_164(iParam0, 33554432);
}

int func_141(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	return func_166(iParam0);
}

int func_142(int iParam0, bool bParam1)
{
	switch (func_167(iParam0))
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

int func_143()
{
	return Global_40.f_4283.f_1;
}

int func_144(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_145(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		
		case 1:
			return 1039226266;
		
		case 2:
			return 493546894;
		
		case 3:
			return -2119728378;
		
		case 4:
			if (!bParam1 || func_95() != -1)
			{
				return -1308265478;
			}
			if (func_141(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		
		case 5:
			return -1147969487;
		
		case 6:
			return -1147969487;
		
		case 7:
			return -1147969487;
		
		case 8:
			return 537788226;
		
		case 9:
			return -1391142299;
		
		case 10:
			return 1178102426;
		
		case 11:
			return 1608357655;
		
		case 12:
			if (!bParam1 || func_95() != -1)
			{
				return -650528936;
			}
			if (func_141(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_95() != -1)
			{
				return -877373104;
			}
			if (func_141(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_146(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

bool func_147(var uParam0)
{
	return func_119(*uParam0, 2);
}

float func_148()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_149(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_150(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return 1;
	}
	return 0;
}

bool func_151(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_168(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_154(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_155(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_71(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_71(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_127(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 10;
		
		case 2:
			return 22;
		
		case 3:
			return 45;
		
		case 4:
			return 51;
		
		case 5:
			return 68;
		
		case 6:
			return 69;
		
		case 7:
			return 72;
		
		case 8:
			return 95;
		
		case 9:
			return 96;
		
		case 10:
			return 104;
		
		case 11:
			return 106;
		
		case 12:
			return 110;
		
		case 13:
			return 128;
		
		case 14:
			return 140;
		
		case 15:
			return 147;
		
		case 16:
			return 168;
		
		case 17:
			return 187;
		
		case 18:
			return 199;
		
		case 19:
			return 206;
		
		case 20:
			return 207;
		
		case 21:
			return 224;
		
		case 22:
			return 227;
		
		case 23:
			return 228;
		
		case 24:
			return 245;
		
		case 27:
			return 259;
		
		case 28:
			return 270;
		
		case 29:
			return 275;
		
		case 30:
			return 283;
		
		case 31:
			return 321;
		
		case 32:
			return 341;
		
		case 33:
			return 351;
		
		case 34:
			return 364;
		
		case 35:
			return 375;
		
		case 36:
			return 377;
		
		case 37:
			return 389;
		
		case 38:
			return 409;
		
		case 39:
			return 410;
		
		case 40:
			return 411;
		
		case 41:
			return 423;
		
		case 42:
			return 426;
		
		case 43:
			return 427;
		
		case 44:
			return 454;
		
		case 45:
			return 463;
		
		case 46:
			return 478;
		
		case 47:
			return 480;
		
		case 48:
			return 482;
		
		case 49:
			return 491;
		
		case 50:
			return 498;
		
		case 51:
			return 534;
		
		case 53:
			return 539;
		
		case 54:
			return 542;
		
		case 55:
			return 548;
		
		case 56:
			return 550;
		
		case 57:
			return 562;
		
		case 58:
			return 576;
		
		case 59:
			return 584;
		
		case 60:
			return 587;
		
		case 61:
			return 598;
		
		case 62:
			return 600;
		
		case 63:
			return 617;
		
		case 64:
			return 623;
		
		case 65:
			return 630;
		
		case 66:
			return 640;
		
		case 67:
			return 652;
		
		case 68:
			return 657;
		
		case 69:
			return 662;
		
		case 70:
			return 667;
		
		case 71:
			return 673;
		
		case 72:
			return 681;
		
		case 73:
			return 690;
		
		case 74:
			return 694;
		
		case 75:
			return 695;
		
		case 76:
			return 696;
		
		case 77:
			return 697;
		
		case 78:
			return 700;
		
		case 79:
			return 702;
		
		case 80:
			return 708;
		
		case 81:
			return 711;
		
		case 82:
			return 726;
		
		case 83:
			return 735;
		
		case 84:
			return 737;
		
		case 85:
			return 739;
		
		case 86:
			return 750;
		
		case 87:
			return 752;
		
		case 88:
			return 761;
		
		case 89:
			return 763;
		
		case 90:
			return 764;
		
		case 91:
			return 766;
		
		case 92:
			return 768;
		
		case 93:
			return 771;
		
		case 94:
			return 772;
		
		case 95:
			return 781;
		
		case 96:
			return 782;
		
		case 97:
			return 789;
		
		case 98:
			return 795;
		
		case 99:
			return 799;
		
		case 100:
			return 801;
		
		case 101:
			return 802;
		
		case 102:
			return 804;
		
		case 103:
			return 807;
		
		case 104:
			return 810;
		
		case 105:
			return 813;
		
		case 106:
			return 815;
		
		case 107:
			return 819;
		
		case 108:
			return 820;
		
		case 109:
			return 823;
		
		case 110:
			return 826;
		
		case 111:
			return 827;
		
		case 112:
			return 831;
		
		case 113:
			return 834;
		
		case 114:
			return 837;
		
		case 115:
			return 853;
		
		case 116:
			return 856;
		
		case 117:
			return 863;
		
		case 118:
			return 865;
		
		case 119:
			return 875;
		
		default:
			break;
	}
	return -1;
}

int func_159(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_54(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_160(int iParam0, int iParam1)
{
	if (func_95() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_121(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_81(iParam0));
}

int func_161(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_81(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_81(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_81(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_162(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_163(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_164(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_165(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_167(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	return func_169(iParam0);
}

void func_168(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_170(int iParam0)
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

