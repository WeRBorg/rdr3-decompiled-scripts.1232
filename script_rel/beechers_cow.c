#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	float fLocal_7 = 0f;
	vector3 vLocal_8 = { 0f, 0f, 0f };
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	struct<9> Local_21 = { -1, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_30 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	var uVar3;
	
	vLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.7721f;
	vLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.2319f;
	vLocal_8 = { 0.7006f, 0.094f, 1.076f };
	vLocal_11 = { -49.5998f, 0f, -107.2854f };
	vLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	vLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&iLocal_20, 1, 0, 1);
		func_2();
	}
	func_3(21, &Local_21, 1);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1675563243) > 0)
	{
		func_2();
	}
	func_4(Local_21.f_5, 0f, 0f, Local_21.f_8, &vVar0, &uVar3);
	if (func_5(&iLocal_20, vVar0))
	{
		func_2();
	}
	func_6();
	while (!func_7())
	{
		BUILTIN::WAIT(0);
	}
	func_8(&iLocal_20, 1);
	while (true)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1675563243) > 0)
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_20, true))
			{
				func_2();
			}
		}
		if (func_9())
		{
			func_2();
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_2()
{
	func_10();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_4(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7)
{
	vector3 vVar0;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_0) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	*uParam6 = { vVar0 };
	*uParam7 = { vParam3 };
	uParam7->f_2 = (uParam7->f_2 + fLocal_3);
}

int func_5(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_11(&iVar1, vParam1, 0f, 0f, 0f, 3f, 3f, 3f);
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	iVar2 = ENTITY::_0x886171A12F400B89(iVar1, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_INJURED(iVar4)) && ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("a_c_cow"))
		{
			*iParam0 = iVar4;
			func_12(iVar1);
			ITEMSET::_0x20A4BF0E09BEE146(iVar0);
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
		iVar3++;
	}
	func_12(iVar1);
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

void func_6()
{
	STREAMING::REQUEST_MODEL(joaat("a_c_cow"), false);
	STREAMING::REQUEST_MODEL(-1937484496, false);
	STREAMING::REQUEST_MODEL(-861474402, false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_0x2B6529C54D29037A("script_mar5_milkcow_cow");
}

int func_7()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("a_c_cow")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1937484496))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-861474402))
	{
		return 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
	{
		return 0;
	}
	if (!STREAMING::_0x2C04D89A0FB4E244("script_mar5_milkcow_cow"))
	{
		return 0;
	}
	return 1;
}

int func_8(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar6;
	int iVar7;
	struct<9> Var8;
	struct<31> Var18;
	
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	if (bParam1)
	{
		func_3(21, &Var8, 1);
	}
	else
	{
		func_3(22, &Var8, 1);
	}
	func_4(Var8.f_5, 0f, 0f, Var8.f_8, &vVar0, &uVar3);
	if (!func_5(iParam0, vVar0))
	{
		*iParam0 = func_13(joaat("a_c_cow"), vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			return 0;
		}
		PED::_SET_PED_SCALE(*iParam0, 1f);
	}
	PED::SET_PED_CAN_LEG_IK(*iParam0, false);
	PED::SET_PED_LEG_IK_MODE(*iParam0, 0);
	EVENT::SET_DECISION_MAKER(*iParam0, -1143637011);
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*iParam0))
	{
		Var18.f_6 = -1082130432;
		Var18.f_9 = -1082130432;
		Var18.f_30 = "Milking";
		Var18.f_1 = -455129387;
		Var18 = 325037696;
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(*iParam0, "script_mar5_milkcow_cow", &Var18, Var8.f_5, 0f, 0f, Var8.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}
	vVar0 = { func_14(Var8.f_5, 0f, 0f, Var8.f_8, 0) };
	iVar7 = func_15(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::_0x0B7CB1300CBFE19C(iVar7, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar7, 0, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	}
	vVar0 = { func_16(Var8.f_5, 0f, 0f, Var8.f_8) };
	iVar6 = func_17(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	}
	return 1;
}

int func_9()
{
	float fVar0;
	
	fVar0 = func_18(4);
	if (func_19(37, 4194304))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), Local_21.f_5) > (fVar0 * fVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_10()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_cow"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1937484496);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-861474402);
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_0x57A197AD83F66BBF("script_mar5_milkcow_cow");
}

void func_11(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_20());
	}
}

void func_12(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_13(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_21(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_14(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	vector3 vVar0;
	
	if (bParam6)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_17 + Vector(0f, -0.2f, 0f)) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_17) };
	}
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	return vVar0;
}

int func_15(vector3 vParam0)
{
	int iVar0;
	
	if (func_22(61))
	{
		iVar0 = func_23(vParam0, -861474402, 0.2f, 1);
	}
	else
	{
		iVar0 = func_23(vParam0, -861474402, 4f, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = OBJECT::CREATE_OBJECT(-861474402, vParam0, true, true, false, false, false);
	}
	ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	return iVar0;
}

Vector3 func_16(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_14) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	return vVar0;
}

int func_17(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_23(vParam0, -1937484496, 4f, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = OBJECT::CREATE_OBJECT(-1937484496, vParam0, true, true, false, false, false);
	}
	ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	return iVar0;
}

float func_18(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		
		case 2:
			return 45f;
		
		case 0:
			return 40f;
		
		case 3:
			return 90f;
		
		case 5:
			return 90f;
		
		case 4:
			return 50f;
		
		case 6:
			return 90f;
		
		default:
			break;
	}
	return 70f;
}

bool func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

char* func_20()
{
	return "unnamed";
}

void func_21(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_24(iParam1))
		{
			func_25(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_26(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_27(iParam0, 0);
			bVar0 = true;
		}
		func_28(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_22(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_29(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_23(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	fVar2 = (fParam4 * 2f);
	func_30(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return 0;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar5));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam3)
			{
				ITEMSET::DESTROY_ITEMSET(iVar5);
				func_12(iVar0);
				if (bParam5)
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					}
				}
				return iVar1;
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar5);
	func_12(iVar0);
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case joaat("cs_clay"):
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_25(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_31(iParam0, iParam1))
		{
			if (func_32(iParam0, iParam1))
			{
				if (func_33(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_34(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_26(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_27(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_28(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

bool func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_30(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_20());
	}
}

bool func_31(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_31(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_34(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_35(int iParam0)
{
	if (!func_36(iParam0))
	{
		return -1;
	}
	return func_37(iParam0);
}

bool func_36(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_38(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_38(int iParam0)
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

