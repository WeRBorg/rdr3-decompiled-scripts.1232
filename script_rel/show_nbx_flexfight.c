#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<1071> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 180000, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 1092616192;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	struct<52> Local_1155 = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Local_22.f_15 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_22);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		func_1(&Local_22);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (ScriptParam_0 == 1)
	{
		Local_22.f_14 = 1;
	}
	if (!Local_22.f_14 && func_2(Global_1394141->f_1326, -2147483648))
	{
		func_3(&(Global_1394141->f_1326), -2147483648);
	}
	Local_22 = ScriptParam_0.f_1;
	Local_22.f_42 = { 2553.875f, -1313.143f, 48.2166f };
	Local_22.f_45 = { 2546.522f, -1306.835f, 48.26664f };
	if (!Local_22.f_1070)
	{
		Local_22.f_1058 = 180000;
	}
	while (true)
	{
		bVar1 = func_4(Global_35, (Global_1394141->f_7[Local_22 /*31*/])->f_4, 1, 0);
		bVar2 = func_4(Global_35, &(Local_22.f_35[3]), 1, 0);
		fVar3 = func_5(Global_35, (Global_1394141->f_7[Local_22 /*31*/])->f_1, 1);
		if ((!func_2(Local_22.f_16, 64) && bVar1) && !Local_22.f_1070)
		{
			func_6(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0);
			func_7(&(Local_22.f_16), 64);
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			if (func_8(&Local_22) < 10)
			{
				func_9(&Local_22, 10);
			}
		}
		if (!Local_22.f_14)
		{
			func_10(256);
			if ((func_8(&Local_22) < 10 && func_11(Local_22)) && !bVar1)
			{
				func_7(&(Global_1394141->f_1326), -2147483648);
				func_9(&Local_22, 10);
			}
			func_12(bVar1);
			func_13(&Local_22, fVar3);
			if (fVar3 > 75f || func_2(Global_1394141->f_1326, -2147483648))
			{
				func_7(&(Global_1394141->f_1326), -2147483648);
				if (func_8(&Local_22) < 10)
				{
					func_9(&Local_22, 10);
				}
			}
			if ((func_14(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || (Global_1394141->f_1279[Local_22.f_1 /*8*/])->f_6)
			{
				func_7(&(Local_22.f_16), 33554432);
				if (func_8(&Local_22) < 10)
				{
					func_9(&Local_22, 10);
				}
			}
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0 && bVar2)
			{
				func_7(&(Local_22.f_16), 33554432);
				if (func_8(&Local_22) < 10)
				{
					func_9(&Local_22, 10);
				}
			}
		}
		if (!Local_22.f_14)
		{
			func_15(&(Local_22.f_104), Local_22.f_1);
			func_16(&(Local_22.f_104), Local_22.f_1);
		}
		func_17(&Local_22);
		func_18(&Local_22);
		if (func_8(&Local_22) >= 6)
		{
			func_19(&Local_22);
		}
		if (func_8(&Local_22) >= 8 && bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if ((func_20(&(Local_22.f_74[iVar4])) && ENTITY::DOES_ENTITY_EXIST(&(Local_22.f_81[iVar4]))) && !ENTITY::IS_ENTITY_DEAD(&(Local_22.f_81[iVar4])))
				{
					PED::SET_PED_RESET_FLAG(&(Local_22.f_81[iVar4]), 261, true);
				}
				iVar4++;
			}
		}
		if (ANIMSCENE::_0x25557E324489393C(Local_22.f_48) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_22.f_48, 0))
		{
			if (bVar1)
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd", false, false);
			}
		}
		switch (func_8(&Local_22))
		{
			case 0:
				if (func_21(&Local_22))
				{
					func_22(&Local_22);
					if (!Local_22.f_14)
					{
						func_23(&(Local_22.f_104));
						func_24(1);
						func_25(-1, 0, 0, 0, 0);
						func_26();
					}
					func_27(&Local_22);
					func_28(&Local_22);
					Global_1394141->f_1321 = 0;
					func_29(&Local_22);
				}
				func_9(&Local_22, 1);
				break;
			
			case 1:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (func_30(&Local_22))
				{
					func_31(&Local_22);
					func_9(&Local_22, 2);
				}
				break;
			
			case 2:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (func_32(&Local_22))
				{
					func_33(&Local_22);
					if (!Local_22.f_14)
					{
						if (!Local_22.f_1070)
						{
							ANIMSCENE::START_ANIM_SCENE(Local_22.f_49);
						}
						else
						{
							func_34(&Local_22);
						}
						func_9(&Local_22, 3);
					}
					else
					{
						func_9(&Local_22, 6);
					}
				}
				break;
			
			case 3:
				if (func_21(&Local_22))
				{
					if (Local_22.f_1 == -1)
					{
					}
					else
					{
						func_35(&(Local_22.f_910), Local_22.f_1);
					}
					func_29(&Local_22);
				}
				if (Local_22.f_1 == -1)
				{
					func_9(&Local_22, 6);
				}
				else if (func_36(&(Local_22.f_910), Local_22.f_1))
				{
					func_9(&Local_22, 4);
				}
				break;
			
			case 4:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (func_37(&(Local_22.f_349), Local_22.f_1, -1))
				{
					func_9(&Local_22, 5);
				}
				break;
			
			case 5:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (func_38(&(Local_22.f_349), &(Local_22.f_910), Local_22.f_1))
				{
					if (func_39(&(Local_22.f_349), Local_22.f_1))
					{
						if (!func_40(&(Local_22.f_26)))
						{
							func_41(&(Local_22.f_26));
						}
						else if (func_42(&(Local_22.f_26)) > 1f)
						{
							func_43(&(Local_22.f_26));
							func_9(&Local_22, 6);
						}
					}
				}
				break;
			
			case 6:
				if (func_21(&Local_22))
				{
					func_41(&(Local_22.f_947));
					if (Local_22.f_1070)
					{
						Local_22.f_1059.f_1 = Local_22.f_1;
					}
					if (Local_22.f_1 == 0 && !Local_22.f_14)
					{
						func_7(&(Global_1394141->f_1325), 512);
						func_7(&(Global_1394141->f_1325), 131072);
					}
					func_29(&Local_22);
				}
				func_44(&Local_22);
				if (Local_22.f_1070)
				{
					func_45(&(Local_22.f_1059), Local_22);
				}
				if (func_46(&Local_22))
				{
					if ((func_40(&(Local_22.f_947)) && func_47(&(Local_22.f_947)) > Local_22.f_1058) || bVar1)
					{
						func_41(&(Local_22.f_947));
						func_9(&Local_22, 7);
					}
				}
				break;
			
			case 7:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				func_44(&Local_22);
				if ((Local_22.f_1070 && Local_22.f_1059.f_10 == 0) && func_48(&(Local_22.f_947)) > 3f)
				{
					Local_22.f_1059.f_10 = 1;
				}
				if ((func_40(&(Local_22.f_947)) && func_47(&(Local_22.f_947)) > 10000) || Local_22.f_14)
				{
					bVar0 = true;
				}
				if (Local_22.f_1070)
				{
					func_45(&(Local_22.f_1059), Local_22);
				}
				if (bVar0)
				{
					if (!Local_22.f_14)
					{
						func_7(&(Global_1394141->f_1325), 2);
						func_7(&(Global_1394141->f_1325), 4096);
					}
					if (Local_22.f_1 != 0)
					{
					}
					if (Local_22.f_1070)
					{
						func_7(&(Global_1394141->f_1325), 16);
						Global_1394141->f_1330 = 1;
						if (Local_22.f_1 == 1 || Local_22.f_1 == 2)
						{
							func_7(&(Global_1394141->f_1325), 4194304);
						}
					}
					if (!func_2(Local_22.f_16, 1024))
					{
						func_9(&Local_22, 8);
					}
					else if (!func_40(&(Local_22.f_26)))
					{
						func_41(&(Local_22.f_26));
						Global_1394141->f_1322 = 1;
					}
					else if (func_42(&(Local_22.f_26)) > 5f)
					{
						func_43(&(Local_22.f_26));
						func_9(&Local_22, 8);
					}
				}
				break;
			
			case 8:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				func_44(&Local_22);
				if (Local_22.f_1070)
				{
					func_45(&(Local_22.f_1059), Local_22);
					func_49(&Local_22, Local_22.f_1);
					if (!func_2(Global_1394141->f_1325, 16))
					{
						func_50(&Local_22);
						func_51(Local_22);
						func_9(&Local_22, 9);
						AUDIO::_0x8BF907833BE275DE(0f, 1f);
						func_7(&(Local_22.f_16), 268435456);
					}
				}
				else
				{
					if (ANIMSCENE::_0x25557E324489393C(Local_22.f_48) && !func_2(Local_22.f_16, 128))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_22.f_48);
						func_7(&(Local_22.f_16), 128);
					}
					if (ANIMSCENE::_0x25557E324489393C(Local_22.f_49) && !func_2(Local_22.f_16, 512))
					{
						func_7(&(Local_22.f_16), -2147483648);
						func_7(&(Local_22.f_16), 512);
					}
					AUDIO::_0x8BF907833BE275DE(0f, 1f);
					func_7(&(Local_22.f_16), 268435456);
					func_54(func_52(6), func_53());
					if (func_2(Local_22.f_17, 1) && AUDIO::LOAD_STREAM(func_55(Local_22), func_56(Local_22)))
					{
						iVar5 = AUDIO::_0x0556C784FA056628(func_55(Local_22), func_56(Local_22));
						if (iVar5 != -1)
						{
							AUDIO::PLAY_STREAM_FROM_POSITION(2548.749f, -1305.267f, 50.01453f, iVar5);
						}
					}
					if (ANIMSCENE::_0x25557E324489393C(Local_22.f_48))
					{
						if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_22.f_48, 0))
						{
							func_9(&Local_22, 9);
						}
					}
				}
				break;
			
			case 9:
				if (func_21(&Local_22))
				{
					if (Local_22.f_1070 || !Local_22.f_14)
					{
						if (Local_22.f_1 == 4 || Local_22.f_1 == 2)
						{
							Global_40.f_9028[4] = (&Global_40.f_9028[4] + 1);
							Global_40.f_9028[2] = &Global_40.f_9028[2] + 1;
						}
						else
						{
							Global_40.f_9028[1] = (&Global_40.f_9028[1] + 1);
							Global_40.f_9028[3] = &Global_40.f_9028[3] + 1;
						}
					}
					func_41(&(Local_22.f_32));
					Global_1394141->f_1335 = Local_22.f_48;
					func_29(&Local_22);
				}
				func_44(&Local_22);
				if (!Local_22.f_14)
				{
					func_57(&(Local_22.f_910), &(Local_22.f_349), Local_22.f_1);
					if (!bVar1)
					{
						if (func_58(1))
						{
							if (!func_40(&(Local_22.f_20)))
							{
								func_41(&(Local_22.f_20));
							}
							else if (func_42(&(Local_22.f_20)) > 10f)
							{
								func_59(1);
								func_43(&(Local_22.f_20));
							}
						}
					}
					else
					{
						if (!func_58(1))
						{
							func_24(1);
							func_25(-1, 0, 0, 0, 0);
							func_26();
						}
						if (func_40(&(Local_22.f_20)))
						{
							func_43(&(Local_22.f_20));
						}
					}
				}
				func_60(&(Local_22.f_12));
				func_61(&Local_22);
				func_62(&Local_22);
				func_63(&Local_22);
				if (func_2(Local_22.f_16, 4096))
				{
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_22.f_48, 0) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_22.f_48) > func_64())
					{
						func_7(&(Local_22.f_16), 2);
					}
				}
				if (func_2(Local_22.f_16, 268435456) && func_2(Local_22.f_16, 134217728))
				{
					AUDIO::_0x8BF907833BE275DE(1f, 1f);
					func_3(&(Local_22.f_16), 268435456);
				}
				if (Local_22.f_1070)
				{
					func_65(&Local_22);
					func_45(&(Local_22.f_1059), Local_22);
					func_66(&Local_22, bVar1);
					if ((func_67() && func_2(Local_22.f_16, 2097152)) && func_48(&(Local_22.f_32)) > 30f)
					{
						if (!func_2(Local_22.f_16, 67108864))
						{
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 32);
							if (Local_22.f_1 == 1 || Local_22.f_1 == 2)
							{
								func_7(&(Global_1394141->f_1325), 8388608);
							}
							Global_1394141->f_1330 = 0;
							Local_22.f_910.f_19 = 1;
							Global_1394141->f_1329 = 1;
							func_69(func_68(281346304), 1);
							func_70(&Local_22);
							func_7(&(Local_22.f_16), 67108864);
						}
						func_71(&Local_22);
						if (!bVar1 && !bVar2)
						{
							func_9(&Local_22, 10);
						}
						if (func_2(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							func_3(&(Local_22.f_16), 268435456);
						}
					}
					else
					{
						if (bVar1 || bVar2)
						{
							if (!func_2(Local_22.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(0f, 1f);
								func_7(&(Local_22.f_16), 268435456);
							}
						}
						else if (func_2(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							func_3(&(Local_22.f_16), 268435456);
						}
						func_72(&Local_22);
					}
				}
				else if (func_2(Local_22.f_16, 8388608))
				{
					if (!func_2(Local_22.f_16, 67108864))
					{
						func_73(func_52(6), func_53());
						if (func_2(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							func_3(&(Local_22.f_16), 268435456);
						}
						if (func_2(Local_22.f_16, 4096) && !Local_22.f_14)
						{
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 8192);
						}
						if (Local_22.f_14)
						{
							Global_1394141->f_1323 = 1;
						}
						func_69(func_68(-299021541), 1);
						func_7(&(Local_22.f_16), 67108864);
					}
					if (Local_22.f_14)
					{
						if (!Global_1394141->f_1321)
						{
							if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_22.f_48) > 0.99f)
							{
								func_9(&Local_22, 10);
							}
							if (Local_22 != 7)
							{
							}
							else
							{
								func_9(&Local_22, 10);
							}
						}
					}
					else
					{
						func_74(&Local_22);
						if (!bVar1 && !bVar2)
						{
							Global_1394141->f_1321 = 0;
							func_9(&Local_22, 10);
						}
					}
				}
				if (!bVar1)
				{
					func_75(&Local_22);
				}
				break;
			
			case 10:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (func_2(Local_22.f_16, 4194304))
				{
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(func_76(Local_22.f_1));
					if (INTERIOR::IS_VALID_INTERIOR(iVar6))
					{
						INTERIOR::UNPIN_INTERIOR(iVar6);
					}
					func_3(&(Local_22.f_16), 4194304);
				}
				func_3(&(Global_1394141->f_1326), 32768);
				if (!Local_22.f_14 && (func_2(Global_1394141->f_1326, -2147483648) || func_2(Local_22.f_16, 33554432)))
				{
					if (!bVar1)
					{
						if (Local_22.f_1070)
						{
							func_77(&(Local_22.f_1059));
							func_7(&(Global_1394141->f_1325), 4);
							func_7(&(Global_1394141->f_1325), 32);
							if (func_2(Local_22.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(1f, 1f);
								func_3(&(Local_22.f_16), 268435456);
							}
							func_71(&Local_22);
						}
						else
						{
							Global_1394141->f_1321 = 0;
						}
						func_70(&Local_22);
						Global_1394141->f_1328 = 0;
						Global_1394141->f_1330 = 0;
						if (ANIMSCENE::_0x25557E324489393C(Local_22.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(func_53());
						func_1(&Local_22);
						func_78(&(Local_22.f_349), &(Local_22.f_35[4]));
						func_79(&Local_22);
						func_80(Local_22);
						func_81((Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
						func_82();
						func_9(&Local_22, 11);
					}
				}
				if (Local_22.f_14)
				{
					if (ANIMSCENE::_0x25557E324489393C(Local_22.f_49))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
					}
					AUDIO::_0x531A78D6BF27014B(func_53());
					func_1(&Local_22);
					func_9(&Local_22, 11);
				}
				else if (((!bVar1 && !bVar2) && !Local_22.f_14) && fVar3 > 17f)
				{
					func_74(&Local_22);
					func_70(&Local_22);
					Global_1394141->f_1328 = 0;
					Global_1394141->f_1330 = 0;
					func_77(&(Local_22.f_1059));
					if (!func_83(Local_22) && !func_84(Local_22))
					{
						if (ANIMSCENE::_0x25557E324489393C(Local_22.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(func_53());
						func_1(&Local_22);
						func_78(&(Local_22.f_349), &(Local_22.f_35[4]));
						func_79(&Local_22);
						func_81((Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
						func_82();
						func_9(&Local_22, 11);
					}
				}
				break;
			
			case 11:
				if (func_21(&Local_22))
				{
					func_29(&Local_22);
				}
				if (!Local_22.f_14)
				{
					if (!bVar1)
					{
						if (Local_22.f_2 == 0)
						{
							(Global_1394141->f_1279[Local_22.f_1 /*8*/])->f_6 = 0;
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
					else
					{
						func_9(&Local_22, 10);
					}
				}
				else
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Local_22.f_1070)
	{
		func_85(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		iVar1 = &uParam0->f_66[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_81)
	{
		iVar2 = &uParam0->f_81[iVar0];
		if (STREAMING::IS_MODEL_VALID(&(uParam0->f_74[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, -1f);
			PED::DELETE_PED(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_96)
	{
		iVar3 = &uParam0->f_96[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			OBJECT::DELETE_OBJECT(&iVar3);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_57))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_57));
	}
	if (HUD::_0x2C729F2B94CEA911(uParam0->f_945))
	{
		if (HUD::_0xD0976CC34002DB57(uParam0->f_945))
		{
			HUD::_0xAA03F130A637D923(uParam0->f_945);
		}
	}
	if (HUD::_0x2C729F2B94CEA911(uParam0->f_946) && !uParam0->f_14)
	{
		if (HUD::_0xD0976CC34002DB57(uParam0->f_946))
		{
			HUD::_0xAA03F130A637D923(uParam0->f_946);
		}
	}
	func_86(uParam0);
	if (!uParam0->f_14)
	{
		func_87(&(uParam0->f_104));
		if (func_58(1))
		{
			func_59(1);
		}
	}
	if (func_2(uParam0->f_16, 33554432))
	{
		func_78(&(uParam0->f_349), (Global_1394141->f_7[*uParam0 /*31*/])->f_4);
	}
	func_59(1);
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, int iParam1)
{
	func_88(uParam0, iParam1);
}

bool func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_5(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_6(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_7(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

int func_8(int iParam0)
{
	return iParam0->f_9;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0->f_9 != iParam1)
	{
		iParam0->f_9 = iParam1;
		func_90(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

int func_11(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		func_91(&(Global_40.f_9028.f_6[(Global_1394141->f_7[iParam0 /*31*/])->f_30]), &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 6 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_12(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (func_2(Global_1394141->f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (func_2(Global_1394141->f_1326, 2))
	{
		bVar0 = false;
	}
	if (func_2(Global_1394141->f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (func_2(Global_1394141->f_1326, 64))
	{
		bVar2 = false;
	}
	if (func_2(Global_1394141->f_1326, 512))
	{
		bVar5 = true;
	}
	func_92(0);
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(func_93(0), joaat("weapon_unarmed"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(func_93(0), joaat("weapon_unarmed"));
		}
		if (!bVar0)
		{
			if (!func_2(Global_1394141->f_1326, 8))
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
				{
					VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("weapon_unarmed") && iLocal_2 != 1549070292) && iLocal_2 != 1030402560)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(func_93(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
						{
							VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
						}
						func_7(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		else if (func_2(Global_1394141->f_1326, 8))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && bVar3)
			{
				VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 1030835986);
				func_3(&(Global_1394141->f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 716706914, 1);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1);
				if ((((((iLocal_2 != joaat("weapon_unarmed") && iLocal_2 != 1549070292) && iLocal_2 != 1030402560) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			func_95(&iLocal_2, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
			PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
			PAD::DISABLE_CONTROL_ACTION(0, -197984200, false);
			PAD::DISABLE_CONTROL_ACTION(0, -238861894, false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_0x8910C24B7E0046EC();
		PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
		PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			else
			{
				HUD::_0xC9CAEAEEC1256E54(1664736751);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			if (!func_2(Global_1394141->f_1326, 8))
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("weapon_unarmed") && iLocal_2 != 1549070292) && iLocal_2 != 1030402560)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(func_93(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
						{
							VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
						}
						func_7(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		func_96();
	}
	else
	{
		func_97();
		func_95(&iLocal_2, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
		}
	}
}

void func_13(int iParam0, float fParam1)
{
	switch (iParam0->f_2)
	{
		case 0:
			if (func_8(iParam0) == 6 && !func_98())
			{
				func_99(&(iParam0->f_2), 1);
			}
			if (((func_4(Global_35, (Global_1394141->f_7[*iParam0 /*31*/])->f_4, 1, 0) && !func_98()) && func_8(iParam0) >= 6) && !func_4(Global_35, &(iParam0->f_35[3]), 1, 0))
			{
				func_99(&(iParam0->f_2), 1);
			}
			break;
		
		case 1:
			if (func_100(*iParam0))
			{
				func_99(&(iParam0->f_2), 2);
			}
			break;
		
		case 2:
			if (func_98() && !func_4(Global_35, (Global_1394141->f_7[*iParam0 /*31*/])->f_4, 1, 0))
			{
				func_99(&(iParam0->f_2), 3);
			}
			if (func_8(iParam0) == 10 || func_8(iParam0) == 11)
			{
				if (fParam1 > 17f)
				{
					func_99(&(iParam0->f_2), 3);
				}
			}
			break;
		
		case 3:
			if (func_80(*iParam0))
			{
				func_99(&(iParam0->f_2), 0);
			}
			break;
	}
}

int func_14(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_101(bParam1, iParam2, iParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1 || !func_2(Global_1394141->f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 1))
	{
		iVar1 = func_102(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_105((*uParam0)[iVar0 /*5*/], func_103(iParam1), func_104(iParam1, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 8))
	{
		iVar1 = func_106(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_105(uParam0->f_31[iVar0 /*5*/], func_107(iParam1), func_108(iParam1, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141->f_1325, 2048))
	{
		iVar1 = func_109(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_105(uParam0->f_107[iVar0 /*5*/], func_110(iParam1), func_111(iParam1, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141->f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!func_2(Global_1394141->f_1325, 64) && func_105(uParam0->f_118[0 /*5*/], func_112(iParam1, 0), func_113(iParam1, 0), 1065353216))
			{
				func_7(&(Global_1394141->f_1325), 64);
			}
			if ((!func_2(Global_1394141->f_1325, 16384) && func_105(uParam0->f_118[1 /*5*/], func_112(iParam1, 1), func_113(iParam1, 1), 1065353216)) && func_105(uParam0->f_118[2 /*5*/], func_112(iParam1, 2), func_113(iParam1, 2), 1065353216))
			{
				func_7(&(Global_1394141->f_1325), 16384);
			}
			break;
		
		case 1:
		case 2:
			iVar2 = 0;
			if (!func_2(Global_1394141->f_1325, 2097152))
			{
				iVar1 = func_114(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_105(uParam0->f_118[iVar0 /*5*/], func_112(iParam1, 0), func_113(iParam1, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_7(&(Global_1394141->f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_16(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (func_2(Global_1394141->f_1325, 1))
	{
		if (func_2(Global_1394141->f_1325, 2) && func_118(uParam0, func_115(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 2);
		}
		if (func_2(Global_1394141->f_1325, 4) && func_120(uParam0, func_119(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 4);
		}
	}
	if (func_2(Global_1394141->f_1325, 8))
	{
		if (func_2(Global_1394141->f_1325, 16) && func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 16);
		}
		if (func_2(Global_1394141->f_1325, 32) && func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 32);
		}
	}
	if (func_2(Global_1394141->f_1325, 2048))
	{
		if (func_2(Global_1394141->f_1325, 4096) && func_118(&(uParam0->f_107), func_124(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 4096);
		}
		if (func_2(Global_1394141->f_1325, 8192) && func_120(&(uParam0->f_107), func_126(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141->f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (func_2(Global_1394141->f_1325, 64))
		{
			if (func_2(Global_1394141->f_1325, 128) && func_129(uParam0->f_118[0 /*5*/], func_127(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 128);
			}
			if (func_2(Global_1394141->f_1325, 256) && func_131(uParam0->f_118[0 /*5*/], func_130(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 256);
			}
			if (func_2(Global_1394141->f_1325, 512) && func_129(uParam0->f_118[0 /*5*/], func_127(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 512);
			}
			if (func_2(Global_1394141->f_1325, 1024) && func_131(uParam0->f_118[0 /*5*/], func_130(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 1024);
			}
		}
		if (func_2(Global_1394141->f_1325, 16384))
		{
			if (func_2(Global_1394141->f_1325, 32768) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 32768);
			}
			if (func_2(Global_1394141->f_1325, 65536) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 65536);
			}
			if (func_2(Global_1394141->f_1325, 131072) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 131072);
			}
			if (func_2(Global_1394141->f_1325, 262144) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 262144);
			}
		}
		if (func_2(Global_1394141->f_1325, 524288))
		{
			bVar0 = true;
			if (!func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_3(&(Global_1394141->f_1325), 524288);
			}
		}
		if (func_2(Global_1394141->f_1325, 1048576))
		{
			bVar1 = true;
			if (!func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_3(&(Global_1394141->f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (func_2(Global_1394141->f_1325, 2097152))
		{
			if (func_2(Global_1394141->f_1325, 4194304) && func_118(&(uParam0->f_118), func_137(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 4194304);
			}
			if (func_2(Global_1394141->f_1325, 8388608) && func_120(&(uParam0->f_118), func_139(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141->f_1325), 8388608);
			}
		}
	}
}

void func_17(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_49))
	{
		return;
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!func_142(uParam0->f_49, func_140(1), func_141()))
			{
				return;
			}
			func_143(&(uParam0->f_13), 1);
			break;
		
		case 1:
			if (func_2(uParam0->f_16, -2147483648))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, func_144(), uParam0->f_57, 0);
				func_145(uParam0->f_49, func_140(1), func_141());
				func_143(&(uParam0->f_13), 2);
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_49, func_140(1)))
			{
				func_146(uParam0->f_49, func_140(2), func_141());
				func_3(&(uParam0->f_16), -2147483648);
				func_143(&(uParam0->f_13), 3);
			}
			break;
		
		case 3:
			if (!func_142(uParam0->f_49, func_140(2), func_141()))
			{
				return;
			}
			func_143(&(uParam0->f_13), 4);
			break;
		
		case 4:
			if (Global_1394141->f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, func_144(), uParam0->f_57, 0);
				func_145(uParam0->f_49, func_140(2), func_141());
				func_143(&(uParam0->f_13), 5);
			}
			break;
		
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_49, func_140(2)))
			{
				func_146(uParam0->f_49, func_140(1), func_141());
				func_143(&(uParam0->f_13), 0);
			}
			break;
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!uParam0->f_1070)
	{
		return;
	}
	bVar0 = PED::_0x34D6AC1157C8226C(Global_35, -447259824);
	bVar1 = func_4(Global_35, &(uParam0->f_35[1]), 1, 0);
	bVar2 = func_4(Global_35, &(uParam0->f_35[2]), 1, 0);
	if (bVar0)
	{
		if (bVar1)
		{
			if (!func_2(uParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1101)) && !CAM::_0x927B810E43E99932(&(uParam0->f_1101)))
				{
					CAM::_0xB8B207C34285E978(&(uParam0->f_1101));
					func_7(&(uParam0->f_16), 2048);
				}
			}
		}
		if (bVar2)
		{
			if (!func_2(uParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1117)) && !CAM::_0x927B810E43E99932(&(uParam0->f_1117)))
				{
					CAM::_0xB8B207C34285E978(&(uParam0->f_1117));
				}
			}
		}
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_1101)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1101));
			func_3(&(uParam0->f_16), 2048);
		}
		if (CAM::_0x927B810E43E99932(&(uParam0->f_1117)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1117));
			func_3(&(uParam0->f_16), 2048);
		}
	}
}

void func_19(int iParam0)
{
	switch (Local_1155.f_1)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(iParam0->f_48))
			{
				return;
			}
			if (!func_2(Local_1155.f_32, 1))
			{
				return;
			}
			if (!func_142(iParam0->f_48, func_147(5), "PLAYER CHALLENGE"))
			{
				return;
			}
			func_148(&(Local_1155.f_1), 1);
			break;
		
		case 1:
			break;
	}
}

bool func_20(int iParam0)
{
	return iParam0 != 0;
}

bool func_21(int iParam0)
{
	return iParam0->f_10;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iParam0->f_88[iVar0] = 0;
		iVar0++;
	}
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		((*uParam0)[iVar0 /*5*/])->f_2 = 1f;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0f;
		((*uParam0)[iVar0 /*5*/])->f_4 = 1f;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		(uParam0->f_31[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_31[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_31[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_31[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0->f_107[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_107[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_107[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_107[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		(uParam0->f_118[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_118[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_118[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_118[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	func_7(&(Global_1394141->f_1325), -2147483648);
}

void func_24(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_25(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
	}
	if (func_149() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_150(iVar1) && !func_151(iVar1, iParam2)) && (!bParam3 || !func_152(iVar1))) && (!bParam4 || !func_153(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_154(iVar0);
			}
		}
		iVar0++;
	}
}

void func_26()
{
	if (!func_150(&Global_1327479))
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
	func_155(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_74[0] = -1922688829;
	uParam0->f_58[0] = -2021274799;
	uParam0->f_58[1] = 330367347;
	uParam0->f_58[2] = 330367347;
	func_7(&(uParam0->f_16), 1024);
	func_7(&(uParam0->f_16), 512);
	uParam0->f_50 = { 2546.453f, -1303.998f, 46.793f };
	uParam0->f_53 = { 0f, 0f, 40f };
	uParam0->f_946 = "SHRCTAU";
	uParam0->f_945 = "SHFOSAU";
	uParam0->f_910 = Local_22;
	func_7(&(uParam0->f_16), 131072);
	if (func_156())
	{
		func_157(&(uParam0->f_954), Global_35, "JOHN", 0);
	}
	else
	{
		func_157(&(uParam0->f_954), Global_35, "ARTHUR", 0);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_48))
	{
		uParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@shows@flex_fight@act2@action", 2, func_147(0), false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		iVar1 = iVar0;
		Local_1155.f_33[iVar0] = MISC::GET_HASH_KEY(func_158(iVar1));
		iVar0++;
	}
	Local_1155.f_51 = 0;
	PED::_0xF008E0BA1FE1D644(1);
}

void func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_58)
	{
		iVar1 = &uParam0->f_58[iVar0];
		if (func_20(iVar1))
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_74)
	{
		iVar2 = &uParam0->f_74[iVar0];
		if (func_20(iVar2))
		{
			STREAMING::REQUEST_MODEL(iVar2, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_88)
	{
		bVar3 = &uParam0->f_88[iVar0];
		if (bVar3 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(bVar3))
			{
				WEAPON::_0x72D4CB5DB927009C(bVar3, -1, 0);
			}
		}
		iVar0++;
	}
	if (!uParam0->f_14 && !uParam0->f_1070)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_56, false);
	}
	STREAMING::REQUEST_ANIM_DICT(func_159());
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_48) && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_48, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_48);
	}
}

void func_29(int iParam0)
{
	iParam0->f_10 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(func_76(iParam0->f_1));
	if (!func_2(iParam0->f_16, 4194304))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
			func_7(&(iParam0->f_16), 4194304);
			return 0;
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iVar1))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_945))
	{
		if (HUD::_0x2C729F2B94CEA911(iParam0->f_945))
		{
			HUD::_0xF66090013DE648D5(iParam0->f_945);
		}
		if (!HUD::_0xD0976CC34002DB57(iParam0->f_945))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_0x2C729F2B94CEA911(iParam0->f_946))
		{
			HUD::_0xF66090013DE648D5(iParam0->f_946);
		}
		if (!HUD::_0xD0976CC34002DB57(iParam0->f_946))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar2 = &iParam0->f_58[iVar0];
		if (func_20(iVar2))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar3 = &iParam0->f_74[iVar0];
		if (func_20(iVar3))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar4 = &iParam0->f_88[iVar0];
		if (iVar4 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar4) && !WEAPON::_0xFF07CF465F48B830(iVar4))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_56))
		{
			return 0;
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_48))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(iParam0->f_48, 1, 0))
		{
			return 0;
		}
	}
	if (!AUDIO::_0xD9130842D7226045(func_53(), 1))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_159()))
	{
		return 0;
	}
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_161(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	StringCopy(&(iParam0->f_1101), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1101.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(iParam0->f_1117), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1117.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&(iParam0->f_1117));
	return 1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!func_162(&(iParam0->f_57), iParam0->f_56, iParam0->f_45))
		{
			return 0;
		}
		if (!func_165(&(iParam0->f_49), &(iParam0->f_16), func_163(), func_164(0), 1))
		{
			return 0;
		}
		if (!func_142(iParam0->f_49, func_164(1), func_163()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (STREAMING::IS_MODEL_VALID(&(iParam0->f_74[iVar0])))
		{
			if (!func_166(iParam0->f_81[iVar0], &(iParam0->f_74[iVar0]), iParam0->f_42, 0f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_167(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((STREAMING::IS_MODEL_VALID(&(iParam0->f_74[iVar0])) && ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_81[iVar0]))) && !ENTITY::IS_ENTITY_DEAD(&(iParam0->f_81[iVar0])))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(&(iParam0->f_81[iVar0]), "Default_Show_Performers_Group", -1f);
		}
		iVar0++;
	}
	func_168(iParam0);
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, "CURTAIN", iParam0->f_57, 0);
	}
	return 1;
}

void func_33(int iParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0->f_48))
	{
		return;
	}
	func_169(iParam0);
	if (!ANIMSCENE::_0x477122B8D05E7968(iParam0->f_48, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_48);
	}
}

void func_34(var uParam0)
{
	struct<10> Var0;
	
	if (uParam0->f_1 == 0)
	{
		return;
	}
	Var0 = { func_170(1, uParam0->f_1) };
	if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_35[1])))
	{
		uParam0->f_35[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_170(2, uParam0->f_1) };
	if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_35[2])))
	{
		uParam0->f_35[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_170(3, uParam0->f_1) };
	if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_35[3])))
	{
		uParam0->f_35[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { func_170(4, uParam0->f_1) };
	if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_35[4])))
	{
		uParam0->f_35[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case 0:
			PED::_0xF008E0BA1FE1D644(56);
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_171(iVar1, *uParam0))
				{
					STREAMING::REQUEST_ANIM_DICT(func_172(iVar1));
				}
				iVar0++;
			}
			uParam0->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			break;
		
		case 1:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		
		case 2:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		
		case 3:
			PED::_0xF008E0BA1FE1D644(10);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		
		case 4:
			PED::_0xF008E0BA1FE1D644(23);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
	}
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_171(iVar1, *uParam0) && !STREAMING::HAS_ANIM_DICT_LOADED(func_172(iVar1)))
				{
					bVar2 = false;
				}
				iVar0++;
			}
			if (!bVar2)
			{
				return 0;
			}
			if (!func_174(uParam0->f_12[1 /*2*/], func_173(1, uParam0->f_17), 0))
			{
				return 0;
			}
			if (!func_174(uParam0->f_12[0 /*2*/], func_173(0, uParam0->f_17), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_37(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_175(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_176(iParam1), func_177(iParam1, iVar2), -156825994, 0, 1, func_178(iParam1, iVar2));
			bVar1 = false;
			if (func_2(Global_1394141->f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = 1110781448;
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = 339709868;
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = -141596905;
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return 0;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = func_181(iVar3, func_178(iParam1, iVar2), func_179(iParam1, iVar2), 1, 1, func_180(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar2 /*10*/]))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_38(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_182(uParam1, iParam2))
	{
		return 0;
	}
	iVar0 = func_175(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((func_183(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 6;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam1->f_12[1 /*2*/]), func_184(1, iVar1, uParam1->f_17), uParam0[iVar1 /*10*/], 0);
		}
		else if (func_185(iParam2))
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 1;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			func_186((*uParam0)[iVar1 /*10*/], iParam2);
		}
		else
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 1;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			func_187((*uParam0)[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return 1;
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(iParam1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0[iVar1 /*10*/], 301, true);
			PED::SET_PED_CONFIG_FLAG(uParam0[iVar1 /*10*/], 448, true);
			AUDIO::STOP_PED_SPEAKING(uParam0[iVar1 /*10*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0[iVar1 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0[iVar1 /*10*/], -1538724068);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar1 /*10*/], true);
			func_188(uParam0[iVar1 /*10*/], 0);
		}
		iVar1++;
	}
	return 1;
}

bool func_40(var uParam0)
{
	return func_189(*uParam0, 1);
}

void func_41(var uParam0)
{
	func_190(uParam0, 0f);
}

float func_42(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_191(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_192() - uParam0->f_1);
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(int iParam0)
{
	if (iParam0->f_15)
	{
	}
}

void func_45(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (*uParam0)
	{
		case 0:
			if (!func_193(uParam0->f_1))
			{
				func_194(uParam0, 5);
				return;
			}
			PED::_0xF008E0BA1FE1D644(1);
			STREAMING::REQUEST_MODEL(func_195(), false);
			STREAMING::REQUEST_MODEL(func_196(0), false);
			func_194(uParam0, 1);
			break;
		
		case 1:
			if (!PED::_0x5E420FF293EE5472())
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_195()) || !STREAMING::HAS_MODEL_LOADED(func_196(0)))
			{
				return;
			}
			bVar0 = func_197(uParam0->f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				if (bVar0)
				{
					uParam0->f_2 = func_181(func_195(), func_198(uParam0->f_1), func_199(uParam0->f_1), 1, 1, 1, 1, 1, 0, 0, 1, 0, 0);
				}
				else
				{
					uParam0->f_2 = func_181(func_195(), func_198(uParam0->f_1), func_199(uParam0->f_1), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				return;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
				if (bVar0)
				{
					func_201(uParam0->f_2, func_200(uParam0->f_1));
				}
			}
			iVar1 = 0;
			while (iVar1 <= (5 - 1))
			{
				iVar2 = iVar1;
				uParam0->f_3[iVar1] = OBJECT::CREATE_OBJECT(func_196(iVar2), func_202(iVar2), true, true, false, false, true);
				iVar1++;
			}
			func_194(uParam0, 2);
			break;
		
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(func_203(iParam1), 0, func_204(iParam1, 0), false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, func_205(iParam1), func_206(iParam1), 2);
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_9, 1, 0))
			{
				func_194(uParam0, 3);
			}
			break;
		
		case 3:
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, func_207(iParam1), uParam0->f_2, 0);
				iVar3 = 0;
				while (iVar3 <= (5 - 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, func_208(iParam1, iVar3), &(uParam0->f_3[iVar3]), 0);
					iVar3++;
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_9);
				func_194(uParam0, 4);
			}
			break;
		
		case 4:
			if (uParam0->f_10)
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_9, func_204(iParam1, 1)))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_9, func_204(iParam1, 1)))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_9, func_204(iParam1, 1));
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_9, func_204(iParam1, 1), true);
					}
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_46(int iParam0)
{
	var uVar0[1];
	var uVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_81[1])))
	{
		uVar2 = 1;
		if (func_209(&uVar0, &uVar2, 1, 2547.733f, -1303.363f, 47.48392f, 0.5f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 0) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uVar0[0])) && !ENTITY::IS_ENTITY_DEAD(&(uVar0[0])))
			{
				iParam0->f_81[1] = &uVar0[0];
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(&(iParam0->f_81[1]), "Default_Show_Performers_Group", -1f);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CrowdMember", &(iParam0->f_81[1]), 0);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_47(var uParam0)
{
	if (!func_40(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_191(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_210() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

float func_48(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 0f;
	}
	if (func_191(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_192() - uParam0->f_1);
}

int func_49(int iParam0, int iParam1)
{
	struct<7> Var0;
	
	Var0 = { func_170(0, iParam1) };
	if (!VOLUME::_0x92A78D0BEDB332A3(&(iParam0->f_35[0])))
	{
		iParam0->f_35[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	else
	{
		VOLUME::_0x541B8576615C33DE(&(iParam0->f_35[0]), Var0);
		VOLUME::_0xA07CF1B21B56F041(&(iParam0->f_35[0]), Var0.f_3);
		VOLUME::_0xA46E98BDC407E23D(&(iParam0->f_35[0]), Var0.f_6);
	}
	return 1;
}

void func_50(int iParam0)
{
	if (iParam0->f_1071 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		return;
	}
	if (!iParam0->f_1072)
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1088, true);
	}
	GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	GRAPHICS::SET_TV_VOLUME(iParam0->f_1095);
	if (iParam0->f_1072)
	{
		if (iParam0->f_1 != 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
			{
				GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1089);
		}
		else
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(iParam0->f_1089, 5f);
		}
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, iParam0->f_1076, true);
	GRAPHICS::SET_TV_CHANNEL(0);
	if (AUDIO::LOAD_STREAM("Audience", func_211(*iParam0)))
	{
		iParam0->f_1100 = AUDIO::_0x0556C784FA056628("Audience", func_211(*iParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(iParam0->f_1097, iParam0->f_1100);
	}
}

void func_51(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			func_212();
			break;
		
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			func_213();
			break;
	}
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEER_SMALL";
		
		case 1:
			return "CHEER_MEDIUM";
		
		case 2:
			return "CHEER_LARGE";
		
		case 3:
			return "JEER_SMALL";
		
		case 4:
			return "JEER_MEDIUM";
		
		case 5:
			return "JEER_LARGE";
		
		case 6:
			return "CROWD_LISTENS_TO_SHOW";
		
		default:
			break;
	}
	return "CHEER_SMALL";
}

char* func_53()
{
	return "SHOWS_sounds";
}

void func_54(char* sParam0, char* sParam1)
{
	AUDIO::PLAY_SOUND_FRONTEND(sParam0, sParam1, true, 0);
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "Curtain_Open_Music";
		
		case 10:
			return "Curtain_Opens_Music";
		
		case 11:
			return "Escape_Noose_Curtain_Music";
		
		default:
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "3160317806_action";
		
		case 10:
			return "2245181467_action";
		
		case 11:
			return "4224921010_action";
		
		default:
			break;
	}
	return "";
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	if (func_2(uParam0->f_18, 1) && !func_2(uParam0->f_18, 2))
	{
		STREAMING::_0x19A6BE7D9C6884D3(-1426662425, 15, 0, 0);
		func_7(&(uParam0->f_18), 2);
	}
	if (func_2(uParam0->f_18, 2) && !func_2(uParam0->f_18, 4))
	{
		if (STREAMING::_0x9427C94D2E4094A4(-1426662425, 0))
		{
			func_7(&(uParam0->f_18), 4);
		}
	}
	if (func_2(uParam0->f_18, 8) && !func_2(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_214(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_214(iParam2)))
		{
			func_7(&(uParam0->f_18), 16);
		}
	}
	func_215(uParam0, uParam1, iParam2);
	switch (Global_1394141->f_1332)
	{
		case 0:
			break;
		
		default:
			if (Global_1394141->f_1332 != Global_1394141->f_1333)
			{
				func_217(uParam0, uParam1, iParam2, func_216(*uParam0, uParam0->f_1, Global_1394141->f_1332));
				Global_1394141->f_1333 = Global_1394141->f_1332;
			}
			break;
	}
}

bool func_58(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

void func_59(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_60(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) - Global_36 };
	vVar3 = { func_218(vVar3) };
	fVar6 = func_219(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		func_220(uParam0);
	}
}

void func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return;
	}
	if ((func_2(uParam0->f_16, 262144) && uParam0->f_41 != 2) && uParam0->f_41 != 3)
	{
		MISC::_0xE98D55C5983F2509(uParam0->f_12);
		func_221(uParam0);
		func_222(&(uParam0->f_41), 2);
	}
	if (func_2(Global_1394141->f_1326, 512))
	{
		if (!func_2(uParam0->f_16, 1048576))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_81[iVar0])))
				{
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_81[iVar0]), 301, true);
				}
				iVar0++;
			}
			func_7(&(uParam0->f_16), 1048576);
		}
	}
	else if (func_2(uParam0->f_16, 1048576))
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_81[iVar1])))
			{
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_81[iVar1]), 301, false);
			}
			iVar1++;
		}
		func_3(&(uParam0->f_16), 1048576);
	}
	switch (uParam0->f_41)
	{
		case 0:
			uParam0->f_1052 = 0;
			uParam0->f_953 = 8500;
			func_41(&(uParam0->f_950));
			MISC::_0x870708A6E147A9AD(uParam0->f_12, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 130, true);
			func_222(&(uParam0->f_41), 1);
			break;
		
		case 1:
			iVar3 = func_223(uParam0->f_12);
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar2, 0, 0) && iVar2 == iVar3)
			{
				if ((func_2(uParam0->f_16, 131072) && !func_2(Global_1394141->f_1326, 512)) && !func_2(Global_1394141->f_1326, 16384))
				{
					if (!func_40(&(uParam0->f_947)))
					{
						func_41(&(uParam0->f_947));
					}
					else if (!func_224(&(uParam0->f_1053[1])) || !func_224(&(uParam0->f_1053[0])))
					{
						func_225(uParam0, &Global_35);
						if (func_47(&(uParam0->f_947)) > uParam0->f_953)
						{
							func_226(&(uParam0->f_1053[1]), 1, 1);
							func_226(&(uParam0->f_1053[0]), 1, 1);
						}
					}
					else if (func_47(&(uParam0->f_947)) > uParam0->f_953 || func_2(uParam0->f_16, 524288))
					{
						if (!func_227(&(uParam0->f_1053[1]), 0))
						{
							func_3(&(uParam0->f_16), 16);
							func_226(&(uParam0->f_1053[1]), 1, 1);
						}
						if (!func_227(&(uParam0->f_1053[0]), 0))
						{
							func_3(&(uParam0->f_16), 32);
							func_226(&(uParam0->f_1053[0]), 1, 1);
						}
						if (func_228(uParam0->f_1053[1]))
						{
							func_226(&(uParam0->f_1053[1]), 0, 1);
							func_226(&(uParam0->f_1053[0]), 0, 1);
							if (func_2(uParam0->f_16, 524288))
							{
								func_3(&(uParam0->f_16), 524288);
							}
							if (func_2(Global_1394141->f_1326, 32768))
							{
								if (func_229(uParam0))
								{
									iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
									if (iVar4 < 4)
									{
										func_230();
									}
									uParam0->f_953 = 8500;
									func_41(&(uParam0->f_947));
								}
							}
							else
							{
								func_230();
								uParam0->f_953 = 8500;
								func_41(&(uParam0->f_947));
							}
						}
						else if (func_228(uParam0->f_1053[0]))
						{
							func_226(&(uParam0->f_1053[1]), 0, 1);
							func_226(&(uParam0->f_1053[0]), 0, 1);
							if (func_2(uParam0->f_16, 524288))
							{
								func_3(&(uParam0->f_16), 524288);
							}
							if (func_231(uParam0))
							{
								uParam0->f_953 = 8500;
								func_41(&(uParam0->f_947));
							}
						}
					}
					else
					{
						if (func_227(&(uParam0->f_1053[1]), 0))
						{
							func_226(&(uParam0->f_1053[1]), 0, 1);
						}
						if (func_227(&(uParam0->f_1053[0]), 0))
						{
							func_226(&(uParam0->f_1053[0]), 0, 1);
						}
					}
				}
				else
				{
					if (func_227(&(uParam0->f_1053[1]), 1))
					{
						func_226(&(uParam0->f_1053[1]), 0, 1);
					}
					if (func_227(&(uParam0->f_1053[0]), 1))
					{
						func_226(&(uParam0->f_1053[0]), 0, 1);
					}
				}
				if (func_2(uParam0->f_16, 256))
				{
					if (!func_232(uParam0->f_1053[2], &Global_35, "INTERACT_DRAW", 129547951))
					{
						return;
					}
					else if (!func_234(func_233(Global_35, 0, 0, 0)) && !func_234(func_233(Global_35, 0, 1, 0)))
					{
						if (!func_227(&(uParam0->f_1053[2]), 0))
						{
							func_226(&(uParam0->f_1053[2]), 1, 1);
						}
						else if (func_235(&(uParam0->f_1053[2]), 1))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar5, true, 2, false))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar5, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
								func_226(&(uParam0->f_1053[2]), 0, 1);
							}
						}
					}
					else if (func_227(&(uParam0->f_1053[2]), 0))
					{
						func_226(&(uParam0->f_1053[2]), 0, 1);
					}
				}
				else if (func_227(&(uParam0->f_1053[2]), 1))
				{
					func_226(&(uParam0->f_1053[2]), 0, 1);
				}
			}
			else
			{
				func_221(uParam0);
			}
			break;
		
		case 2:
			func_221(uParam0);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_48) / ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_48)) < 0.85f)
			{
				return;
			}
			func_222(&(uParam0->f_41), 3);
			break;
		
		case 3:
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_48) / ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_48)) < 0.99f && AUDIO::_0x714A0EA7DE1167BE(func_52(uParam0->f_944), func_53()))
			{
				func_54(func_52(uParam0->f_944), func_53());
			}
			break;
	}
}

void func_62(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_81[iVar0])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_81[iVar0])) && !Global_1935630->f_12)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_81[iVar0]), true, false), true);
				if (fVar1 < 5f)
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_81[iVar0]), true, false) - ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					fVar5 = func_219(func_218(vVar2), func_218(ENTITY::GET_ENTITY_FORWARD_VECTOR(&(uParam0->f_81[iVar0]))));
					if (fVar5 < 0f)
					{
						func_236(uParam0->f_81[iVar0]);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_63(var uParam0)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<11> Var4;
	vector3 vVar15[24];
	float fVar18;
	struct<7> Var19;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	vector3 vVar35[24];
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_48))
	{
		return;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_48);
	bVar1 = ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_48, 0);
	func_237(uParam0, &Local_1155);
	if (Local_1155 >= 2 && Local_1155 <= 7)
	{
		func_238(&Local_1155);
	}
	if (bVar1)
	{
		func_239(uParam0);
	}
	switch (Local_1155)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				iVar3 = iVar2;
				if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_1155.f_2[iVar3])))
				{
					Var4 = { func_240(iVar3) };
					Local_1155.f_2[iVar3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var4.f_9, Var4, Var4.f_3, Var4.f_6, Var4.f_10);
				}
				iVar2++;
			}
			Global_1394141->f_1322 = 1;
			func_241(&Local_1155, 1);
			break;
		
		case 1:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(0)))
			{
				if (!func_142(uParam0->f_48, func_147(1), "IDLE 01"))
				{
					return;
				}
				if (fVar0 > 0.99f)
				{
					func_145(uParam0->f_48, func_147(1), "IDLE 01");
					Local_1155.f_51 = 1;
					func_241(&Local_1155, 2);
				}
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(1)))
			{
				func_7(&(Global_1394141->f_1326), 4);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(0));
				func_7(&(Local_1155.f_32), 1);
				func_241(&Local_1155, 3);
			}
			break;
		
		case 3:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(1)))
			{
				func_142(uParam0->f_48, func_147(2), "IDLE 02");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(5)))
				{
					func_145(uParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					func_241(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(2)))
				{
					func_145(uParam0->f_48, func_147(2), "IDLE 02");
					Local_1155.f_51 = 2;
					func_241(&Local_1155, 4);
				}
			}
			break;
		
		case 4:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(2)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(1));
				func_241(&Local_1155, 5);
			}
			break;
		
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(2)))
			{
				func_142(uParam0->f_48, func_147(3), "IDLE 03");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(5)))
				{
					func_145(uParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					func_241(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(3)))
				{
					func_145(uParam0->f_48, func_147(3), "IDLE 03");
					Local_1155.f_51 = 3;
					func_241(&Local_1155, 6);
				}
			}
			break;
		
		case 6:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(3)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(2));
				func_241(&Local_1155, 7);
			}
			break;
		
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(3)))
			{
				func_142(uParam0->f_48, func_147(6), "CROWDCHALLENGE 01");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(5)))
				{
					func_7(&(Local_1155.f_32), 2);
					func_145(uParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					func_241(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.7f && func_2(Global_1394141->f_1326, 4))
				{
					func_3(&(Global_1394141->f_1326), 4);
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(6)))
				{
					Global_1394141->f_1334 = 1;
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "CrowdMember", &(uParam0->f_81[1]), 0);
					func_145(uParam0->f_48, func_147(6), "CROWDCHALLENGE 01");
					if (func_224(Local_1155.f_23))
					{
						func_243(&(Local_1155.f_23), 1, 1);
					}
					Local_1155.f_51 = 6;
					func_241(&Local_1155, 9);
				}
			}
			break;
		
		case 9:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(6)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(3));
				func_241(&Local_1155, 18);
			}
			break;
		
		case 18:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(6)))
			{
				func_142(uParam0->f_48, func_147(7), "CROWDCHALLENGE0 2");
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(7)))
				{
					func_241(&Local_1155, 19);
				}
			}
			break;
		
		case 19:
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(5));
			func_7(&(Local_1155.f_32), 2);
			func_145(uParam0->f_48, func_147(7), "CROWDCHALLENGE 02");
			Local_1155.f_51 = 7;
			func_241(&Local_1155, 20);
			break;
		
		case 8:
			if (func_2(uParam0->f_16, 131072))
			{
				func_3(&(uParam0->f_16), 131072);
			}
			if (!func_2(uParam0->f_16, 262144))
			{
				func_7(&(uParam0->f_16), 262144);
			}
			if (!func_2(Global_1394141->f_1326, 1024))
			{
				func_7(&(Global_1394141->f_1326), 1024);
			}
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(5)))
			{
				func_7(&(Local_1155.f_32), 2);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(1)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(1));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(2)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(2));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(3)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(3));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(6)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(6));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_48, func_147(7)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_48, func_147(7));
				}
				if (Local_1155.f_21 && !ENTITY::IS_ENTITY_DEAD(&(uParam0->f_81[1])))
				{
					Local_1155.f_21 = 0;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uParam0->f_81[1]), 0, 1);
					func_244(&(uParam0->f_81[1]), -1426662425, 2547.751f, -1303.415f, 47.48392f, -175.57f, -1, 1, 0, 0, -1082130432);
				}
				if (fVar0 > 0.4f && !func_2(uParam0->f_16, 262144))
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), &(uParam0->f_81[0]), "SHOW_FLEXFIGHT", 2546.317f, -1309.955f, 48.21665f, 0, 0);
					func_7(&(Global_1394141->f_1326), 4);
					func_7(&(uParam0->f_16), 262144);
					func_3(&(uParam0->f_16), 131072);
				}
				if (!func_2(Local_1155.f_32, 4))
				{
					STREAMING::REQUEST_ANIM_DICT(func_245());
					func_7(&(Local_1155.f_32), 4);
				}
				else if ((((!func_2(Local_1155.f_32, 8) && fVar0 > 0.2f) && fVar0 < 0.8f) && STREAMING::HAS_ANIM_DICT_LOADED(func_245())) && func_246(Global_35, &(uParam0->f_81[0]), 1, 1) < 4f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_245(), func_247(), 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
					func_7(&(Local_1155.f_32), 8);
				}
				if (fVar0 > 0.99f)
				{
					Global_1394141->f_1331 = 1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uParam0->f_81[0]), 0, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(&(uParam0->f_81[0]), Global_35, 0, 0, 0, 1, 0);
					PED::_0x57F35552E771BE9D(&(uParam0->f_81[0]), 8);
					PED::_0xFC3DB99C8144CD81(&(uParam0->f_81[0]), &(Local_1155.f_2[3]), 0, 0, 0);
					PED::_0xFC3DB99C8144CD81(Global_35, &(Local_1155.f_2[3]), 0, 0, 0);
					PED::_0x57F35552E771BE9D(&(uParam0->f_81[0]), 12);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_81[0]), 1269650476);
					if (func_248(&Global_35))
					{
						Local_1155.f_20 = 1;
					}
					func_241(&Local_1155, 10);
				}
			}
			break;
		
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
			if (func_156())
			{
				StringCopy(&cVar15, "SHFF_PFIGHT_J", 24);
			}
			else
			{
				StringCopy(&cVar15, "SHFF_PFIGHT_A", 24);
			}
			if (func_4(Global_35, &(Local_1155.f_2[3]), 1, 0) && func_249(&(Local_22.f_954), cVar15, 0, -1, 0, 0))
			{
				func_250(1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 258, true);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, &(uParam0->f_81[0]), 0, 0, 0, 1, 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uParam0->f_81[0]), true, 300f);
				PED::_0xD77AE48611B7B10A(&(uParam0->f_81[0]), 2f);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
				func_251(&(uParam0->f_81[0]), 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(&(uParam0->f_81[0]), true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(&(uParam0->f_81[0]), joaat("weapon_unarmed"), true, 0, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_81[0]), 1269650476);
				ENTITY::SET_ENTITY_INVINCIBLE(&(uParam0->f_81[0]), true);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_81[0]), 169, true);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_81[0]), 258, true);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_81[0]), 249, true);
				AUDIO::STOP_PED_SPEAKING(&(uParam0->f_81[0]), true);
				func_41(&(Local_1155.f_10));
				func_241(&Local_1155, 17);
			}
			break;
		
		case 17:
			fVar18 = func_42(&(Local_1155.f_10));
			if (!func_2(Local_1155.f_32, 32) && AUDIO::LOAD_STREAM(func_252(), func_253()))
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2546.4f, -1314.04f, 50.25f, AUDIO::_0x0556C784FA056628(func_252(), func_253()));
				func_7(&(Local_1155.f_32), 32);
			}
			if ((((!func_254(1) && fVar18 > 2f) && func_4(Global_35, &(Local_1155.f_2[3]), 1, 0)) && !func_2(Local_1155.f_32, 16)) && func_255())
			{
				if (!Local_1155.f_22)
				{
					Var19 = { func_240(4) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Var19 = { func_240(5) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Var19 = { func_240(6) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Local_1155.f_22 = 1;
				}
				func_7(&(Local_1155.f_32), 16);
			}
			if (!func_2(Local_1155.f_32, 512) && fVar18 > 60f)
			{
				PED::_0xB8DE69D9473B7593(Global_35, 8);
				func_7(&(Local_1155.f_32), 512);
			}
			iVar30 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
			if (!func_2(Local_1155.f_32, 256))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight"))
				{
					func_41(&(Local_1155.f_16));
					func_7(&(Local_1155.f_32), 256);
				}
			}
			else if (PED::IS_PED_PERFORMING_MELEE_ACTION(&(uParam0->f_81[0]), 128, 0))
			{
				if (func_42(&(Local_1155.f_16)) > 4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Whistle", "Flex_Fight_Sounds", true, 0);
					func_41(&(Local_1155.f_16));
				}
			}
			else if (PED::IS_PED_PERFORMING_MELEE_ACTION(&(uParam0->f_81[0]), 64, 0))
			{
				if (func_42(&(Local_1155.f_16)) > 4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Horn", "Flex_Fight_Sounds", true, 0);
					func_41(&(Local_1155.f_16));
				}
			}
			if (iVar30 < 70 || fVar18 > 90f)
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), true);
				func_41(&(Local_1155.f_10));
				func_241(&Local_1155, 11);
			}
			break;
		
		case 11:
			func_43(&(Local_1155.f_10));
			func_41(&(Local_1155.f_13));
			func_7(&(Local_1155.f_32), 128);
			func_241(&Local_1155, 12);
			break;
		
		case 12:
			if (func_42(&(Local_1155.f_13)) > 4f && !func_2(Local_1155.f_32, 64))
			{
				PED::_0xC48AF420371C7407(&(uParam0->f_81[0]), -1157694922);
				func_41(&(Local_1155.f_13));
			}
			PED::SET_PED_RESET_FLAG(Global_35, 150, true);
			if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Global_35))
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_35);
				if (func_2(Local_1155.f_32, 128))
				{
					if (AUDIO::_0x4AD019591E94C064("Knockout_Scream", &(uParam0->f_81[0]), "Flex_Fight_Sounds", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Knockout_Scream", &(uParam0->f_81[0]), "Flex_Fight_Sounds", 0, 0, 0);
						func_3(&(Local_1155.f_32), 128);
					}
				}
				if (!func_2(Local_1155.f_32, 64))
				{
					func_41(&(Local_1155.f_10));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uParam0->f_81[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_7(&(Local_1155.f_32), 64);
				}
			}
			if (func_42(&(Local_1155.f_13)) > 5f && !func_2(Local_1155.f_32, 64))
			{
				func_41(&(Local_1155.f_10));
				func_241(&Local_1155, 11);
				return;
			}
			if (func_40(&(Local_1155.f_10)) && func_42(&(Local_1155.f_10)) > 2.5f)
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				func_43(&(Local_1155.f_10));
				PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
				PED::REMOVE_PED_DEFENSIVE_AREA(&(uParam0->f_81[0]), false);
				func_241(&Local_1155, 13);
			}
			break;
		
		case 13:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_2(Local_1155.f_32, 32) && AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_252(), func_253())))
				{
					AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_252(), func_253()));
					func_3(&(Local_1155.f_32), 32);
				}
				if (func_2(Local_1155.f_32, 512))
				{
					PED::_0x949B2F9ED2917F5D(Global_35, 8);
					func_3(&(Local_1155.f_32), 512);
				}
				if (!func_40(&(Local_1155.f_10)))
				{
					Global_1394141->f_1323 = 1;
					Global_1394141->f_1321 = 1;
					func_41(&(Local_1155.f_10));
				}
				else
				{
					if (func_258(Local_1155.f_29[1], func_256(1), func_257()))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
						if (Local_1155.f_20)
						{
							iVar31 = PED::_0x1F714E7A9DADFC42(Global_35);
							if (ENTITY::DOES_ENTITY_EXIST(iVar31))
							{
								ENTITY::SET_ENTITY_COORDS(iVar31, func_259(2), true, false, true, true);
							}
						}
					}
					if (func_42(&(Local_1155.f_10)) > 3f)
					{
						iVar32 = func_260();
						iVar33 = func_261(iVar32);
						if (iVar33 < 20)
						{
							iVar34 = (20 - iVar33);
							CLOCK::ADD_TO_CLOCK_TIME(iVar34, 0, 0);
						}
						func_262();
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_1155.f_29[1]), "player_zero", Global_35, 0);
						PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
						ANIMSCENE::START_ANIM_SCENE(&(Local_1155.f_29[1]));
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight");
						Global_1394141->f_1324 = 1;
						func_43(&(Local_1155.f_10));
						CAM::DO_SCREEN_FADE_IN(2000);
						func_241(&Local_1155, 14);
					}
				}
			}
			break;
		
		case 14:
			if (func_2(Global_1394141->f_1326, 1024))
			{
				func_3(&(Global_1394141->f_1326), 1024);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_241(&Local_1155, 15);
			}
			break;
		
		case 15:
			if (func_156())
			{
				StringCopy(&cVar35, "SHFF_KNOCKOUT_J", 24);
			}
			else
			{
				StringCopy(&cVar35, "SHFF_KNOCKOUT_A", 24);
			}
			func_249(&(Local_22.f_954), cVar35, 0, -1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			func_7(&(Global_1394141->f_1325), 32);
			func_3(&(Global_1394141->f_1326), 4);
			func_7(&(Local_22.f_16), 8388608);
			func_241(&Local_1155, 16);
			break;
		
		case 16:
			if (ANIMSCENE::_0x25557E324489393C(&(Local_1155.f_29[1])))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(&(Local_1155.f_29[1]), "player_zero") || ANIMSCENE::_0xD8254CB2C586412B(&(Local_1155.f_29[1]), 0))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					}
					PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					func_241(&Local_1155, 21);
				}
			}
			break;
		
		case 20:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, func_147(7)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_81[1])))
				{
					PED::SET_PED_RESET_FLAG(&(uParam0->f_81[1]), 261, true);
				}
				if (fVar0 > 0.87f)
				{
					Global_1394141->f_1321 = 1;
					if (!uParam0->f_14)
					{
						func_7(&(Global_1394141->f_1325), 4);
						func_7(&(Global_1394141->f_1325), 8192);
					}
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(uParam0->f_81[1]), -1f);
					func_7(&(Local_22.f_16), 8388608);
					func_241(&Local_1155, 21);
				}
			}
			break;
		
		case 21:
			break;
	}
}

float func_64()
{
	return 0.95f;
}

int func_65(var uParam0)
{
	if (!func_2(uParam0->f_16, 2097152))
	{
		if (GRAPHICS::GET_TV_CHANNEL() == 0)
		{
			if (!func_40(&(uParam0->f_29)))
			{
				func_41(&(uParam0->f_29));
			}
			else if (func_42(&(uParam0->f_29)) > 5f)
			{
				func_43(&(uParam0->f_29));
				func_7(&(uParam0->f_16), 2097152);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	if (iParam0->f_1071)
	{
		if (!bParam1)
		{
			GRAPHICS::_0x32DE2BFFDA43E62A();
		}
		HUD::SET_TEXT_RENDER_ID(iParam0->f_1074);
		GRAPHICS::DRAW_TV_CHANNEL(iParam0->f_1093, iParam0->f_1094, iParam0->f_1091, iParam0->f_1092, 0f, 255, 255, 255, 128);
	}
}

int func_67()
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return 1;
	}
	if (GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(-1302053960))
	{
		return 1;
	}
	return 0;
}

struct<2> func_68(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

void func_69(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_70(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_4))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
		}
		CAM::DESTROY_CAM(iParam0->f_4, false);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	func_3(&(Global_1394141->f_1326), 512);
	if (func_224(&(iParam0->f_1053[3])))
	{
		func_243(iParam0->f_1053[3], 1, 1);
	}
}

void func_71(var uParam0)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1088, false);
	}
	if (uParam0->f_1072)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(uParam0->f_1089, 0f);
			OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, 0);
		}
	}
	if (AUDIO::IS_STREAM_PLAYING(uParam0->f_1100))
	{
		AUDIO::STOP_STREAM(uParam0->f_1100);
	}
}

void func_72(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_4(Global_35, &(iParam0->f_35[0]), 1, 0))
	{
		bVar0 = true;
	}
	if (iParam0->f_1 == 2)
	{
		if (Global_36.f_2 > 51.8f)
		{
			bVar0 = true;
		}
	}
	switch (iParam0->f_3)
	{
		case 0:
			if (bVar0)
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_263(iParam0->f_1, 0), func_264(iParam0->f_1, 0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				func_265(&(iParam0->f_3), 1);
			}
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				if (!func_40(&(iParam0->f_5)))
				{
					func_41(&(iParam0->f_5));
					return;
				}
				else if (func_47(&(iParam0->f_5)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_40(&(iParam0->f_5)))
				{
					func_43(&(iParam0->f_5));
				}
				if (func_224(&(iParam0->f_1053[3])))
				{
					func_243(iParam0->f_1053[3], 1, 1);
				}
				return;
			}
			if (!func_224(&(iParam0->f_1053[3])))
			{
				iParam0->f_1053[3] = func_266("INTERACT_LOOK", -416594956, 6, 570, 570, 10, 1073741824, 0, 1065353216, 0, 1, 1704213876, 0);
				func_267(&(iParam0->f_1053[3]), 13, 1, 1);
			}
			else if (func_268(&(iParam0->f_1053[3]), 1))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					if (!CAM::IS_CAM_RENDERING(iParam0->f_4))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_4, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_243(iParam0->f_1053[3], 1, 1);
						func_7(&(Global_1394141->f_1326), 512);
						func_265(&(iParam0->f_3), 2);
					}
				}
			}
			break;
		
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				func_265(&(iParam0->f_3), 3);
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_3(&(Global_1394141->f_1326), 512);
				func_43(&(iParam0->f_5));
				func_265(&(iParam0->f_3), 4);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, -1496944061))
			{
				iParam0->f_8++;
				if (iParam0->f_8 > 2)
				{
					iParam0->f_8 = 0;
				}
				CAM::SET_CAM_COORD(iParam0->f_4, func_263(iParam0->f_1, iParam0->f_8));
				CAM::SET_CAM_ROT(iParam0->f_4, func_264(iParam0->f_1, iParam0->f_8), 2);
			}
			if (func_8(iParam0) == 10 || !bVar0)
			{
				func_265(&(iParam0->f_3), 5);
			}
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				func_265(&(iParam0->f_3), 1);
			}
			break;
		
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			if (!bVar0)
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4) && CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				if (func_224(&(iParam0->f_1053[3])))
				{
					func_243(iParam0->f_1053[3], 1, 1);
				}
				func_265(&(iParam0->f_3), 0);
			}
			else if (CAM::DOES_CAM_EXIST(iParam0->f_4))
			{
				if (CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				else
				{
					CAM::DESTROY_CAM(iParam0->f_4, false);
					if (func_224(&(iParam0->f_1053[3])))
					{
						func_243(iParam0->f_1053[3], 1, 1);
					}
					func_265(&(iParam0->f_3), 6);
				}
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			func_3(&(Global_1394141->f_1326), 512);
			break;
		
		case 6:
			break;
	}
}

void func_73(char* sParam0, char* sParam1)
{
	AUDIO::_0x0F2A2175734926D8(sParam0, sParam1);
}

void func_74(int iParam0)
{
	switch (Local_22.f_1)
	{
		case 0:
			if (!func_40(&(iParam0->f_941)))
			{
				func_41(&(iParam0->f_941));
			}
			if (func_2(iParam0->f_16, 33554432))
			{
				func_78(&(iParam0->f_349), (Global_1394141->f_7[*iParam0 /*31*/])->f_4);
				return;
			}
			if (func_2(iParam0->f_16, 65536))
			{
				func_269(&(iParam0->f_349));
				func_3(&(iParam0->f_16), 65536);
				func_7(&(iParam0->f_16), 8192);
				func_7(&(iParam0->f_16), 16384);
				func_7(&(iParam0->f_16), 32768);
			}
			else if (!func_2(iParam0->f_16, 8192))
			{
				func_270(&(iParam0->f_349), 54, 64);
				func_7(&(iParam0->f_16), 8192);
			}
			else if (!func_2(iParam0->f_16, 16384))
			{
				if (func_42(&(iParam0->f_941)) > 12f)
				{
					func_270(&(iParam0->f_349), 15, 26);
					func_270(&(iParam0->f_349), 40, 52);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), 16384);
				}
			}
			else if (!func_2(iParam0->f_16, 32768))
			{
				if (func_42(&(iParam0->f_941)) > 12f)
				{
					func_270(&(iParam0->f_349), 0, 13);
					func_270(&(iParam0->f_349), 27, 39);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), 32768);
				}
			}
			break;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam0->f_1053)
	{
		if (func_224(&(iParam0->f_1053[iVar0])))
		{
			func_243(iParam0->f_1053[iVar0], 1, 1);
		}
		iVar0++;
	}
}

Vector3 func_76(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -779.4891f, -1362.618f, 45.14579f;
		
		case 1:
		case 2:
			return 2696.776f, -1353.734f, 48.56572f;
		
		case 0:
			return 2546.481f, -1299.015f, 48.74436f;
		
		case 3:
			return -348.3176f, 698.5706f, 117.706f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_77(var uParam0)
{
	int iVar0;
	
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar0])))
		{
			OBJECT::DELETE_OBJECT(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		PED::DELETE_PED(&(uParam0->f_2));
	}
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1 /*10*/]))
		{
			if (!func_4(uParam0[iVar1 /*10*/], iParam1, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam0)[iVar1 /*10*/]);
			}
			else
			{
				PED::DELETE_PED((*uParam0)[iVar1 /*10*/]);
			}
		}
		iVar1++;
	}
}

void func_79(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_35[iVar1])))
		{
			VOLUME::_0x43F867EF5C463A53(&(uParam0->f_35[iVar1]));
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		if (func_271() == 76)
		{
			if (func_272())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_273(iVar1) && !func_274(iVar1))
			{
				func_275(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_81(int iParam0)
{
	if (func_276(iParam0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(func_214(iParam0));
	}
}

void func_82()
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
	INVENTORY::_0xD5D72F1624F3BA7C(func_93(0));
	func_3(&(Global_1394141->f_1326), 1);
	func_3(&(Global_1394141->f_1326), 2);
	func_3(&(Global_1394141->f_1326), 4);
	func_3(&(Global_1394141->f_1326), 64);
	func_3(&(Global_1394141->f_1326), 512);
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_277(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_278(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_85(var uParam0)
{
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (uParam0->f_1071)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_1089));
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(uParam0->f_1075))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(uParam0->f_1075);
		}
		uParam0->f_1071 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1088));
	}
}

void func_86(var uParam0)
{
	int iVar0;
	
	func_279();
	PED::SET_PED_CONFIG_FLAG(Global_35, 21, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_1155.f_2[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_1155.f_2[iVar0]));
		}
		iVar0++;
	}
	if (PED::_0xB346C85D49CC998E(Global_35, 8))
	{
		PED::_0x949B2F9ED2917F5D(Global_35, 8);
	}
	func_3(&(uParam0->f_16), 1024);
	func_262();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	func_3(&(Global_1394141->f_1326), 1024);
	if (ANIMSCENE::_0x25557E324489393C(&(Local_1155.f_29[0])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_1155.f_29[0]));
	}
	Global_1394141->f_1331 = 0;
	PED::_0x7D4E70A67A651C71(1);
}

void func_87(var uParam0)
{
	func_280(uParam0);
	func_280(&(uParam0->f_31));
	func_280(&(uParam0->f_107));
	func_280(&(uParam0->f_118));
	Global_1394141->f_1325 = 0;
}

void func_88(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_89(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_90(var uParam0)
{
	uParam0->f_10 = 1;
}

void func_91(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_281(func_260(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		func_282(4);
	}
	func_282(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_93(bool bParam0)
{
	if (func_283() == -1)
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

void func_94(int iParam0)
{
	if (!iLocal_1)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, iParam0);
		iLocal_1 = 1;
	}
}

void func_95(int iParam0, bool bParam1)
{
	if (iLocal_1)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *iParam0);
		iLocal_1 = 0;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_96()
{
	if (!iLocal_0)
	{
		INVENTORY::_0xE3A46370F70F3607(func_93(0), 0);
		iLocal_0 = 1;
	}
}

void func_97()
{
	if (iLocal_0)
	{
		INVENTORY::_0xD5D72F1624F3BA7C(func_93(0));
		iLocal_0 = 0;
	}
}

int func_98()
{
	int iVar0;
	
	iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_TYPE(iVar0) == 1)
	{
		return 1;
	}
	return 0;
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		if (func_271() == 76)
		{
			if (func_284())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_278(iVar1))
			{
				func_285(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_101(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 2;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 4;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -842374052;
		
		case 1:
			return 2085190894;
		
		case 2:
			return 2085190894;
		
		case 3:
			return 0;
		
		case 4:
			return -1701282116;
	}
	return 0;
}

Vector3 func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.688f, -1306.052f, 49.97987f;
				
				case 1:
					return 2539.203f, -1306.098f, 49.9794f;
				
				case 2:
					return 2539.188f, -1291.61f, 49.97276f;
				
				case 3:
					return 2543.014f, -1290.244f, 49.95035f;
				
				case 4:
					return 2549.863f, -1290.254f, 50.00306f;
				
				case 5:
					return 2553.694f, -1291.636f, 49.96515f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.354f, -1347.851f, 48.38391f;
				
				case 1:
					return 2702.992f, -1353.339f, 48.37968f;
				
				default:
					break;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -777.252f, -1367.02f, 44.965f;
				
				case 1:
					return -780.828f, -1366.866f, 45.282f;
				
				case 2:
					return -777.252f, -1358.225f, 44.965f;
				
				case 3:
					return -780.85f, -1358.394f, 45.282f;
				
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_105(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1))
	{
		*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	uParam0->f_2 = 1f;
	return 1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 13;
		
		case 2:
			return 10;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1681397868;
		
		case 1:
			return 1663958773;
		
		case 2:
			return 1663958773;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.559f, -1306.926f, 48.30644f;
				
				case 1:
					return 2549.975f, -1306.784f, 48.30579f;
				
				case 2:
					return 2549.373f, -1306.661f, 48.27742f;
				
				case 3:
					return 2548.778f, -1306.565f, 48.3292f;
				
				case 4:
					return 2548.191f, -1306.501f, 48.33652f;
				
				case 5:
					return 2547.599f, -1306.461f, 48.33248f;
				
				case 6:
					return 2547.012f, -1306.439f, 48.3321f;
				
				case 7:
					return 2546.379f, -1306.432f, 48.32198f;
				
				case 8:
					return 2545.83f, -1306.439f, 48.32955f;
				
				case 9:
					return 2545.216f, -1306.474f, 48.32186f;
				
				case 10:
					return 2544.61f, -1306.53f, 48.32782f;
				
				case 11:
					return 2544.018f, -1306.617f, 48.31695f;
				
				case 12:
					return 2543.43f, -1306.736f, 48.32981f;
				
				case 13:
					return 2542.867f, -1306.884f, 48.33492f;
				
				case 14:
					return 2542.276f, -1307.063f, 48.32477f;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
				
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
				
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				
				default:
					break;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 2;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 2;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1292279125;
		
		case 1:
			return -280988606;
		
		case 2:
			return -280988606;
		
		case 3:
			return 0;
		
		case 4:
			return 1292279125;
	}
	return 0;
}

Vector3 func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.548f, 53.95758f;
				
				case 1:
					return 2544.289f, -1292.548f, 53.96331f;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
				
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2688.867f, -1354.651f, 53.697f;
				
				case 1:
					return 2694.49f, -1361.375f, 53.697f;
				
				default:
					break;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -783.34f, -1367.153f, 45.388f;
				
				case 1:
					return -783.939f, -1360.04f, 45.325f;
				
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -584148549;
				
				case 1:
					return 134813799;
				
				case 2:
					return 134813799;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			return -7413278;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	return 0;
}

Vector3 func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.694f, -1306.438f, 48.21665f;
				
				case 1:
					return 2551.421f, -1308.492f, 48.21665f;
				
				case 2:
					return 2541.836f, -1308.431f, 48.21665f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
				
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
				
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
				
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
				
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
				
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
				
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
				
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
				
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
				
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
				
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
				
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
				
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
				
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
				
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
				
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
				
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
				
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
				
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
				
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
				
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
				
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
				
				default:
					break;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 22;
		
		case 2:
			return 22;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
	}
	return 0;
}

float func_115(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	return fVar0;
}

float func_116(var uParam0)
{
	float fVar0;
	
	fVar0 = 5f;
	return fVar0;
}

int func_117(var uParam0)
{
	int iVar0;
	
	iVar0 = 10;
	return iVar0;
}

int func_118(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_286((*uParam0)[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return 1;
	}
	return 0;
}

float func_119(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

int func_120(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_287((*uParam0)[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return 1;
	}
	return 0;
}

float func_121(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	return fVar0;
}

float func_122(var uParam0)
{
	float fVar0;
	
	fVar0 = 5f;
	return fVar0;
}

float func_123(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

float func_124(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	return fVar0;
}

float func_125(var uParam0)
{
	float fVar0;
	
	fVar0 = 5f;
	return fVar0;
}

float func_126(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

float func_127(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	return fVar0;
}

float func_128(var uParam0)
{
	float fVar0;
	
	fVar0 = 3f;
	return fVar0;
}

int func_129(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_286(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return 1;
	}
	return 0;
}

float func_130(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

int func_131(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	
	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_287(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return 1;
	}
	return 0;
}

float func_132(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	return fVar0;
}

float func_133(var uParam0)
{
	float fVar0;
	
	fVar0 = 3f;
	return fVar0;
}

int func_134(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return 1;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_286((*uParam2)[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return 1;
	}
	return 0;
}

float func_135(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

int func_136(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return 1;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_287((*uParam2)[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return 1;
	}
	return 0;
}

float func_137(var uParam0)
{
	float fVar0;
	
	fVar0 = 0.3f;
	return fVar0;
}

float func_138(var uParam0)
{
	float fVar0;
	
	fVar0 = 5f;
	return fVar0;
}

float func_139(var uParam0)
{
	float fVar0;
	
	fVar0 = 1f;
	return fVar0;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		
		case 1:
			return "PBL_OPEN_SLOW";
		
		case 2:
			return "PBL_CLOSE_SLOW";
		
		case 3:
			return "PBL_IDLE_OPEN";
		
		default:
			break;
	}
	return "FAIL";
}

char* func_141()
{
	return "script@shows@curtains@curtains";
}

int func_142(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return 0;
	}
	return 1;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_144()
{
	return "CURTAIN";
}

void func_145(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
}

void func_146(int iParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, sParam1);
	}
}

char* func_147(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_FightIntro";
		
		case 1:
			return "pbl_Idle01";
		
		case 2:
			return "pbl_Idle02";
		
		case 3:
			return "pbl_Idle03";
		
		case 4:
			return "pbl_IdleBase";
		
		case 5:
			return "pbl_PlayerChallenge";
		
		case 6:
			return "pbl_CrowdChallenge_P1";
		
		case 7:
			return "pbl_CrowdChallenge_P2";
		
		default:
			break;
	}
	return "FAIL";
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_149()
{
	return Global_1310750->f_16037;
}

bool func_150(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_151(int iParam0, int iParam1)
{
	if (!func_150(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_152(int iParam0)
{
	if (!func_150(iParam0))
	{
		return 0;
	}
	if (func_58(64) && func_288(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_153(int iParam0)
{
	if (!func_150(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_154(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_150(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_289(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_155(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_156()
{
	if (func_283() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_157(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_290(uParam0, iParam1, sParam2))
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

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_STRONGWOMANFLEX_01";
		
		case 1:
			return "CROWD_STRONGWOMANFLEX_02";
		
		case 2:
			return "CROWD_STRONGWOMANFLEX_03";
		
		case 3:
			return "CROWD_STRONGWOMANFLEX_04";
		
		case 4:
			return "CROWD_STRONGWOMANFLEX_05";
		
		case 5:
			return "CROWD_STRONGWOMANFLEX_06";
		
		case 6:
			return "CROWD_STRONGWOMANFLEX_01";
		
		case 7:
			return "CROWD_STRONGWOMANFLEX_02";
		
		case 8:
			return "CROWD_STRONGWOMANFLEX_01";
		
		case 9:
			return "CROWD_STRONGWOMANFLEX_02";
		
		case 10:
			return "CROWD_STRONGWOMANFLEX_03";
		
		case 11:
			return "CROWD_STRONGWOMANFLEX_04";
		
		case 12:
			return "CROWD_STRONGWOMANFLEX_05";
		
		case 13:
			return "CROWD_STRONGWOMANFLEX_06";
		
		case 14:
			return "CROWD_STRONGWOMANFLEX_07";
		
		case 15:
			return "CROWD_STRONGWOMANFLEX_08";
		
		case 16:
			return "CROWD_STRONGWOMANFLEX_01";
		
		default:
			break;
	}
	return "";
}

char* func_159()
{
	return "script_shows@show_audience@ig_arthur_applause";
}

bool func_160(var uParam0)
{
	return PED::_0x5E420FF293EE5472();
}

int func_161(var uParam0)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	
	bVar0 = false;
	if (!func_40(&(uParam0->f_23)))
	{
		func_41(&(uParam0->f_23));
	}
	else if (func_42(&(uParam0->f_23)) > 10f)
	{
		bVar0 = true;
	}
	if (func_2(uParam0->f_17, 1))
	{
		sVar1 = func_55(*uParam0);
		sVar2 = func_56(*uParam0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1) || MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			bVar0 = true;
		}
		else if (AUDIO::LOAD_STREAM(sVar1, sVar2))
		{
			bVar0 = true;
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 0, 2548.749f, -1305.267f, 50.01453f);
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 1, 2543.801f, -1305.251f, 50.01453f);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_43(&(uParam0->f_23));
		return 1;
	}
	return 0;
}

int func_162(var uParam0, int iParam1, vector3 vParam2)
{
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

char* func_163()
{
	return "script@shows@curtains@curtains";
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		
		case 1:
			return "PBL_OPEN_SLOW";
		
		case 2:
			return "PBL_CLOSE_SLOW";
		
		case 3:
			return "PBL_IDLE_OPEN";
		
		default:
			break;
	}
	return "FAIL";
}

int func_165(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		func_3(uParam1, 1);
		return 1;
	}
	if (!func_2(*uParam1, 1) && !ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		func_7(uParam1, 1);
	}
	return 0;
}

int func_166(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return 0;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = func_291(iParam1);
	if (iVar2 != 41788943)
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = func_181(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1, 0, 0);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		if (!bVar0)
		{
			func_201(*uParam0, iVar2);
		}
		func_188(*uParam0, 0);
		return 1;
	}
	return 0;
}

int func_167(var uParam0)
{
	return 1;
}

void func_168(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_81[0])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_81[0]), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_66[0])))
	{
		uParam0->f_66[0] = OBJECT::CREATE_OBJECT(&(uParam0->f_58[0]), 2546.098f, -1310.338f, 48.2087f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_66[1])))
	{
		uParam0->f_66[1] = OBJECT::CREATE_OBJECT(&(uParam0->f_58[1]), 2541.685f, -1311.861f, 49.21665f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_66[2])))
	{
		uParam0->f_66[2] = OBJECT::CREATE_OBJECT(&(uParam0->f_58[2]), 2541.685f, -1311.961f, 49.21665f, true, true, false, false, true);
	}
	uParam0->f_12 = &uParam0->f_81[0];
}

void func_169(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_66[0])))
	{
		ENTITY::SET_ENTITY_HEADING(&(uParam0->f_66[0]), 3.76f);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "PERFORMER", &(uParam0->f_81[0]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "Stool", &(uParam0->f_66[0]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "Chair", &(uParam0->f_66[1]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "Chair^1", &(uParam0->f_66[2]), 0);
}

struct<11> func_170(int iParam0, int iParam1)
{
	struct<11> Var0;
	
	switch (iParam1)
	{
		case 1:
		case 2:
			switch (iParam0)
			{
				case 0:
					Var0 = { 2695.674f, -1354.701f, 48.474f };
					Var0.f_3 = { 0f, 0f, 42.536f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				
				case 1:
					Var0 = { 2694.922f, -1351.853f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				
				case 2:
					Var0 = { 2698.459f, -1355.921f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				
				case 3:
					Var0 = { 2686.465f, -1362.323f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00078f };
					Var0.f_6 = { 4.481431f, 8.317011f, 4.124079f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				
				case 4:
					Var0 = { 2695.047f, -1355.205f, 49.07318f };
					Var0.f_3 = { 0f, 0f, 39.99998f };
					Var0.f_6 = { 19.67865f, 9.058702f, 4.067907f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					Var0 = { -780.252f, -1362.48f, 45.687f };
					Var0.f_3 = { 0f, 0f, 0.496f };
					Var0.f_6 = { 11.467f, 8.9f, 8f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				
				case 1:
					Var0 = { -779.944f, -1359.784f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				
				case 2:
					Var0 = { -779.944f, -1365.717f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				
				case 3:
					Var0 = { -788.271f, -1362.526f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 6.064409f, 8.635888f, 3.77397f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				
				case 4:
					Var0 = { -778.6844f, -1362.457f, 45.677f };
					Var0.f_3 = { 0f, 0f, 0.496382f };
					Var0.f_6 = { 16f, 8.9f, 8f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					Var0 = { -347.867f, 697.444f, 117.8f };
					Var0.f_3 = { 0f, 0f, 39.038f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = -1612834106;
					break;
				
				case 1:
					Var0 = { -345.8821f, 697.2924f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 3.162789f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = -1612834106;
					break;
				
				case 2:
					Var0 = { -349.6249f, 696.3406f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 2.509765f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = -1612834106;
					break;
				
				case 3:
					Var0 = { -350.7378f, 705.5359f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 8.752253f, 6.118175f, 4.255467f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = -1612834106;
					break;
				
				case 4:
					Var0 = { -347.6639f, 696.6296f, 118.3223f };
					Var0.f_3 = { 0f, 0f, 15.66641f };
					Var0.f_6 = { 7.262365f, 9.866415f, 4.317828f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = -1612834106;
					break;
			}
			break;
	}
	return Var0;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return 1;
		
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return 0;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return 0;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return 0;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return 0;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return 0;
			}
			break;
	}
	return 1;
}

char* func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
		
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
		
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
		
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
		
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
		
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
		
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
		
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
		
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
		
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
		
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
		
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
		
		default:
			break;
	}
	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

char* func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_292(iParam1);
		
		case 0:
			return func_293(iParam1);
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

int func_174(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		uParam0->f_1 = 1;
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 56;
		
		case 1:
		case 2:
			return 22;
		
		case 3:
			return 10;
		
		case 4:
			return 23;
	}
	return 0;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7009108;
		
		case 1:
			return -7009108;
		
		case 3:
			return 99634802;
		
		case 4:
			return 10098011;
	}
	return -7009108;
}

int func_177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
				
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				
				case 17:
					return 1;
				
				case 18:
					return 1;
				
				case 20:
					return 2;
				
				case 31:
					return 2;
				
				case 32:
					return 2;
				
				case 39:
					return 2;
				
				case 53:
				case 54:
				case 55:
					return 2;
				
				default:
					break;
			}
			return 0;
		}

Vector3 func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.954f, -1303.652f, 47.51162f;
				
				case 1:
					return 2542.625f, -1303.628f, 47.50835f;
				
				case 2:
					return 2543.253f, -1303.504f, 47.51194f;
				
				case 3:
					return 2543.914f, -1303.447f, 47.50978f;
				
				case 4:
					return 2544.554f, -1303.35f, 47.51124f;
				
				case 5:
					return 2545.212f, -1303.286f, 47.48675f;
				
				case 6:
					return 2540.851f, -1302.391f, 47.83032f;
				
				case 7:
					return 2541.405f, -1302.162f, 47.83151f;
				
				case 8:
					return 2542.039f, -1301.995f, 47.83165f;
				
				case 9:
					return 2542.659f, -1301.895f, 47.83114f;
				
				case 10:
					return 2543.281f, -1301.785f, 47.83141f;
				
				case 11:
					return 2543.887f, -1301.719f, 47.8308f;
				
				case 12:
					return 2544.536f, -1301.635f, 47.831f;
				
				case 13:
					return 2545.165f, -1301.591f, 47.81311f;
				
				case 14:
					return 2540.816f, -1300.638f, 48.12306f;
				
				case 15:
					return 2541.43f, -1300.473f, 48.12244f;
				
				case 16:
					return 2542.034f, -1300.312f, 48.12096f;
				
				case 17:
					return 2542.644f, -1300.153f, 48.12228f;
				
				case 18:
					return 2543.269f, -1300.039f, 48.12248f;
				
				case 19:
					return 2543.896f, -1299.926f, 48.12423f;
				
				case 20:
					return 2545.169f, -1299.818f, 48.10023f;
				
				case 21:
					return 2540.844f, -1298.88f, 48.39516f;
				
				case 22:
					return 2541.442f, -1298.742f, 48.39409f;
				
				case 23:
					return 2542.07f, -1298.587f, 48.39284f;
				
				case 24:
					return 2543.302f, -1298.275f, 48.39411f;
				
				case 25:
					return 2543.898f, -1298.179f, 48.39465f;
				
				case 26:
					return 2544.536f, -1298.092f, 48.39633f;
				
				case 27:
					return 2550.958f, -1303.615f, 47.48922f;
				
				case 28:
					return 2550.302f, -1303.543f, 47.48922f;
				
				case 29:
					return 2549.651f, -1303.483f, 47.48394f;
				
				case 30:
					return 2549.005f, -1303.43f, 47.48394f;
				
				case 31:
					return 2548.356f, -1303.367f, 47.48394f;
				
				case 32:
					return 2547.713f, -1303.341f, 47.48394f;
				
				case 33:
					return 2552.097f, -1302.355f, 47.80622f;
				
				case 34:
					return 2551.509f, -1302.193f, 47.80622f;
				
				case 35:
					return 2550.899f, -1302.034f, 47.80622f;
				
				case 36:
					return 2550.298f, -1301.884f, 47.80622f;
				
				case 37:
					return 2549.661f, -1301.76f, 47.80622f;
				
				case 38:
					return 2549.037f, -1301.683f, 47.80622f;
				
				case 39:
					return 2548.413f, -1301.624f, 47.80622f;
				
				case 40:
					return 2552.122f, -1300.556f, 48.09521f;
				
				case 41:
					return 2551.499f, -1300.414f, 48.09521f;
				
				case 42:
					return 2550.871f, -1300.243f, 48.09521f;
				
				case 43:
					return 2550.255f, -1300.129f, 48.09521f;
				
				case 44:
					return 2549.635f, -1300.029f, 48.09521f;
				
				case 45:
					return 2549.016f, -1299.949f, 48.09521f;
				
				case 46:
					return 2552.115f, -1298.813f, 48.36841f;
				
				case 47:
					return 2551.499f, -1298.658f, 48.36841f;
				
				case 48:
					return 2550.254f, -1298.388f, 48.36841f;
				
				case 49:
					return 2549.629f, -1298.312f, 48.36841f;
				
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
				
				case 51:
					return 2548.368f, -1298.123f, 48.36841f;
				
				case 52:
					return 2547.733f, -1298.041f, 48.36841f;
				
				case 53:
					return 2553.102f, -1299.667f, 49.214f;
				
				case 54:
					return 2553.129f, -1302.399f, 49.214f;
				
				case 55:
					return 2539.789f, -1302.37f, 49.214f;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.7693f, 116.8875f;
				
				case 1:
					return -348.4168f, 693.9259f, 116.8925f;
				
				case 2:
					return -345.9169f, 694.5858f, 116.8741f;
				
				case 3:
					return -344.2555f, 695.0604f, 116.876f;
				
				case 4:
					return -349.5025f, 695.6313f, 117.0018f;
				
				case 5:
					return -345.2958f, 696.7811f, 117.0189f;
				
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
				
				case 7:
					return -346.918f, 698.2223f, 117.1139f;
				
				case 8:
					return -345.2069f, 698.744f, 117.1184f;
				
				case 9:
					return -350.4303f, 699.0625f, 117.1308f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.17f, -1354.493f, 47.77215f;
				
				case 1:
					return 2700.708f, -1354.073f, 47.77014f;
				
				case 2:
					return 2700.242f, -1353.635f, 47.76572f;
				
				case 3:
					return 2699.766f, -1353.23f, 47.74422f;
				
				case 4:
					return 2697.559f, -1350.386f, 47.76871f;
				
				case 5:
					return 2697.222f, -1349.843f, 47.76798f;
				
				case 6:
					return 2696.885f, -1349.309f, 47.76988f;
				
				case 7:
					return 2699.731f, -1355.699f, 47.94025f;
				
				case 8:
					return 2699.25f, -1355.287f, 47.93497f;
				
				case 9:
					return 2698.764f, -1354.877f, 47.93819f;
				
				case 10:
					return 2695.774f, -1351.042f, 47.93525f;
				
				case 11:
					return 2695.439f, -1350.499f, 47.93626f;
				
				case 12:
					return 2698.316f, -1356.914f, 48.10247f;
				
				case 13:
					return 2697.834f, -1356.48f, 48.09552f;
				
				case 14:
					return 2694.688f, -1352.778f, 48.10484f;
				
				case 15:
					return 2694.39f, -1352.196f, 48.09603f;
				
				case 16:
					return 2694.055f, -1351.671f, 48.0974f;
				
				case 17:
					return 2696.514f, -1357.575f, 48.25399f;
				
				case 18:
					return 2696.022f, -1357.168f, 48.25772f;
				
				case 19:
					return 2695.554f, -1356.731f, 48.23498f;
				
				case 20:
					return 2693.692f, -1354.44f, 48.26648f;
				
				case 21:
					return 2693.319f, -1353.92f, 48.26515f;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.928f, 43.26698f;
				
				case 1:
					return -776.1156f, -1365.257f, 43.26892f;
				
				case 2:
					return -776.1213f, -1364.023f, 43.26947f;
				
				case 3:
					return -776.0749f, -1361.318f, 43.29291f;
				
				case 4:
					return -776.0781f, -1360.655f, 43.26656f;
				
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
				
				case 6:
					return -777.7452f, -1365.929f, 43.43242f;
				
				case 7:
					return -778.02f, -1365.272f, 43.45926f;
				
				case 8:
					return -777.9575f, -1361.315f, 43.4812f;
				
				case 9:
					return -777.9938f, -1360.662f, 43.45993f;
				
				case 10:
					return -777.9775f, -1360f, 43.45834f;
				
				case 11:
					return -779.8451f, -1365.909f, 43.6443f;
				
				case 12:
					return -779.8615f, -1365.263f, 43.64589f;
				
				case 13:
					return -779.8595f, -1364.639f, 43.64569f;
				
				case 14:
					return -779.835f, -1361.3f, 43.67118f;
				
				case 15:
					return -779.8181f, -1360.642f, 43.64128f;
				
				case 16:
					return -781.7369f, -1365.253f, 43.83224f;
				
				case 17:
					return -781.7541f, -1364.628f, 43.83392f;
				
				case 18:
					return -781.7646f, -1364f, 43.83494f;
				
				case 19:
					return -781.7217f, -1360.638f, 43.83135f;
				
				case 20:
					return -781.7209f, -1359.973f, 43.83129f;
				
				case 21:
					return -781.7397f, -1359.346f, 43.83311f;
				
				case 22:
					return -781.7122f, -1358.722f, 43.83042f;
				
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				
				case 1:
					return 194.54f;
				
				case 2:
					return 185.02f;
				
				case 3:
					return 185.67f;
				
				case 4:
					return 186.48f;
				
				case 5:
					return 189.64f;
				
				case 6:
					return 194.87f;
				
				case 7:
					return 197.45f;
				
				case 8:
					return 192.94f;
				
				case 9:
					return 190.4f;
				
				case 10:
					return 187.74f;
				
				case 11:
					return 188.21f;
				
				case 12:
					return 191.46f;
				
				case 13:
					return 187.8f;
				
				case 14:
					return 197.77f;
				
				case 15:
					return 197.28f;
				
				case 16:
					return 195.7f;
				
				case 17:
					return 194.38f;
				
				case 18:
					return 189.91f;
				
				case 19:
					return 187.19f;
				
				case 20:
					return 183.35f;
				
				case 21:
					return 195.68f;
				
				case 22:
					return 195.08f;
				
				case 23:
					return 197.6f;
				
				case 24:
					return 192.22f;
				
				case 25:
					return 187.31f;
				
				case 26:
					return 186.63f;
				
				case 27:
					return 174.21f;
				
				case 28:
					return 175.4f;
				
				case 29:
					return 177.33f;
				
				case 30:
					return 177.62f;
				
				case 31:
					return 175.4f;
				
				case 32:
					return 176.59f;
				
				case 33:
					return 165.32f;
				
				case 34:
					return 170.16f;
				
				case 35:
					return 170.37f;
				
				case 36:
					return 174.13f;
				
				case 37:
					return 175.59f;
				
				case 38:
					return 173.64f;
				
				case 39:
					return 178.62f;
				
				case 40:
					return 169.96f;
				
				case 41:
					return 171.41f;
				
				case 42:
					return 170.19f;
				
				case 43:
					return 171.15f;
				
				case 44:
					return 174.93f;
				
				case 45:
					return 177.61f;
				
				case 46:
					return 169.6f;
				
				case 47:
					return 171.53f;
				
				case 48:
					return 172.77f;
				
				case 49:
					return 174.2f;
				
				case 50:
					return 175.33f;
				
				case 51:
					return 175.1f;
				
				case 52:
					return 176.09f;
				
				case 53:
					return 152.8307f;
				
				case 54:
					return 152.8307f;
				
				case 55:
					return 190.6648f;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164f;
				
				case 1:
					return -164f;
				
				case 2:
					return -164f;
				
				case 3:
					return -164f;
				
				case 4:
					return -164f;
				
				case 5:
					return -164f;
				
				case 6:
					return -164f;
				
				case 7:
					return -164f;
				
				case 8:
					return -164f;
				
				case 9:
					return -164f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				
				case 1:
					return -39.69f;
				
				case 2:
					return -39.97f;
				
				case 3:
					return -39.02f;
				
				case 4:
					return -52.61f;
				
				case 5:
					return -55.28f;
				
				case 6:
					return -56.79f;
				
				case 7:
					return -39.3f;
				
				case 8:
					return -38.34f;
				
				case 9:
					return -39.92f;
				
				case 10:
					return -57.96f;
				
				case 11:
					return -56.65f;
				
				case 12:
					return -38.24f;
				
				case 13:
					return -39.76f;
				
				case 14:
					return -56.13f;
				
				case 15:
					return -58.55f;
				
				case 16:
					return -54.07f;
				
				case 17:
					return -40.84f;
				
				case 18:
					return -40.21f;
				
				case 19:
					return -44.17f;
				
				case 20:
					return -52.32f;
				
				case 21:
					return -54.76f;
				
				default:
					break;
			}
			break;
		
		case 4:
			return -88.69f;
	}
	return -175.57f;
}

int func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
				
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 1;
				
				case 17:
					return 2;
				
				case 18:
					return 2;
				
				case 20:
				case 31:
					return 1;
				
				case 32:
					return 1;
				
				case 39:
					return 1;
				
				case 53:
				case 54:
				case 55:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 3:
			break;
	}
	return 0;
}

int func_181(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_294(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_182(var uParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	
	if (func_295(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_295(iParam1))
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_22[iVar0])))
			{
				Var1 = { func_296(iParam1, iVar0) };
				uParam0->f_22[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_9, Var1, Var1.f_3, Var1.f_6, Var1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_295(iParam1))
		{
			if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_22[iVar0])))
			{
				PED::_0x4C39C95AE5DB1329(&(uParam0->f_22[iVar0]), false, 2);
			}
			iVar0++;
		}
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_184(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						
						case 2:
							return "Male5";
						
						case 3:
							return "Male1";
						
						case 4:
							return "Male3";
						
						case 5:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						
						case 1:
							return "Male5";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male3";
						
						case 12:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						
						case 4:
							return "Male5";
						
						case 8:
							return "Male3";
						
						case 9:
							return "Male0";
						
						case 10:
							return "Male1";
						
						default:
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male2";
						
						default:
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male2";
						
						case 17:
							return "Male3";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						
						case 10:
							return "Male3";
						
						case 11:
							return "Male1";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male3";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male3";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male1";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male3";
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						
						case 2:
							return "Male5";
						
						case 3:
							return "Male1";
						
						case 4:
							return "Male3";
						
						case 5:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						
						case 1:
							return "Male5";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male3";
						
						case 12:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						
						case 4:
							return "Male5";
						
						case 8:
							return "Male3";
						
						case 9:
							return "Male0";
						
						case 10:
							return "Male1";
						
						default:
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male2";
						
						default:
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						
						case 10:
							return "Male1";
						
						case 11:
							return "Male2";
						
						case 17:
							return "Male3";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						
						case 10:
							return "Male3";
						
						case 11:
							return "Male1";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male3";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male3";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male0";
						
						default:
							break;
					}
					break;
				
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						
						case 10:
							return "Male2";
						
						case 11:
							return "Male1";
						
						case 17:
							return "Female1";
						
						case 18:
							return "Female";
						
						case 20:
							return "Male3";
						
						default:
							break;
					}
					break;
			}
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 3:
			return 1;
		
		case 1:
		case 2:
			return 1;
		
		case 4:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_186(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, -1426662425, func_178(iParam1, uParam0->f_2), func_179(iParam1, uParam0->f_2), -1, 0, 1, 0, 0.25f, 0);
	}
}

void func_187(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, uParam0->f_2) };
		fVar4 = func_179(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_297(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = func_298(uParam0->f_5);
		uParam0->f_8 = func_299(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_300(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_300(), 2, 0, 0);
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_301(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_190(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_192() - fParam1);
	func_302(uParam0, 1);
	func_303(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_191(var uParam0)
{
	return func_189(*uParam0, 2);
}

float func_192()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return 1;
	}
	return 0;
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_195()
{
	return 594254304;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1647947738;
		
		default:
			break;
	}
	return 1647947738;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		
		default:
			break;
	}
	return 0;
}

Vector3 func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2693.964f, -1356.467f, 50.81907f;
		
		case 2:
			return 2688.162f, -1362.869f, 54.23667f;
		
		case 0:
			return 0f, 0f, 0f;
		
		case 4:
			return -782.7046f, -1364.543f, 46.42249f;
		
		case 3:
			return -350.1178f, 702.2504f, 117.7055f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -52.52f;
		
		case 2:
			return 16.48f;
		
		case 0:
			return 0f;
		
		case 4:
			return -20f;
		
		case 3:
			return -164.26f;
		
		default:
			break;
	}
	return 0f;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2124438728;
		
		default:
			break;
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_304(iParam0, iParam1))
		{
			if (func_305(iParam0, iParam1))
			{
				if (func_306(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_307(iParam0);
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

Vector3 func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -349.8668f, 701.5555f, 118.5235f;
		
		case 1:
			return -349.7668f, 701.5555f, 118.5235f;
		
		case 2:
			return -349.5668f, 701.5555f, 118.5235f;
		
		case 3:
			return -349.9668f, 701.3555f, 118.5235f;
		
		case 4:
			return -349.7668f, 701.3555f, 118.5235f;
		
		default:
			break;
	}
	return -349.8668f, 701.5555f, 118.5235f;
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "script@shows@magic_lantern@ig2_projectionist@thebear";
		
		case 22:
		case 32:
			return "script@shows@magic_lantern@ig2_projectionist@legendofblackwater";
		
		case 23:
		case 33:
			return "script@shows@magic_lantern@ig2_projectionist@manflight";
		
		case 24:
		case 34:
			return "script@shows@magic_lantern@ig2_projectionist@saviorsandsavages";
		
		case 25:
		case 35:
			return "script@shows@magic_lantern@ig2_projectionist@ghastlyserenade";
	}
	return "script@shows@magic_lantern@ig2_projectionist@thebear";
}

char* func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				
				case 1:
					return "pl_action";
				
				case 2:
					return "PL_G_SitDown";
				
				default:
					break;
			}
			break;
		
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				
				case 1:
					return "PL_ACTION";
				
				case 2:
					return "PL_G_SitDown";
				
				default:
					break;
			}
			break;
		
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				
				case 1:
					return "PL_ACTION";
				
				case 2:
					return "PL_G_SitDown";
				
				default:
					break;
			}
			break;
		
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				
				case 1:
					return "PL_ACTION";
				
				case 2:
					return "PL_G_SitDown";
				
				default:
					break;
			}
			break;
		
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				
				case 1:
					return "PL_ACTION";
				
				case 2:
					return "PL_G_SitDown";
				
				default:
					break;
			}
			break;
	}
	return "[SHOW_PROJECTIONIST_GET_PLAYLIST] fail - no playlist";
}

Vector3 func_205(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return -350.055f, 701.392f, 117.679f;
		
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 2694.933f, -1356.293f, 50.879f;
	}
	return -350.055f, 701.392f, 117.679f;
}

Vector3 func_206(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0f, 0f, 30f;
		
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 7.1f, 0f, 145.6f;
	}
	return 0f, 0f, 30f;
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "PROJECTIONIST";
		
		case 22:
		case 32:
			return "PROJECTIONIST";
		
		case 23:
		case 33:
			return "PROJECTIONIST";
		
		case 24:
		case 34:
			return "PROJECTIONIST";
		
		case 25:
		case 35:
			return "PROJECTIONIST";
	}
	return "PROJECTIONIST";
}

char* func_208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				
				case 1:
					return "SLIDE1";
				
				case 2:
					return "SLIDE2";
				
				case 3:
					return "SLIDE3";
				
				case 4:
					return "SLIDE4";
				
				default:
					break;
			}
			break;
		
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				
				case 1:
					return "SLIDE1";
				
				case 2:
					return "SLIDE2";
				
				case 3:
					return "SLIDE3";
				
				case 4:
					return "SLIDE4";
				
				default:
					break;
			}
			break;
		
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				
				case 1:
					return "SLIDE1";
				
				case 2:
					return "SLIDE2";
				
				case 3:
					return "SLIDE3";
				
				case 4:
					return "SLIDE4";
				
				default:
					break;
			}
			break;
		
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				
				case 1:
					return "SLIDE1";
				
				case 2:
					return "SLIDE2";
				
				case 3:
					return "SLIDE3";
				
				case 4:
					return "SLIDE4";
				
				default:
					break;
			}
			break;
		
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				
				case 1:
					return "SLIDE1";
				
				case 2:
					return "SLIDE2";
				
				case 3:
					return "SLIDE3";
				
				case 4:
					return "SLIDE4";
				
				default:
					break;
			}
			break;
	}
	return "SLIDE0";
}

int func_209(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	var uVar1;
	
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	uVar1 = func_308(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_309(iVar0);
	return uVar1;
}

int func_210()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

char* func_211(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return "ML_Bear_Story_Soundset";
		
		case 22:
			return "ML_Blackwater_Soundset";
		
		case 23:
			return "ML_Man_Flight_Soundset";
		
		case 24:
			return "ML_See_The_World_Soundset";
		
		case 25:
			return "ML_Ghost_Story_Soundset";
		
		case 31:
			return "ML_Bear_Story_Soundset_Tent";
		
		case 32:
			return "ML_Blackwater_Soundset_Tent";
		
		case 33:
			return "ML_Man_Flight_Soundset_Tent";
		
		case 34:
			return "ML_See_The_World_Soundset_Tent";
		
		case 35:
			return "ML_Ghost_Story_Soundset_Tent";
		
		case 26:
		case 36:
			return "Cartoon_Direct_Current_Soundset";
		
		case 27:
		case 37:
			return "Cartoon_Farmers_Daughter_Soundset";
		
		case 28:
		case 38:
			return "Cartoon_Modern_Medicine_Soundset";
		
		case 29:
		case 39:
			return "Cartoon_Strongest_Man_Soundset";
		
		case 30:
		case 40:
			return "Cartoon_Sketching_For_Sweetheart_Soundset";
	}
	return "ERROR!";
}

void func_212()
{
	Global_40.f_9028.f_15++;
	Global_40.f_9028.f_13++;
}

void func_213()
{
	Global_40.f_9028.f_16++;
	Global_40.f_9028.f_13++;
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
		
		case 1:
		case 2:
			return "shows_sd_magic";
		
		case 3:
			return "shows_val_magic";
		
		case 4:
			return "shows_bla_movie";
		
		default:
			break;
	}
	return "shows_sd_vaudeville";
}

void func_215(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	
	uVar0 = func_14(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = func_175(iParam2);
	fVar2 = 0f;
	if (func_40(&(uParam0->f_8)))
	{
		fVar2 = func_42(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG(uParam1[iVar5 /*10*/], 153, true);
			if (Global_1394141->f_1334)
			{
				if (func_310(*uParam0, iVar5) && ((*uParam1)[iVar5 /*10*/])->f_1 != 5)
				{
					((*uParam1)[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (func_310(*uParam0, iVar5) && ((*uParam1)[iVar5 /*10*/])->f_1 == 5)
			{
				func_311(&(uParam0->f_11), 0);
				((*uParam1)[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 && func_312(iParam2))
			{
				if (!func_40(&(uParam0->f_8)))
				{
					func_7(&(uParam0->f_18), 1);
					func_7(&(uParam0->f_18), 8);
					func_41(&(uParam0->f_8));
				}
				else if (((*uParam1)[iVar5 /*10*/])->f_1 < 7)
				{
					if (func_313(iParam2, iVar5) >= 0f && fVar2 > func_313(iParam2, iVar5))
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !func_310(*uParam0, iVar5)) && ((*uParam1)[iVar5 /*10*/])->f_1 != 5)
			{
				if (((*uParam1)[iVar5 /*10*/])->f_9)
				{
					fVar6 = func_246(Global_35, uParam1[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2f || !func_314((*uParam1)[iVar5 /*10*/]))
					{
						((*uParam1)[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						((*uParam1)[iVar5 /*10*/])->f_5 = 2;
						func_315((*uParam1)[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && ((*uParam1)[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = func_246(Global_35, uParam1[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && func_314((*uParam1)[iVar5 /*10*/]))
					{
						((*uParam1)[iVar5 /*10*/])->f_5 = func_316(iVar5);
						func_315((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch (((*uParam1)[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				
				case 1:
					if (func_317(iParam2, iVar5))
					{
						func_319((*uParam1)[iVar5 /*10*/], func_318(iParam2), 500);
					}
					break;
				
				case 3:
					func_320((*uParam1)[iVar5 /*10*/], iParam2);
					((*uParam1)[iVar5 /*10*/])->f_1 = 4;
					break;
				
				case 4:
					bVar7 = false;
					if (((*uParam1)[iVar5 /*10*/])->f_6 == -1)
					{
						func_315((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam1[iVar5 /*10*/], ((*uParam1)[iVar5 /*10*/])->f_7, ((*uParam1)[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_0x627520389E288A73(uParam1[iVar5 /*10*/], ((*uParam1)[iVar5 /*10*/])->f_7, ((*uParam1)[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_315((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				
				case 5:
					if (!uParam0->f_19)
					{
						func_321(uParam0, (*uParam1)[iVar5 /*10*/]);
					}
					break;
				
				case 6:
					if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_12[1 /*2*/])))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG(uParam1[iVar5 /*10*/], 261, true);
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(&(uParam0->f_12[1 /*2*/]), func_184(1, iVar5, uParam0->f_17)) || ANIMSCENE::_0xD8254CB2C586412B(&(uParam0->f_12[1 /*2*/]), 0))
						{
							func_187((*uParam1)[iVar5 /*10*/], iParam2);
							((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam1[iVar5 /*10*/], &(uParam0->f_12[1 /*2*/])))
						{
							func_187((*uParam1)[iVar5 /*10*/], iParam2);
							((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam1[iVar5 /*10*/], -1426662425, func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, 0, 1, 0, 0.25f, 0);
					((*uParam1)[iVar5 /*10*/])->f_1 = 1;
					break;
				
				case 7:
					if (!func_2(uParam0->f_18, 4))
					{
						return;
					}
					if (func_297(iParam2, iVar5) == 0 && !func_185(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uParam1[iVar5 /*10*/], -1426662425, func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, 0, 1, 0, 0.25f, 0);
						PED::_0x2208438012482A1A(uParam1[iVar5 /*10*/], false, false);
						((*uParam1)[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST(uParam1[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1[iVar5 /*10*/], 0))
						{
							PED::_0x463803429297117C(uParam1[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], true);
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (func_313(iParam2, iVar5) + 2f))
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				
				case 9:
					if (func_276(iParam2))
					{
						if (func_2(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam1[iVar5 /*10*/], func_214(iParam2), 0, 10, -1, 0, 0, -1);
							((*uParam1)[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1[iVar5 /*10*/], func_322(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						PED::_0x2208438012482A1A(uParam1[iVar5 /*10*/], false, false);
						((*uParam1)[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				
				case 10:
					if ((uVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						((*uParam1)[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (func_276(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 658540077, 1) == 1)
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (func_313(iParam2, iVar5) + 3f))
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!func_323(ENTITY::GET_ENTITY_COORDS(uParam1[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 713668775, 1) != 1 && fVar2 > (func_313(iParam2, iVar5) + 3f))
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				
				case 11:
					if ((uVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						((*uParam1)[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_214(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_214(iParam2), ENTITY::GET_ENTITY_COORDS(uParam1[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 658540077, 1) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				
				case 12:
					PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam1[iVar5 /*10*/], Global_35, 3, 0, -1082130432, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
					((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					break;
				
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 713668775, 1) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

struct<21> func_216(int iParam0, int iParam1, int iParam2)
{
	struct<21> Var0;
	
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_10 = 4;
	Var0.f_15 = 4;
	Var0[0] = -1;
	Var0[1] = -1;
	Var0[2] = -1;
	Var0[3] = -1;
	Var0.f_5[0] = 0;
	Var0.f_5[1] = 0;
	Var0.f_5[2] = 0;
	Var0.f_5[3] = 0;
	Var0.f_10[0] = -1;
	Var0.f_10[1] = -1;
	Var0.f_10[2] = -1;
	Var0.f_10[3] = -1;
	Var0.f_15[0] = 0;
	Var0.f_15[1] = 0;
	Var0.f_15[2] = 0;
	Var0.f_15[3] = 0;
	Var0.f_20 = "";
	if (iParam2 == 49)
	{
		Var0.f_10[0] = 35;
	}
	if (iParam2 == 48)
	{
		Var0.f_10[0] = 2;
		Var0.f_15[0] = 100;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam2)
			{
				case 1:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "mc_set1_int_mc_appears";
					break;
				
				case 2:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 90;
					Var0.f_15[1] = 10;
					Var0.f_20 = "mc_set1_int_name_applause";
					break;
				
				case 3:
					Var0.f_20 = "mc_set1_int_ticket_price_applause";
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 5:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "mc_bulc_int_act_discovery";
					break;
				
				case 6:
					Var0[0] = 24;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				
				case 7:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_bulc_int_name_applause";
					break;
				
				case 8:
					Var0[0] = 21;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					Var0.f_20 = "mc_outro_pos_finishes";
					break;
				
				case 9:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					break;
				
				case 10:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					Var0.f_20 = "mc_outro_neg_applause";
					break;
				
				case 11:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				
				case 12:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_20 = "bullet_catch_initial_banter";
					break;
				
				case 14:
					Var0.f_20 = "bullet_catch_horrible_disease";
					break;
				
				case 15:
					Var0[0] = 22;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_gun_reveal";
					break;
				
				case 16:
					Var0[0] = 20;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_bedding_my_wife";
					break;
				
				case 17:
					Var0[0] = 24;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_20 = "bullet_catch_i_joke";
					break;
				
				case 18:
					Var0[0] = 23;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "bullet_catch_in_my_teeth";
					break;
				
				case 19:
					break;
				
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_15[0] = 100;
					break;
				
				case 21:
					Var0[0] = 19;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
				
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				
				case 24:
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				
				case 25:
					Var0[0] = 20;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_lets_do_that_again";
					break;
				
				case 26:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				
				case 27:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 28:
					Var0[0] = 19;
					Var0[1] = 24;
					Var0.f_5[0] = 60;
					Var0.f_5[1] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 29:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 30:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_player_volunteers";
					break;
				
				case 31:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_take_aim";
					break;
				
				case 32:
					Var0.f_20 = "bullet_catch_waiting_for_shot";
					break;
				
				case 33:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot";
					break;
				
				case 34:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
				
				case 35:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
				
				case 36:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					Var0.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
				
				case 37:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_20 = "bullet_catch_absolute_pillock";
					break;
				
				case 38:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				
				case 39:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				
				case 40:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				
				case 41:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
				
				case 42:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				
				case 43:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				
				case 44:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				
				case 45:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 2:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 3:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 6;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 19:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 70;
					break;
				
				case 21:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				
				case 22:
					Var0[0] = 23;
					Var0[1] = 20;
					Var0[2] = 16;
					Var0[3] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 30;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 23:
					Var0[0] = 25;
					Var0[1] = 23;
					Var0[2] = 16;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 50;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				
				case 24:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 16;
					Var0[3] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[1] = 10;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				
				case 25:
					Var0[0] = 17;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				
				case 26:
					Var0[0] = 31;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 3:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 14:
					Var0[0] = 24;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 16:
					Var0[0] = 24;
					Var0[1] = 16;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				
				case 5:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 30;
					break;
				
				case 13:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 14:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				
				case 16:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 11;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 50;
					Var0.f_15[3] = 10;
					break;
				
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 50;
					break;
				
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 5;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 19:
					Var0[0] = 17;
					Var0.f_5[0] = 60;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 60;
					break;
				
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 18:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 6:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 3:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 15:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 16:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					break;
				
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 19:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				
				case 20:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 21:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				
				case 22:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				
				case 25:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 17:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				
				case 5:
					break;
				
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 7:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 10;
					break;
				
				case 13:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 15:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 80;
					break;
				
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				
				case 20:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 15;
					Var0.f_15[1] = 85;
					break;
				
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 3:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 14:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 15:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				
				case 17:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 18:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 15;
					Var0.f_5[1] = 15;
					Var0.f_5[2] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 19:
					Var0[0] = 26;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 20:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		
		case 15:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					break;
				
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 13:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 5;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 60;
					break;
				
				case 14:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
				
				case 15:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 16:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 18:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 19:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				
				case 20:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 21:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 40;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 23:
					Var0[0] = 23;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				
				case 24:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 25:
					Var0[0] = 23;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				
				case 26:
					Var0[0] = 23;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				
				case 27:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				
				case 28:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 29:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 15;
					Var0.f_15[2] = 15;
					Var0.f_15[3] = 20;
					break;
			}
			break;
		
		case 11:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 60;
					break;
				
				case 4:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 70;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 13:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 14:
					break;
				
				case 15:
					Var0[0] = 19;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 16:
					Var0[0] = 24;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 19:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				
				case 20:
					Var0[0] = 20;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				
				case 21:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 9;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 30;
					break;
				
				case 22:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 10;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
				
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_5[3] = 25;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
				
				case 24:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 4:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				
				case 15:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 17:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 18:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				
				case 19:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				
				case 21:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 19;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 23:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 17:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				
				case 18:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 19:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				
				case 20:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				
				case 22:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 30;
					break;
				
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		
		case 19:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					break;
				
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				
				case 14:
					Var0[0] = 16;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 100;
					break;
				
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					break;
				
				case 3:
					Var0[0] = 16;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				
				case 14:
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 50;
					break;
				
				case 15:
					Var0[0] = 16;
					Var0[1] = 17;
					Var0.f_5[0] = 80;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 3:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				
				case 14:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				
				case 16:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				
				case 18:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 30;
					break;
				
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				
				case 20:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_15[3] = 10;
					break;
				
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				
				case 22:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				
				case 23:
					Var0[0] = 17;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 100;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 75;
							Var0.f_15[1] = 25;
							Var0.f_20 = "mc_set1_int_mc_appears";
							break;
						
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						
						case 8:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 50;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 90;
							Var0.f_15[1] = 10;
							Var0.f_20 = "mc_set1_int_name_applause";
							break;
						
						case 5:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						
						case 8:
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 0;
							Var0.f_10[2] = 8;
							Var0.f_15[0] = 60;
							Var0.f_15[1] = 30;
							Var0.f_15[2] = 10;
							break;
						
						case 17:
							Var0.f_10[0] = 4;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 8;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						
						case 13:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 20;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 10;
							Var0.f_15[3] = 20;
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 9:
							Var0.f_20 = "mc_set1_int_ticket_price_applause";
							break;
						
						case 5:
							Var0[0] = 24;
							Var0.f_5[0] = 40;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						
						case 8:
							Var0[0] = 16;
							Var0.f_5[0] = 20;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						
						case 17:
							Var0[0] = 24;
							Var0.f_5[0] = 30;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 9:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 2;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
						
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_10[2] = 3;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 40;
							Var0.f_15[2] = 20;
							break;
						
						case 8:
							break;
						
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 60;
							break;
						
						case 13:
							break;
					}
					break;
				
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 6:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 8:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 13:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 6;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 30;
					break;
				
				case 14:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 15:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				
				case 16:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				
				case 19:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 20:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 21:
					Var0[0] = 20;
					Var0[1] = 19;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 20;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				
				case 25:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				
				case 26:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				
				case 27:
					Var0[0] = 24;
					Var0[1] = 23;
					Var0[2] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 40;
					break;
				
				case 28:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				
				case 29:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
			}
			break;
	}
	return Var0;
}

void func_217(var uParam0, var uParam1, int iParam2, struct<16> Param3, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = func_175(iParam2);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = Param3.f_10;
	iVar7 = Param3;
	iVar2 = 0;
	while (iVar2 <= (iVar6 - 1))
	{
		iVar4 = (&Param3.f_15[iVar2] + iVar4);
		iVar2++;
	}
	func_41(&(uParam0->f_2));
	func_41(&(uParam0->f_5));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param3.f_20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(Param3.f_20);
	}
	if (&Param3[0] == -1 && &Param3.f_10[0] == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (((*uParam1)[iVar1 /*10*/])->f_1 == 6)
		{
		}
		else if (&Param3.f_10[0] == 35)
		{
			((*uParam1)[iVar1 /*10*/])->f_1 = 13;
		}
		else
		{
			if (&Param3[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar7 - 1))
				{
					iVar5 = (&Param3.f_5[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						((*uParam1)[iVar1 /*10*/])->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(100, 700);
						((*uParam1)[iVar1 /*10*/])->f_6 = &Param3[iVar2];
						Jump @290; //curOff = 266
					}
					else
					{
						((*uParam1)[iVar1 /*10*/])->f_6 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				((*uParam1)[iVar1 /*10*/])->f_6 = -1;
			}
			if (&Param3.f_10[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar6 - 1))
				{
					iVar5 = (&Param3.f_15[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						((*uParam1)[iVar1 /*10*/])->f_5 = &Param3.f_10[iVar2];
						Jump @397; //curOff = 373
					}
					else
					{
						((*uParam1)[iVar1 /*10*/])->f_5 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				((*uParam1)[iVar1 /*10*/])->f_5 = -1;
			}
			((*uParam1)[iVar1 /*10*/])->f_1 = 3;
		}
		iVar1++;
	}
}

Vector3 func_218(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

float func_219(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_220(var uParam0)
{
	struct<23> Var0;
	
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = *uParam0;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var0);
}

void func_221(var uParam0)
{
	if (func_224(&(uParam0->f_1053[1])))
	{
		func_243(uParam0->f_1053[1], 1, 1);
	}
	if (func_224(&(uParam0->f_1053[0])))
	{
		func_243(uParam0->f_1053[0], 1, 1);
	}
	if (func_224(&(uParam0->f_1053[2])))
	{
		func_243(uParam0->f_1053[2], 1, 1);
	}
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_223(var uParam0)
{
	return uParam0;
}

bool func_224(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_225(var uParam0, var uParam1)
{
	if (!func_4(Global_35, (Global_1394141->f_7[*uParam0 /*31*/])->f_4, 1, 0))
	{
		return 0;
	}
	if (!func_232(uParam0->f_1053[1], uParam1, "SHOW_POS_RESPONSE", -163964935))
	{
		return 0;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[func_324(&(uParam0->f_1053[1])) /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_12), 0);
	if (!func_232(uParam0->f_1053[0], uParam1, "SHOW_NEG_RESPONSE", 648122183))
	{
		return 0;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[func_324(&(uParam0->f_1053[0])) /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_12), 0);
	return 1;
}

void func_226(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_224(iParam0))
	{
		return;
	}
	iVar0 = func_324(iParam0);
	if (bParam1)
	{
		func_325(iParam0, 4);
		func_326(iVar0, 1);
		func_327(iVar0, 1);
	}
	else
	{
		func_328(iParam0, 4);
		func_327(iVar0, 0);
	}
}

bool func_227(int iParam0, int iParam1)
{
	if (iParam1 && !func_224(iParam0))
	{
		return false;
	}
	return !func_329(iParam0, 4);
}

int func_228(var uParam0)
{
	if (func_224(*uParam0))
	{
		if (func_235(*uParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	
	bVar0 = false;
	if ((func_40(&(uParam0->f_950)) && uParam0->f_18 < func_330(*uParam0)) && func_47(&(uParam0->f_950)) > 35000)
	{
		uParam0->f_18++;
		vVar1 = { func_331(*uParam0, 0, 1) };
		bVar0 = true;
	}
	else if (func_332(*uParam0) && !func_333(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_331(*uParam0, 2, 1) };
		}
		else
		{
			vVar1 = { func_331(*uParam0, 1, 1) };
		}
	}
	else
	{
		vVar1 = { func_331(*uParam0, 1, 1) };
	}
	if (func_334(uParam0))
	{
		vVar1 = { func_331(*uParam0, 3, 1) };
	}
	if (func_249(&(uParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		uParam0->f_1052++;
		func_335(uParam0);
		if (bVar0)
		{
			func_41(&(uParam0->f_950));
		}
		func_7(&(uParam0->f_16), 16);
		return 1;
	}
	return 0;
}

void func_230()
{
	bool bVar0;
	
	if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -2017877118, 1) == 1)
	{
		return;
	}
	bVar0 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || (func_333(36) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		TASK::TASK_PLAY_ANIM(Global_35, func_159(), func_336(1), 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(Global_35, func_159(), func_336(0), 8f, -8f, -1, 67108880, 0, 0, 1114114, 0, 0, 0);
	}
}

int func_231(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	
	bVar0 = false;
	if ((func_40(&(uParam0->f_950)) && uParam0->f_19 < func_330(*uParam0)) && func_47(&(uParam0->f_950)) > 35000)
	{
		uParam0->f_19++;
		vVar1 = { func_331(*uParam0, 0, 0) };
		bVar0 = true;
	}
	else if (func_332(*uParam0) && !func_333(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_331(*uParam0, 2, 0) };
		}
		else
		{
			vVar1 = { func_331(*uParam0, 1, 0) };
		}
	}
	else
	{
		vVar1 = { func_331(*uParam0, 1, 0) };
	}
	if (func_334(uParam0))
	{
		vVar1 = { func_331(*uParam0, 3, 0) };
	}
	if (func_249(&(uParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		uParam0->f_1052 = (uParam0->f_1052 - 1);
		func_337(uParam0);
		if (bVar0)
		{
			func_41(&(uParam0->f_950));
		}
		func_7(&(uParam0->f_16), 32);
		return 1;
	}
	return 0;
}

int func_232(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!func_224(*uParam0))
	{
		*uParam0 = func_338(sParam2, iParam3, *uParam1, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	}
	if (!func_224(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_234(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_224(iParam0))
	{
		return false;
	}
	iVar0 = func_324(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_236(var uParam0)
{
	struct<23> Var0;
	
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

void func_237(var uParam0, var uParam1)
{
	struct<14> Var0;
	
	if (func_2(uParam0->f_16, 8388608) && uParam1->f_27 != 5)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(uParam1->f_29[0]), "CS_GENSTORYMALE", uParam1->f_28);
		func_339(&(uParam1->f_27), 5);
		return;
	}
	switch (uParam1->f_27)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28))
			{
				uParam1->f_28 = func_340(1410422943, 2541.191f, -1313.071f, 48.21665f, 5f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_28))
			{
				return;
			}
			ENTITY::_0x203BEFFDBE12E96A(uParam1->f_28, func_259(3), -82.53f, 1, false, 1);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam1->f_28, &(uParam0->f_81[0]), -1, -1082130432, -1082130432, -1082130432);
			func_339(&(uParam1->f_27), 1);
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam1->f_28, -875674219, 1) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam1->f_28, &(uParam0->f_81[0]), -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_2(uParam1->f_32, 2) && func_258(uParam1->f_29[0], func_256(0), func_341(1)))
			{
				func_339(&(uParam1->f_27), 2);
			}
			break;
		
		case 2:
			func_339(&(uParam1->f_27), 3);
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28) && ANIMSCENE::_0x25557E324489393C(&(uParam1->f_29[0])))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam1->f_29[0]), "CS_GENSTORYMALE", uParam1->f_28, 0);
				ANIMSCENE::START_ANIM_SCENE(&(uParam1->f_29[0]));
				func_339(&(uParam1->f_27), 4);
			}
			break;
		
		case 4:
			PED::SET_PED_RESET_FLAG(uParam1->f_28, 261, true);
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_28) && !ENTITY::IS_ENTITY_DEAD(&(uParam0->f_81[0])))
			{
				Var0.f_4 = -1;
				Var0.f_8 = 2;
				Var0.f_9 = 1;
				Var0.f_10 = 1;
				Var0.f_11 = 1;
				Var0.f_13 = 1;
				Var0.f_14 = 2;
				Var0.f_15 = 2;
				Var0.f_16 = 3;
				Var0.f_19 = 3;
				Var0.f_20 = 1;
				Var0.f_21 = 3;
				Var0.f_22 = 3;
				Var0 = { 0f, 0f, 0f };
				Var0.f_3 = &uParam0->f_81[0];
				Var0.f_8 = 4;
				Var0.f_13 = 3;
				Var0.f_7 = 500;
				_NAMESPACE29::_0x66F9EB44342BB4C5(uParam1->f_28, &Var0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_238(int iParam0)
{
	if (!func_242(iParam0))
	{
		if (func_4(Global_35, &(iParam0->f_2[1]), 1, 0) || func_4(Global_35, &(iParam0->f_2[2]), 1, 0))
		{
			if (!func_224(iParam0->f_23))
			{
				iParam0->f_23 = func_338("SHOW_CLIMB_STAGE", -640622144, Global_35, 3, 1, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
			else if (func_227(iParam0->f_23, 0))
			{
				if (func_235(iParam0->f_23, 1))
				{
					func_226(iParam0->f_23, 0, 1);
				}
			}
			else if (!func_40(&(iParam0->f_24)))
			{
				func_41(&(iParam0->f_24));
			}
			else if (func_47(&(iParam0->f_24)) > 1000)
			{
				func_43(&(iParam0->f_24));
				func_226(iParam0->f_23, 1, 1);
			}
		}
		else if (func_224(iParam0->f_23))
		{
			func_243(&(iParam0->f_23), 1, 1);
		}
	}
	else if (func_224(iParam0->f_23))
	{
		func_243(&(iParam0->f_23), 1, 1);
	}
}

void func_239(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (Local_1155.f_51)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar1 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_81[0]), &(Local_1155.f_33[iVar1])))
				{
					if (iVar1 == 1)
					{
						func_7(&(Global_1394141->f_1326), 32768);
					}
					Global_1394141->f_1332 = func_342(iVar1);
				}
				iVar0++;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_81[0]), &(Local_1155.f_33[16])))
			{
				Global_1394141->f_1332 = func_342(16);
			}
			break;
		
		case 6:
			iVar0 = 6;
			while (iVar0 <= 7)
			{
				iVar2 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_81[0]), &(Local_1155.f_33[iVar2])))
				{
					Global_1394141->f_1332 = func_342(iVar2);
				}
				iVar0++;
			}
			break;
		
		case 7:
			iVar0 = 8;
			while (iVar0 <= 15)
			{
				iVar3 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_81[0]), &(Local_1155.f_33[iVar3])))
				{
					Global_1394141->f_1332 = func_342(iVar3);
				}
				iVar0++;
			}
			break;
	}
}

struct<11> func_240(int iParam0)
{
	struct<11> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 2546.475f, -1309.831f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.864185f, 8.153332f, 2.759625f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_SPOT_LIGHT";
			break;
		
		case 3:
			Var0 = { 2546.475f, -1310.829f, 49.40116f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.162113f, 6.099765f, 2.759625f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_STAGE_DEF";
			break;
		
		case 4:
			Var0 = { 2546.431f, -1306.998f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.692767f, 1.928913f, 2.759625f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_GRIEF_FALLOFF";
			break;
		
		case 5:
			Var0 = { 2551.059f, -1310.48f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.933598f, 7.487292f, 2.759625f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_GRIEF_LEFT";
			break;
		
		case 6:
			Var0 = { 2541.771f, -1310.48f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.933598f, 7.487292f, 2.759625f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_GRIEF_RIGHT";
			break;
		
		case 1:
			Var0 = { 2548.703f, -1306.556f, 47.42129f };
			Var0.f_3 = { 0f, 0f, -7.459703f };
			Var0.f_6 = { 5.03515f, 2.04412f, 3.505667f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_JUMP_01";
			break;
		
		case 2:
			Var0 = { 2543.718f, -1306.499f, 47.95617f };
			Var0.f_3 = { 0f, 0f, 6.406912f };
			Var0.f_6 = { 5.50202f, 1.979048f, 2.432055f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FLEX_FIGHT_JUMP_02";
			break;
	}
	return Var0;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_242(var uParam0)
{
	float fVar0;
	
	fVar0 = Global_36.f_2;
	if (func_4(Global_35, &(uParam0->f_2[0]), 1, 0) && fVar0 > 48.5f)
	{
		return 1;
	}
	return 0;
}

void func_243(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_224(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_324(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_343(iVar0);
	*uParam0 = 0;
}

void func_244(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0);
}

char* func_245()
{
	return "script_shows@flexfight@act2";
}

float func_246(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_247()
{
	return "action_01_player_zero";
}

int func_248(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_344(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

bool func_249(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_345(cParam1, uParam0);
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

void func_250(bool bParam0)
{
	if (func_346(Global_35, 0))
	{
		func_347(&Global_35, 1, bParam0);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), false);
		PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 1);
	}
}

void func_251(int iParam0, int iParam1)
{
	func_348(iParam0, iParam1);
}

char* func_252()
{
	return "PlayerChallenge_Loop_Music";
}

char* func_253()
{
	return "FlexFight_Player_Challenge_Sounds";
}

bool func_254(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_255()
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (INTERIOR::_0xD56FF170710FC826(iVar0, "new_theater_stage_blocker"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "new_theater_stage_blocker", 0);
				return 1;
			}
		}
	}
	return 0;
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@mc_showreacts@mc_showreacts";
		
		case 1:
			return "script@shows@flex_fight@shw_ff_arthur_wake_up";
		
		default:
			break;
	}
	return "FAIL -- ANIM SCENE NAME WAS NOT ADDED";
}

char* func_257()
{
	return "PL_WAKE_UP";
}

int func_258(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

Vector3 func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2547.473f, -1306.657f, 49.21665f;
		
		case 1:
			return 2567.306f, -1313.315f, 48.06502f;
		
		case 2:
			return 2568.476f, -1314.961f, 48.13437f;
		
		case 3:
			return 2539.351f, -1310.783f, 48.21665f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_260()
{
	return &Global_1899515;
}

int func_261(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_262()
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (INTERIOR::_0xD56FF170710FC826(iVar0, "new_theater_stage_blocker"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "new_theater_stage_blocker", 1);
			}
		}
	}
}

Vector3 func_263(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -347.6828f, 695.3319f, 118.3399f;
				
				case 1:
					return -348.5953f, 698.8133f, 119.6875f;
				
				case 2:
					return -348.8144f, 699.8091f, 118.9698f;
				
				default:
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.278f, -1301.387f, 49.2503f;
				
				case 1:
					return 2546.278f, -1301.387f, 49.2503f;
				
				case 2:
					return 2546.278f, -1301.387f, 49.2503f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.999f, -1351.896f, 48.8643f;
				
				case 1:
					return 2696.904f, -1353.697f, 50.4856f;
				
				case 2:
					return 2699.875f, -1351.404f, 49.7629f;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.4824f, -1362.639f, 44.7983f;
				
				case 1:
					return -781.2149f, -1362.732f, 45.4177f;
				
				case 2:
					return -780.0249f, -1362.867f, 47.5554f;
				
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_264(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1.3561f, 0f, -165.0047f;
				
				case 1:
					return -15.1795f, 0f, -165.8691f;
				
				case 2:
					return -3.653f, 0f, -165.8691f;
				
				default:
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1.2492f, 0f, -179.3095f;
				
				case 1:
					return 1.2492f, 0f, -179.3095f;
				
				case 2:
					return 1.2492f, 0f, -179.3095f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5.5654f, 0f, -49.4849f;
				
				case 1:
					return -12.2595f, 0f, -50.4561f;
				
				case 2:
					return -3.2839f, 0f, -49.6209f;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 5.1961f, 0f, -90.3272f;
				
				case 1:
					return -3.1228f, 1.0856f, -90.1785f;
				
				case 2:
					return -25.3626f, 1.0856f, -88.2647f;
				
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_265(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_266(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_329(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_349(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_224(iParam0))
	{
		return;
	}
	iVar0 = func_324(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_224(iParam0))
	{
		return false;
	}
	iVar0 = func_324(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_269(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_350(uParam0[iVar1 /*10*/]);
		iVar1++;
	}
}

void func_270(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 >= 56)
	{
		iParam2 = 55;
	}
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*10*/]))
		{
			PED::SET_PED_CAN_BE_TARGETTED(uParam0[iVar0 /*10*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar0 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0[iVar0 /*10*/], 623901053);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam0)[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

int func_271()
{
	return Global_1894899->f_2;
}

int func_272()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", 1);
			bVar1 = false;
		}
		if (bVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

bool func_274(int iParam0)
{
	return func_353(iParam0, 23);
}

void func_275(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_354(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_355(iParam0, 1);
			}
			else
			{
				func_356(iParam0, 1);
			}
		}
		else
		{
			func_357(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_358())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 3:
			return 1;
		
		case 1:
		case 2:
			return 1;
		
		case 4:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_277(int iParam0)
{
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		return !OBJECT::IS_DOOR_CLOSED(iParam0);
	}
	return 0;
}

int func_278(int iParam0)
{
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

void func_279()
{
	if (func_346(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
		PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 1);
	}
}

void func_280(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (((*uParam0)[iVar0 /*5*/])->f_1 != 0 && ENTITY::_0x1FF441D7954F8709(((*uParam0)[iVar0 /*5*/])->f_1))
		{
			ENTITY::_0xD2B9C78537ED5759(((*uParam0)[iVar0 /*5*/])->f_1);
		}
		iVar0++;
	}
}

void func_281(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_359(iParam0, iParam1, 1))
	{
		iVar0 = func_360(iParam1);
		iVar1 = func_361(iParam0);
		iVar2 = (func_361(iParam0) - func_361(iParam1));
		iVar3 = (func_360(iParam0) - func_360(iParam1));
		iVar4 = (func_362(iParam0) - func_362(iParam1));
		iVar5 = (func_261(iParam0) - func_261(iParam1));
		iVar6 = (func_363(iParam0) - func_363(iParam1));
		iVar7 = (func_364(iParam0) - func_364(iParam1));
	}
	else
	{
		iVar0 = func_360(iParam0);
		iVar1 = func_361(iParam1);
		iVar2 = (func_361(iParam1) - func_361(iParam0));
		iVar3 = (func_360(iParam1) - func_360(iParam0));
		iVar4 = (func_362(iParam1) - func_362(iParam0));
		iVar5 = (func_261(iParam1) - func_261(iParam0));
		iVar6 = (func_363(iParam1) - func_363(iParam0));
		iVar7 = (func_364(iParam1) - func_364(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_365(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_366(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_282(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_283()
{
	return Global_1572887->f_12;
}

int func_284()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 1);
			bVar1 = false;
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", 0);
			bVar1 = false;
		}
		if (bVar1)
		{
			return 1;
		}
	}
	return 0;
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_286(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_367(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
		OBJECT::_0xF49574E2332A8F06(*uParam0, fVar2);
	}
}

void func_287(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_367(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
			OBJECT::_0xF49574E2332A8F06(*uParam0, fVar1);
		}
	}
}

bool func_288(int iParam0)
{
	return func_151(iParam0, Global_1310750->f_16072 | 64);
}

void func_289(int iParam0)
{
	int iVar0;
	
	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

bool func_290(var uParam0, int iParam1, char* sParam2)
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

int func_291(int iParam0)
{
	if (iParam0 == -1922688829)
	{
		return -207060528;
	}
	return -207060528;
}

char* func_292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
		
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
		
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
		
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
		
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
		
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
		
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
		
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
		
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
		
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
		
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
		
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
		
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
		
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
		
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
		
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
		
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
		
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
		
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
		
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
		
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

void func_294(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_368(iParam1))
		{
			func_201(iParam0, 41788943);
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
			func_369(iParam0, 0, 1);
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
			func_370(iParam0, 0);
			bVar0 = true;
		}
		func_371(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1;
		
		case 1:
			return -1;
		
		case 2:
			return -1;
		
		case 0:
			return 7;
		
		case 3:
			return -1;
		
		default:
			break;
	}
	return -1;
}

struct<11> func_296(int iParam0, int iParam1)
{
	struct<11> Var0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2543.514f, -1303.811f, 47.16364f };
					Var0.f_3 = { 0f, 0f, 9.568836f };
					Var0.f_6 = { 4.336886f, 2f, 2.155625f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					Var0.f_9 = -1612834106;
					break;
				
				case 1:
					Var0 = { 2549.294f, -1303.83f, 47.04182f };
					Var0.f_3 = { 0f, 0f, -9.89514f };
					Var0.f_6 = { 4.260345f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				
				case 2:
					Var0 = { 2543.097f, -1302.039f, 47.34119f };
					Var0.f_3 = { 0f, 0f, 8.842982f };
					Var0.f_6 = { 5.463117f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					Var0.f_9 = -1612834106;
					break;
				
				case 3:
					Var0 = { 2550.183f, -1302.069f, 47.34119f };
					Var0.f_3 = { 0f, 0f, -10.03278f };
					Var0.f_6 = { 4.277905f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				
				case 4:
					Var0 = { 2542.933f, -1300.3f, 47.63106f };
					Var0.f_3 = { 0f, 0f, 9.537826f };
					Var0.f_6 = { 5.29451f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					Var0.f_9 = -1612834106;
					break;
				
				case 5:
					Var0 = { 2550.596f, -1300.471f, 47.63106f };
					Var0.f_3 = { 0f, 0f, -9.448911f };
					Var0.f_6 = { 3.957135f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					Var0.f_9 = -1612834106;
					break;
				
				case 6:
					Var0 = { 2542.582f, -1298.776f, 47.90404f };
					Var0.f_3 = { 0f, 0f, 9.277945f };
					Var0.f_6 = { 4.706136f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					Var0.f_9 = -1612834106;
					break;
				
				case 7:
					Var0 = { 2549.868f, -1298.625f, 47.904f };
					Var0.f_3 = { 0f, 0f, -9.896723f };
					Var0.f_6 = { 5.116724f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					Var0.f_9 = -1612834106;
					break;
			}
			break;
	}
	return Var0;
}

int func_297(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				
				case 55:
				case 56:
					return 1;
				
				default:
					break;
			}
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_172(0);
		
		case 1:
			return func_172(0);
		
		case 2:
			return func_172(2);
		
		case 3:
			return func_172(2);
		
		case 4:
			return func_172(3);
		
		case 5:
			return func_172(4);
		
		case 6:
			return func_172(5);
		
		case 7:
			return func_172(5);
		
		case 8:
			return func_172(6);
		
		case 9:
			return func_172(6);
		
		case 10:
			return func_172(6);
		
		case 11:
			return func_172(6);
		
		case 12:
			return func_172(7);
		
		case 13:
			return func_172(7);
		
		case 14:
			return func_172(8);
		
		case 15:
			return func_172(8);
		
		case 16:
			return func_172(1);
		
		case 17:
			return func_172(1);
		
		case 18:
			return func_172(1);
		
		case 19:
			return func_172(1);
		
		case 20:
			return func_172(1);
		
		case 21:
			return func_172(1);
		
		case 22:
			return func_172(1);
		
		case 23:
			return func_172(1);
		
		case 24:
			return func_172(1);
		
		case 25:
			return func_172(1);
		
		case 26:
			return func_172(9);
		
		case 27:
			return func_172(9);
		
		case 28:
			return func_172(9);
		
		case 29:
			return func_172(9);
		
		case 30:
			return func_172(9);
		
		case 31:
			return func_172(10);
		
		case 32:
			return func_172(10);
		
		case 33:
			return func_172(10);
		
		case 34:
			return func_172(11);
		
		default:
			break;
	}
	return "FAIL";
}

char* func_299(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_373(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_374(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_375(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_376(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_377(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_378(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_379(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_380(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_381(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_382(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_383(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_384(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_385(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_386(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_389(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_390(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_391(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_392(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_393(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_394(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_395(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_396(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_397(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_398(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_399(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_400(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_401(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_402(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_403(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_404(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_405(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_406(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_407(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_408(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_409(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_410(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_411(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_412(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_413(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_414(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_415(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_416(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_417(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_418(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_419(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_420(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_421(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_422(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_423(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_424(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_427(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_428(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_429(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_430(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_431(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_432(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_433(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_434(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_435(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_436(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_437(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_438(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_439(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_440(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_443(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_444(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_445(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_446(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_447(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_448(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_449(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_450(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_451(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_452(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_453(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_430(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(16, iParam1, iParam2)));
						
						case 2:
							return func_431(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(16, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_454(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_455(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_456(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_457(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_458(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_459(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_460(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_461(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_462(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_463(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_464(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_465(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_466(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		
		case 26:
			break;
		
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_467(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_468(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_469(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_470(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_471(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_468(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_469(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_472(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_473(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_468(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_469(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_474(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_475(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_468(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_469(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_476(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 31:
			break;
		
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_477(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_478(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_479(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_480(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_481(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_482(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_483(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_484(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_485(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_486(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_487(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 1:
							return func_484(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
						
						case 2:
							return func_485(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
					}
					break;
				
				case 2:
					return func_488(MISC::GET_RANDOM_INT_IN_RANGE(0, func_372(iParam0, iParam1, iParam2)));
			}
			break;
	}
	return "FAIL";
}

float func_300()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.25f);
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_304(int iParam0, int iParam1)
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

int func_305(int iParam0, int iParam1)
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

bool func_306(int iParam0, int iParam1)
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
	if (!func_304(iParam0, iVar0))
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

void func_307(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_308(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_489(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_490(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_309(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 31:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 39:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 32:
					return 1;
				
				default:
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 4:
					return 1;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_311(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 0:
			if (func_491(((*Global_1835011)[36 /*74*/])->f_1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
		case 2:
			return 1;
	}
	return 0;
}

float func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1f;
				
				case 1:
					return -1f;
				
				case 2:
					return 140f;
				
				case 3:
					return 137f;
				
				case 4:
					return 13f;
				
				case 5:
					return 4f;
				
				case 6:
					return -1f;
				
				case 7:
					return -1f;
				
				case 8:
					return -1f;
				
				case 9:
					return 134f;
				
				case 10:
					return 90f;
				
				case 11:
					return 52.5f;
				
				case 12:
					return 34.5f;
				
				case 13:
					return 7f;
				
				case 14:
					return -1f;
				
				case 15:
					return -1f;
				
				case 16:
					return -1f;
				
				case 17:
					return 149f;
				
				case 18:
					return 105f;
				
				case 19:
					return 75f;
				
				case 20:
					return 57f;
				
				case 21:
					return -1f;
				
				case 22:
					return -1f;
				
				case 23:
					return -1f;
				
				case 24:
					return 125f;
				
				case 25:
					return 109f;
				
				case 26:
					return 84f;
				
				case 27:
					return -1f;
				
				case 28:
					return -1f;
				
				case 29:
					return -1f;
				
				case 30:
					return 70.5f;
				
				case 31:
					return 47.5f;
				
				case 32:
					return 8.5f;
				
				case 33:
					return -1f;
				
				case 34:
					return -1f;
				
				case 35:
					return -1f;
				
				case 36:
					return 130f;
				
				case 37:
					return 114f;
				
				case 38:
					return 94f;
				
				case 39:
					return 0f;
				
				case 40:
					return -1f;
				
				case 41:
					return -1f;
				
				case 42:
					return -1f;
				
				case 43:
					return 145f;
				
				case 44:
					return 40f;
				
				case 45:
					return 27f;
				
				case 46:
					return -1f;
				
				case 47:
					return -1f;
				
				case 48:
					return -1f;
				
				case 49:
					return 120f;
				
				case 50:
					return 100f;
				
				case 51:
					return 81f;
				
				case 52:
					return 62f;
				
				case 53:
					return 0.5f;
				
				case 54:
					return 1.5f;
				
				case 55:
					return 1f;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44f;
				
				case 1:
					return 17f;
				
				case 2:
					return 23f;
				
				case 3:
					return 56f;
				
				case 4:
					return 60f;
				
				case 5:
					return 0f;
				
				case 6:
					return 10f;
				
				case 7:
					return 30f;
				
				case 8:
					return 37f;
				
				case 9:
					return 52f;
				
				default:
					break;
			}
			break;
		
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60f;
				
				case 1:
					return 46f;
				
				case 2:
					return 24f;
				
				case 3:
					return 8f;
				
				case 4:
					return 12f;
				
				case 5:
					return 31f;
				
				case 6:
					return 44f;
				
				case 7:
					return 40f;
				
				case 8:
					return 21f;
				
				case 9:
					return 0f;
				
				case 10:
					return 4f;
				
				case 11:
					return 54f;
				
				case 12:
					return 58f;
				
				case 13:
					return 36f;
				
				case 14:
					return 17f;
				
				case 15:
					return 28f;
				
				case 16:
					return 70f;
				
				case 17:
					return 65f;
				
				case 18:
					return 50f;
				
				case 19:
					return 33f;
				
				case 20:
					return 1.5f;
				
				case 21:
					return 62f;
				
				default:
					break;
			}
			return 75f;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60f;
				
				case 1:
					return 46f;
				
				case 2:
					return 24f;
				
				case 3:
					return 8f;
				
				case 4:
					return 12f;
				
				case 5:
					return 31f;
				
				case 6:
					return 44f;
				
				case 7:
					return 40f;
				
				case 8:
					return 21f;
				
				case 9:
					return 0f;
				
				case 10:
					return 4f;
				
				case 11:
					return 54f;
				
				case 12:
					return 58f;
				
				case 13:
					return 36f;
				
				case 14:
					return 17f;
				
				case 15:
					return 28f;
				
				case 16:
					return 70f;
				
				case 17:
					return 65f;
				
				case 18:
					return 50f;
				
				case 19:
					return 33f;
				
				case 20:
					return 1.5f;
				
				case 21:
					return 62f;
				
				case 22:
					return 72f;
				
				default:
					break;
			}
			return 75f;
	}
	return 20f;
}

int func_314(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	vVar3 = { Global_36 - vVar0 };
	vVar6 = { Vector(49.51665f, -1308.839f, 2546.548f) - vVar0 };
	vVar3 = { func_218(vVar3) };
	vVar6 = { func_218(vVar6) };
	if (func_219(vVar6, vVar3) > 0.95f)
	{
		return 1;
	}
	return 0;
}

void func_315(int* iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, iParam0->f_2) };
		fVar4 = func_179(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_297(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = func_298(iParam0->f_5);
		iParam0->f_8 = func_299(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_300(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_300(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

int func_316(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 15;
	}
	else if (iParam0 >= 27 && iParam0 <= 52)
	{
		return 14;
	}
	else if (iParam0 >= 53 && iParam0 <= 55)
	{
		return 2;
	}
	return 2;
}

int func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				case 13:
					return 0;
				
				case 14:
					return 0;
				
				case 15:
					return 0;
				
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				case 19:
					return 0;
				
				case 20:
					return 0;
				
				case 21:
					return 0;
				
				case 22:
					return 0;
				
				case 23:
					return 0;
				
				case 24:
					return 0;
				
				case 25:
					return 0;
				
				case 26:
					return 0;
				
				case 27:
					return 0;
				
				case 28:
					return 0;
				
				case 29:
					return 0;
				
				case 30:
					return 0;
				
				case 31:
					return 0;
				
				case 32:
					return 0;
				
				case 33:
					return 0;
				
				case 34:
					return 0;
				
				case 35:
					return 0;
				
				case 36:
					return 0;
				
				case 37:
					return 0;
				
				case 38:
					return 0;
				
				case 39:
					return 0;
				
				case 40:
					return 0;
				
				case 41:
					return 0;
				
				case 42:
					return 0;
				
				case 43:
					return 0;
				
				case 44:
					return 0;
				
				case 45:
					return 0;
				
				case 46:
					return 0;
				
				case 47:
					return 0;
				
				case 48:
					return 0;
				
				case 49:
					return 0;
				
				case 50:
					return 0;
				
				case 51:
					return 0;
				
				case 52:
					return 0;
				
				case 53:
					return 0;
				
				case 54:
					return 0;
				
				case 55:
					return 0;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return 1;
				
				default:
					break;
			}
			Jump @1041; //curOff = 722
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return 1;
				
				case 9:
					return 0;
				
				case 10:
				case 11:
					return 1;
				
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
					return 0;
				
				default:
					break;
			}
			Jump @1041; //curOff = 881
			switch (iParam1)
			{
				case 0:
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
					return 1;
				
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
					return 0;
				
				default:
					break;
			}
			return 0;
		}

Vector3 func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		
		case 3:
			return -346.8185f, 692.4758f, 118.2631f;
		
		case 1:
		case 2:
			return 2700.367f, -1349.699f, 49.78757f;
		
		case 4:
			return -772.6649f, -1362.613f, 45.39102f;
	}
	return 0f, 0f, 0f;
}

void func_319(var uParam0, vector3 vParam1, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { vParam1 };
	Var0.f_3 = 0;
	Var0.f_8 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

void func_320(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	var uVar10;
	
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, uParam0->f_2) };
		fVar4 = func_179(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_297(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			uVar9 = func_492(uParam0->f_2);
			uParam0->f_6 = uVar9;
			uParam0->f_7 = func_298(uParam0->f_6);
			uParam0->f_8 = func_299(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			uVar10 = func_493(uParam0->f_2);
			uParam0->f_6 = uVar10;
			uParam0->f_7 = func_298(uParam0->f_6);
			uParam0->f_8 = func_299(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = func_298(uParam0->f_6);
			uParam0->f_8 = func_299(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

void func_321(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = 0f;
	bVar1 = false;
	if (ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335))
	{
		fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1394141->f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_311(&(uParam0->f_11), 1);
						}
						break;
					
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_315(iParam1, 0);
							func_311(&(uParam0->f_11), 2);
						}
						break;
					
					case 2:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_311(&(uParam0->f_11), 3);
						}
						break;
					
					case 3:
						break;
				}
			}
			break;
		
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "male", *iParam1, 0);
							func_311(&(uParam0->f_11), 1);
						}
						break;
					
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "Pl_BreathFail") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141->f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, -668482597, false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, false, 40000f);
							func_311(&(uParam0->f_11), 2);
						}
						break;
					
					case 2:
						if (func_494(*iParam1, 713668775))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							func_350(*iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_311(&(uParam0->f_11), 3);
						}
						break;
					
					case 3:
						break;
				}
			}
			break;
		
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141->f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_311(&(uParam0->f_11), 1);
						}
						break;
					
					case 1:
						break;
				}
			}
			break;
		
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141->f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							func_311(&(uParam0->f_11), 1);
						}
						break;
					
					case 1:
						Global_1394141->f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141->f_1334 = 0;
			}
			break;
		
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1394141->f_1335, 0)) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "pl_Performance")) && ANIMSCENE::_0x8D81E7824B7753F7(Global_1394141->f_1335, "s_Performance_P2", 1))
						{
							func_311(&(uParam0->f_11), 1);
						}
						break;
					
					case 1:
						if (func_2(Global_1394141->f_1326, 2048) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1394141->f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_311(&(uParam0->f_11), 2);
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_315(iParam1, 0);
				Global_1394141->f_1334 = 0;
			}
			break;
	}
}

Vector3 func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -307.226f, 789.081f, 116.7509f;
		
		case 4:
			return -836.5425f, -1317.775f, 42.55259f;
		
		case 1:
		case 2:
			return 2631.464f, -1288.41f, 51.26936f;
		
		case 0:
			return 2546.444f, -1287.778f, 48.21795f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_323(vector3 vParam0)
{
	int iVar0;
	
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	return iParam0;
}

void func_325(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_326(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_329(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_327(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 3;
		
		case 7:
			return 4;
		
		case 8:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 15:
			return 3;
		
		case 18:
			return 3;
		
		case 12:
			return 5;
		
		case 16:
			return 5;
		
		case 17:
			return 5;
		
		case 20:
			return 2;
		
		case 13:
			return 5;
		
		case 14:
			return 5;
		
		case 19:
			return 3;
		
		default:
			break;
	}
	return 0;
}

Vector3 func_331(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(1) };
						}
						else
						{
							vVar0 = { func_495(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(0) };
					}
					else
					{
						vVar0 = { func_495(2) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(13) };
						}
						else
						{
							vVar0 = { func_495(15) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(12) };
					}
					else
					{
						vVar0 = { func_495(14) };
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(25) };
						}
						else
						{
							vVar0 = { func_495(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(24) };
					}
					else
					{
						vVar0 = { func_495(26) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(25) };
						}
						else
						{
							vVar0 = { func_495(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(24) };
					}
					else
					{
						vVar0 = { func_495(26) };
					}
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(1) };
						}
						else
						{
							vVar0 = { func_495(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(0) };
					}
					else
					{
						vVar0 = { func_495(2) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(17) };
						}
						else
						{
							vVar0 = { func_495(19) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(16) };
					}
					else
					{
						vVar0 = { func_495(18) };
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(29) };
						}
						else
						{
							vVar0 = { func_495(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(28) };
					}
					else
					{
						vVar0 = { func_495(30) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(33) };
						}
						else
						{
							vVar0 = { func_495(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(32) };
					}
					else
					{
						vVar0 = { func_495(34) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(37) };
						}
						else
						{
							vVar0 = { func_495(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(36) };
					}
					else
					{
						vVar0 = { func_495(38) };
					}
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(41) };
						}
						else
						{
							vVar0 = { func_495(43) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(40) };
					}
					else
					{
						vVar0 = { func_495(42) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(21) };
						}
						else
						{
							vVar0 = { func_495(23) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(20) };
					}
					else
					{
						vVar0 = { func_495(22) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(25) };
						}
						else
						{
							vVar0 = { func_495(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(24) };
					}
					else
					{
						vVar0 = { func_495(26) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(29) };
						}
						else
						{
							vVar0 = { func_495(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(28) };
					}
					else
					{
						vVar0 = { func_495(30) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(33) };
						}
						else
						{
							vVar0 = { func_495(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(32) };
					}
					else
					{
						vVar0 = { func_495(34) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(37) };
						}
						else
						{
							vVar0 = { func_495(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(36) };
					}
					else
					{
						vVar0 = { func_495(38) };
					}
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(45) };
						}
						else
						{
							vVar0 = { func_495(47) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(44) };
					}
					else
					{
						vVar0 = { func_495(46) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(49) };
						}
						else
						{
							vVar0 = { func_495(51) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(48) };
					}
					else
					{
						vVar0 = { func_495(50) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(53) };
						}
						else
						{
							vVar0 = { func_495(55) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(52) };
					}
					else
					{
						vVar0 = { func_495(54) };
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(25) };
						}
						else
						{
							vVar0 = { func_495(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(24) };
					}
					else
					{
						vVar0 = { func_495(26) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(61) };
						}
						else
						{
							vVar0 = { func_495(63) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(60) };
					}
					else
					{
						vVar0 = { func_495(62) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(65) };
						}
						else
						{
							vVar0 = { func_495(67) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(64) };
					}
					else
					{
						vVar0 = { func_495(66) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(73) };
						}
						else
						{
							vVar0 = { func_495(75) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(72) };
					}
					else
					{
						vVar0 = { func_495(74) };
					}
					break;
				
				case 1:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(5) };
						}
						else
						{
							vVar0 = { func_495(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(4) };
					}
					else
					{
						vVar0 = { func_495(6) };
					}
					break;
				
				case 2:
					if (func_156())
					{
						if (bParam2)
						{
							vVar0 = { func_495(9) };
						}
						else
						{
							vVar0 = { func_495(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_495(8) };
					}
					else
					{
						vVar0 = { func_495(10) };
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
	return vVar0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 15:
		case 18:
		case 20:
			return 0;
		
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 16:
		case 17:
		case 19:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_491(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_334(var uParam0)
{
	float fVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_48) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_48, 0))
	{
		return 0;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_48);
	switch (*uParam0)
	{
		case 9:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "PL_A_Performance"))
			{
				if (fVar0 > 0.73f && fVar0 < 0.76f)
				{
					return 1;
				}
			}
			break;
		
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "PL_P1"))
			{
				if (fVar0 > 0.26f && fVar0 < 0.28f)
				{
					return 1;
				}
				if (fVar0 > 0.72f && fVar0 < 0.8f)
				{
					return 1;
				}
			}
			break;
		
		case 8:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 15:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "pbl_CrowdChallenge_P1"))
			{
				return 1;
			}
			break;
		
		case 20:
			break;
		
		case 18:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "Pbl_Intro"))
			{
				if (fVar0 > 0.95f && fVar0 < 1f)
				{
					return 1;
				}
			}
			break;
		
		case 5:
		case 6:
			break;
		
		case 12:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "Pl_BreathLoop"))
			{
				return 1;
			}
			break;
		
		case 13:
		case 14:
			break;
		
		case 16:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "PL_KissLoop"))
			{
				return 1;
			}
			break;
		
		case 17:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_48, "PL_KissLoop"))
			{
				return 1;
			}
			break;
		
		case 19:
			return 0;
	}
	return 0;
}

void func_335(var uParam0)
{
	switch (uParam0->f_1052)
	{
		case 0:
		case 1:
		case 2:
			uParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		
		case 3:
		case 4:
			uParam0->f_944 = 1;
			func_54(func_52(1), func_53());
			break;
		
		default:
			uParam0->f_944 = 2;
			func_54(func_52(2), func_53());
			break;
	}
}

char* func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_08_maryjohnapplause";
		
		case 1:
			return "idle_08_maryjohnapplause_standing";
		
		default:
			break;
	}
	return "idle_08_maryjohnapplause_standing";
}

void func_337(var uParam0)
{
	switch (uParam0->f_1052)
	{
		case 0:
			uParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		
		case -2:
		case -1:
			uParam0->f_944 = 3;
			func_54(func_52(3), func_53());
			break;
		
		case -4:
		case -3:
			uParam0->f_944 = 4;
			func_54(func_52(4), func_53());
			break;
		
		default:
			uParam0->f_944 = 5;
			func_54(func_52(5), func_53());
			break;
	}
}

int func_338(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_329(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_349(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_339(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_340(int iParam0, vector3 vParam1, float fParam4)
{
	var uVar0[3];
	var uVar4;
	int iVar8;
	int iVar9;
	
	uVar4 = 3;
	iVar8 = func_209(&uVar0, &uVar4, 1, vParam1, fParam4, 0, 1, 1, -1, 1, 1, -1082130432, 0, 0);
	if (iVar8 > 0)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (PED::IS_PED_MODEL(&(uVar0[iVar9]), iParam0))
			{
				return &(uVar0[iVar9]);
			}
			iVar9++;
		}
	}
	return 0;
}

char* func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_IDLE";
		
		case 1:
			return "PL_REACTS";
		
		default:
			break;
	}
	return "FAIL -- MC REACT PLAYLIST WAS NOT ADDED";
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		
		case 1:
			return 14;
		
		case 2:
			return 15;
		
		case 3:
			return 16;
		
		case 4:
			return 17;
		
		case 5:
			return 18;
		
		case 6:
			return 19;
		
		case 7:
			return 20;
		
		case 8:
			return 21;
		
		case 9:
			return 22;
		
		case 10:
			return 23;
		
		case 11:
			return 24;
		
		case 12:
			return 25;
		
		case 13:
			return 26;
		
		case 14:
			return 27;
		
		case 15:
			return 28;
		
		case 16:
			return 29;
		
		default:
			break;
	}
	return 0;
}

void func_343(int iParam0)
{
	if (!func_496(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_344(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

void func_345(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_346(int iParam0, int iParam1)
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
	if (func_2(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_2(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_347(var uParam0, bool bParam1, bool bParam2)
{
	if (func_346(*uParam0, 0))
	{
		if (*uParam0 != Global_35)
		{
			PED::_0x8BA83CC4288CD56D(*uParam0, 1341518023);
			func_251(*uParam0, 0);
			if (bParam1)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), true, 0, false, false);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 249, bParam2);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 258, true);
	}
}

void func_348(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_349(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_326(iParam0, 1);
	func_327(iParam0, 1);
	func_328(iParam0, 128);
}

void func_350(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 623901053);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_351(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_352(int iParam0)
{
	if (func_497(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_353(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_283() == 0)
	{
		return 0;
	}
	func_351(iParam0, 0, 0);
	if (func_352(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

void func_354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_352(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_355(int iParam0, int iParam1)
{
	if (func_352(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_356(int iParam0, int iParam1)
{
	if (func_352(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_357(int iParam0, int iParam1)
{
	if (func_352(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_358()
{
	return 1;
}

bool func_359(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_498(iParam1) || !func_498(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_360(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_361(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_499(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_362(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_363(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_364(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_365(int iParam0, int iParam1)
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

float func_366(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

float func_367(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_368(int iParam0)
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

void func_369(int iParam0, int iParam1, bool bParam2)
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

void func_370(int iParam0, bool bParam1)
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

void func_371(int iParam0, int iParam1)
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

int func_372(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 26:
			return 0;
		
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 1;
						
						case 2:
							return 1;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						default:
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

var func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(4);
		
		case 1:
			return func_500(5);
		
		case 2:
			return func_500(6);
		
		case 3:
			return func_500(7);
		
		default:
			break;
	}
	return func_500(4);
}

var func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(14);
		
		default:
			break;
	}
	return func_500(14);
}

var func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(16);
		
		default:
			break;
	}
	return func_500(16);
}

var func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(0);
		
		case 1:
			return func_500(1);
		
		default:
			break;
	}
	return func_500(0);
}

var func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(8);
		
		case 1:
			return func_500(9);
		
		case 2:
			return func_500(10);
		
		case 3:
			return func_500(11);
		
		default:
			break;
	}
	return func_500(8);
}

var func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(15);
		
		default:
			break;
	}
	return func_500(15);
}

var func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(17);
		
		default:
			break;
	}
	return func_500(17);
}

var func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_500(2);
		
		case 1:
			return func_500(3);
		
		default:
			break;
	}
	return func_500(2);
}

var func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(8);
		
		case 1:
			return func_501(9);
		
		case 2:
			return func_501(12);
		
		case 3:
			return func_501(13);
		
		case 4:
			return func_501(14);
		
		case 5:
			return func_501(15);
		
		case 6:
			return func_501(18);
		
		case 7:
			return func_501(19);
		
		default:
			break;
	}
	return func_501(8);
}

var func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(26);
		
		case 1:
			return func_501(27);
		
		default:
			break;
	}
	return func_501(26);
}

var func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(30);
		
		case 1:
			return func_501(31);
		
		default:
			break;
	}
	return func_501(30);
}

var func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(0);
		
		case 1:
			return func_501(1);
		
		case 2:
			return func_501(4);
		
		case 3:
			return func_501(5);
		
		default:
			break;
	}
	return func_501(0);
}

var func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(10);
		
		case 1:
			return func_501(11);
		
		case 2:
			return func_501(16);
		
		case 3:
			return func_501(17);
		
		case 4:
			return func_501(20);
		
		case 5:
			return func_501(21);
		
		default:
			break;
	}
	return func_501(10);
}

var func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(28);
		
		case 1:
			return func_501(29);
		
		default:
			break;
	}
	return func_501(28);
}

var func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(32);
		
		case 1:
			return func_501(33);
		
		default:
			break;
	}
	return func_501(32);
}

var func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_501(2);
		
		case 1:
			return func_501(3);
		
		case 2:
			return func_501(6);
		
		case 3:
			return func_501(7);
		
		default:
			break;
	}
	return func_501(2);
}

var func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_502(2);
		
		case 1:
			return func_502(3);
		
		case 2:
			return func_502(4);
		
		case 3:
			return func_502(5);
		
		default:
			break;
	}
	return func_502(2);
}

var func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_502(7);
		
		default:
			break;
	}
	return func_502(7);
}

var func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_502(8);
		
		default:
			break;
	}
	return func_502(8);
}

var func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_502(0);
		
		case 1:
			return func_502(1);
		
		default:
			break;
	}
	return func_502(0);
}

var func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_503(4);
		
		case 1:
			return func_503(5);
		
		case 2:
			return func_503(6);
		
		case 3:
			return func_503(7);
		
		case 4:
			return func_503(8);
		
		case 5:
			return func_503(9);
		
		case 6:
			return func_503(10);
		
		case 7:
			return func_503(11);
		
		default:
			break;
	}
	return func_503(4);
}

var func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_503(14);
		
		case 1:
			return func_503(15);
		
		default:
			break;
	}
	return func_503(14);
}

var func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_503(16);
		
		case 1:
			return func_503(17);
		
		default:
			break;
	}
	return func_503(16);
}

var func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_503(0);
		
		case 1:
			return func_503(1);
		
		case 2:
			return func_503(2);
		
		case 3:
			return func_503(3);
		
		default:
			break;
	}
	return func_503(0);
}

var func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(8);
		
		case 1:
			return func_504(9);
		
		case 2:
			return func_504(12);
		
		case 3:
			return func_504(13);
		
		case 4:
			return func_504(16);
		
		case 5:
			return func_504(17);
		
		default:
			break;
	}
	return func_504(8);
}

var func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(24);
		
		case 1:
			return func_504(25);
		
		default:
			break;
	}
	return func_504(24);
}

var func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(28);
		
		case 1:
			return func_504(29);
		
		default:
			break;
	}
	return func_504(28);
}

var func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(0);
		
		case 1:
			return func_504(1);
		
		case 2:
			return func_504(4);
		
		case 3:
			return func_504(5);
		
		default:
			break;
	}
	return func_504(0);
}

var func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(10);
		
		case 1:
			return func_504(11);
		
		case 2:
			return func_504(14);
		
		case 3:
			return func_504(15);
		
		case 4:
			return func_504(18);
		
		case 5:
			return func_504(19);
		
		default:
			break;
	}
	return func_504(10);
}

var func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(26);
		
		case 1:
			return func_504(27);
		
		default:
			break;
	}
	return func_504(26);
}

var func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(30);
		
		case 1:
			return func_504(31);
		
		default:
			break;
	}
	return func_504(30);
}

var func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_504(2);
		
		case 1:
			return func_504(3);
		
		case 2:
			return func_504(6);
		
		case 3:
			return func_504(7);
		
		default:
			break;
	}
	return func_504(2);
}

var func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(11);
		
		case 1:
			return func_505(15);
		
		case 2:
			return func_505(19);
		
		default:
			break;
	}
	return func_505(11);
}

var func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(27);
		
		default:
			break;
	}
	return func_505(27);
}

var func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(31);
		
		default:
			break;
	}
	return func_505(31);
}

var func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(3);
		
		case 1:
			return func_505(7);
		
		default:
			break;
	}
	return func_505(3);
}

var func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(10);
		
		case 1:
			return func_505(14);
		
		case 2:
			return func_505(18);
		
		default:
			break;
	}
	return func_505(10);
}

var func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(26);
		
		default:
			break;
	}
	return func_505(26);
}

var func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(30);
		
		default:
			break;
	}
	return func_505(30);
}

var func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(2);
		
		case 1:
			return func_505(6);
		
		default:
			break;
	}
	return func_505(2);
}

var func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(9);
		
		case 1:
			return func_505(13);
		
		case 2:
			return func_505(17);
		
		default:
			break;
	}
	return func_505(9);
}

var func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(25);
		
		default:
			break;
	}
	return func_505(25);
}

var func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(29);
		
		default:
			break;
	}
	return func_505(29);
}

var func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(1);
		
		case 1:
			return func_505(5);
		
		default:
			break;
	}
	return func_505(0);
}

var func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(8);
		
		case 1:
			return func_505(12);
		
		case 2:
			return func_505(16);
		
		default:
			break;
	}
	return func_505(8);
}

var func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(24);
		
		default:
			break;
	}
	return func_505(24);
}

var func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(28);
		
		default:
			break;
	}
	return func_505(28);
}

var func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_505(0);
		
		case 1:
			return func_505(4);
		
		default:
			break;
	}
	return func_505(0);
}

var func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(4);
		
		case 1:
			return func_506(6);
		
		case 2:
			return func_506(8);
		
		default:
			break;
	}
	return func_506(4);
}

var func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(12);
		
		default:
			break;
	}
	return func_506(12);
}

var func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(14);
		
		default:
			break;
	}
	return func_506(14);
}

var func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(0);
		
		case 1:
			return func_506(2);
		
		default:
			break;
	}
	return func_506(0);
}

var func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(5);
		
		case 1:
			return func_506(7);
		
		case 2:
			return func_506(9);
		
		default:
			break;
	}
	return func_506(5);
}

var func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(13);
		
		default:
			break;
	}
	return func_506(13);
}

var func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(15);
		
		default:
			break;
	}
	return func_506(15);
}

var func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_506(1);
		
		case 1:
			return func_506(3);
		
		default:
			break;
	}
	return func_506(1);
}

var func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(56);
		
		case 1:
			return func_507(70);
		
		case 2:
			return func_507(84);
		
		default:
			break;
	}
	return func_507(56);
}

var func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(0);
		
		default:
			break;
	}
	return func_507(0);
}

var func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(14);
		
		default:
			break;
	}
	return func_507(14);
}

var func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(28);
		
		case 1:
			return func_507(42);
		
		default:
			break;
	}
	return func_507(42);
}

var func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(57);
		
		case 1:
			return func_507(58);
		
		case 2:
			return func_507(71);
		
		case 3:
			return func_507(72);
		
		case 4:
			return func_507(85);
		
		case 5:
			return func_507(86);
		
		default:
			break;
	}
	return func_507(57);
}

var func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(1);
		
		case 1:
			return func_507(2);
		
		default:
			break;
	}
	return func_507(1);
}

var func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(15);
		
		case 1:
			return func_507(16);
		
		default:
			break;
	}
	return func_507(15);
}

var func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(29);
		
		case 1:
			return func_507(30);
		
		case 2:
			return func_507(43);
		
		case 3:
			return func_507(44);
		
		default:
			break;
	}
	return func_507(43);
}

var func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(59);
		
		case 1:
			return func_507(60);
		
		case 2:
			return func_507(73);
		
		case 3:
			return func_507(74);
		
		case 4:
			return func_507(87);
		
		case 5:
			return func_507(88);
		
		default:
			break;
	}
	return func_507(59);
}

var func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(3);
		
		case 1:
			return func_507(4);
		
		default:
			break;
	}
	return func_507(3);
}

var func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(17);
		
		case 1:
			return func_507(18);
		
		default:
			break;
	}
	return func_507(17);
}

var func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(31);
		
		case 1:
			return func_507(32);
		
		case 2:
			return func_507(45);
		
		case 3:
			return func_507(46);
		
		default:
			break;
	}
	return func_507(42);
}

var func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(63);
		
		case 1:
			return func_507(77);
		
		case 2:
			return func_507(91);
		
		default:
			break;
	}
	return func_507(63);
}

var func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(7);
		
		default:
			break;
	}
	return func_507(7);
}

var func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(21);
		
		default:
			break;
	}
	return func_507(21);
}

var func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(35);
		
		case 1:
			return func_507(49);
		
		default:
			break;
	}
	return func_507(35);
}

var func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(62);
		
		case 1:
			return func_507(76);
		
		case 2:
			return func_507(90);
		
		default:
			break;
	}
	return func_507(62);
}

var func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(6);
		
		default:
			break;
	}
	return func_507(6);
}

var func_447(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(20);
		
		default:
			break;
	}
	return func_507(20);
}

var func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(34);
		
		case 1:
			return func_507(48);
		
		default:
			break;
	}
	return func_507(34);
}

var func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(61);
		
		case 1:
			return func_507(75);
		
		case 2:
			return func_507(89);
		
		default:
			break;
	}
	return func_507(61);
}

var func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(5);
		
		default:
			break;
	}
	return func_507(5);
}

var func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(19);
		
		default:
			break;
	}
	return func_507(19);
}

var func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(33);
		
		case 1:
			return func_507(47);
		
		default:
			break;
	}
	return func_507(33);
}

var func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(65);
		
		case 1:
			return func_507(79);
		
		case 2:
			return func_507(93);
		
		default:
			break;
	}
	return func_507(65);
}

var func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(37);
		
		case 1:
			return func_507(51);
		
		default:
			break;
	}
	return func_507(37);
}

var func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(64);
		
		case 1:
			return func_507(78);
		
		case 2:
			return func_507(92);
		
		default:
			break;
	}
	return func_507(64);
}

var func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(8);
		
		default:
			break;
	}
	return func_507(8);
}

var func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(22);
		
		default:
			break;
	}
	return func_507(22);
}

var func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(36);
		
		case 1:
			return func_507(50);
		
		default:
			break;
	}
	return func_507(36);
}

var func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(66);
		
		case 1:
			return func_507(67);
		
		case 2:
			return func_507(80);
		
		case 3:
			return func_507(81);
		
		case 4:
			return func_507(94);
		
		case 5:
			return func_507(95);
		
		default:
			break;
	}
	return func_507(66);
}

var func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(10);
		
		case 1:
			return func_507(11);
		
		default:
			break;
	}
	return func_507(10);
}

var func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(24);
		
		case 1:
			return func_507(25);
		
		default:
			break;
	}
	return func_507(24);
}

var func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(38);
		
		case 1:
			return func_507(39);
		
		case 2:
			return func_507(52);
		
		case 3:
			return func_507(53);
		
		default:
			break;
	}
	return func_507(38);
}

var func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(68);
		
		case 1:
			return func_507(69);
		
		case 2:
			return func_507(82);
		
		case 3:
			return func_507(83);
		
		case 4:
			return func_507(96);
		
		case 5:
			return func_507(97);
		
		default:
			break;
	}
	return func_507(68);
}

var func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(12);
		
		case 1:
			return func_507(13);
		
		default:
			break;
	}
	return func_507(12);
}

var func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(26);
		
		case 1:
			return func_507(27);
		
		default:
			break;
	}
	return func_507(26);
}

var func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(40);
		
		case 1:
			return func_507(41);
		
		case 2:
			return func_507(54);
		
		case 3:
			return func_507(55);
		
		default:
			break;
	}
	return func_507(40);
}

var func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(109);
		
		case 1:
			return func_507(110);
		
		case 2:
			return func_507(111);
		
		default:
			break;
	}
	return func_507(109);
}

var func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(98);
		
		default:
			break;
	}
	return func_507(98);
}

var func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(99);
		
		default:
			break;
	}
	return func_507(99);
}

var func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(102);
		
		case 1:
			return func_507(103);
		
		default:
			break;
	}
	return func_507(102);
}

var func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(108);
		
		default:
			break;
	}
	return func_507(108);
}

var func_472(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(100);
		
		case 1:
			return func_507(101);
		
		default:
			break;
	}
	return func_507(100);
}

var func_473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(112);
		
		case 1:
			return func_507(113);
		
		case 2:
			return func_507(114);
		
		default:
			break;
	}
	return func_507(112);
}

var func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(104);
		
		case 1:
			return func_507(105);
		
		default:
			break;
	}
	return func_507(104);
}

var func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(115);
		
		case 1:
			return func_507(116);
		
		case 2:
			return func_507(117);
		
		default:
			break;
	}
	return func_507(115);
}

var func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(106);
		
		case 1:
			return func_507(107);
		
		default:
			break;
	}
	return func_507(106);
}

var func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(122);
		
		case 1:
			return func_507(124);
		
		case 2:
			return func_507(126);
		
		case 3:
			return func_507(128);
		
		case 4:
			return func_507(130);
		
		case 5:
			return func_507(132);
		
		default:
			break;
	}
	return func_507(122);
}

var func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(118);
		
		case 1:
			return func_507(120);
		
		default:
			break;
	}
	return func_507(118);
}

var func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(123);
		
		case 1:
			return func_507(125);
		
		case 2:
			return func_507(127);
		
		case 3:
			return func_507(129);
		
		case 4:
			return func_507(131);
		
		case 5:
			return func_507(133);
		
		default:
			break;
	}
	return func_507(123);
}

var func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(119);
		
		case 1:
			return func_507(121);
		
		default:
			break;
	}
	return func_507(119);
}

var func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(138);
		
		case 1:
			return func_507(139);
		
		case 2:
			return func_507(140);
		
		case 3:
			return func_507(141);
		
		case 4:
			return func_507(142);
		
		case 5:
			return func_507(143);
		
		case 6:
			return func_507(144);
		
		case 7:
			return func_507(145);
		
		case 8:
			return func_507(146);
		
		case 9:
			return func_507(147);
		
		case 10:
			return func_507(148);
		
		case 11:
			return func_507(149);
		
		default:
			break;
	}
	return func_507(138);
}

var func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_507(134);
		
		case 1:
			return func_507(135);
		
		case 2:
			return func_507(136);
		
		case 3:
			return func_507(137);
		
		default:
			break;
	}
	return func_507(134);
}

var func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(6);
		
		case 1:
			return func_508(7);
		
		case 2:
			return func_508(9);
		
		case 3:
			return func_508(10);
		
		case 4:
			return func_508(12);
		
		case 5:
			return func_508(13);
		
		default:
			break;
	}
	return func_508(6);
}

var func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(16);
		
		case 1:
			return func_508(19);
		
		default:
			break;
	}
	return func_508(16);
}

var func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(17);
		
		case 1:
			return func_508(20);
		
		default:
			break;
	}
	return func_508(17);
}

var func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(0);
		
		case 1:
			return func_508(1);
		
		case 2:
			return func_508(3);
		
		case 3:
			return func_508(4);
		
		default:
			break;
	}
	return func_508(0);
}

var func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(6);
		
		case 1:
			return func_508(8);
		
		case 2:
			return func_508(9);
		
		case 3:
			return func_508(11);
		
		case 4:
			return func_508(12);
		
		case 5:
			return func_508(14);
		
		default:
			break;
	}
	return func_508(6);
}

var func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_508(0);
		
		case 1:
			return func_508(2);
		
		case 2:
			return func_508(3);
		
		case 3:
			return func_508(5);
		
		default:
			break;
	}
	return func_508(0);
}

int func_489(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (uParam3 && func_509(iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_510(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_490(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = func_511(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_492(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 30;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		return 27;
	}
	else if (iParam0 >= 33 && iParam0 <= 38)
	{
		return 29;
	}
	else if (iParam0 >= 39 && iParam0 <= 56)
	{
		return 28;
	}
	return 23;
}

int func_493(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 34;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) >= 50)
		{
			return 32;
		}
		else
		{
			return 33;
		}
	}
	else if (iParam0 >= 33 && iParam0 <= 54)
	{
		return 34;
	}
	return 19;
}

int func_494(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_495(int iParam0)
{
	vector3 vVar0[24];
	
	switch (iParam0)
	{
		case -1:
			StringCopy(&cVar0, "", 24);
			break;
		
		case 0:
			StringCopy(&cVar0, "SHRCT_PRCHEER_A", 24);
			break;
		
		case 1:
			StringCopy(&cVar0, "SHRCT_PRCHEER_J", 24);
			break;
		
		case 2:
			StringCopy(&cVar0, "SHRCT_PRBOO_A", 24);
			break;
		
		case 3:
			StringCopy(&cVar0, "SHRCT_PRBOO_J", 24);
			break;
		
		case 4:
			StringCopy(&cVar0, "SHRCT_GENCHEERA", 24);
			break;
		
		case 5:
			StringCopy(&cVar0, "SHRCT_GENCHEERJ", 24);
			break;
		
		case 6:
			StringCopy(&cVar0, "SHRCT_GENBOOA", 24);
			break;
		
		case 7:
			StringCopy(&cVar0, "SHRCT_GENBOOJ", 24);
			break;
		
		case 8:
			StringCopy(&cVar0, "SHRCT_FEMCHEERA", 24);
			break;
		
		case 9:
			StringCopy(&cVar0, "SHRCT_FEMCHEERJ", 24);
			break;
		
		case 10:
			StringCopy(&cVar0, "SHRCT_FEMBOOA", 24);
			break;
		
		case 11:
			StringCopy(&cVar0, "SHRCT_FEMBOOJ", 24);
			break;
		
		case 12:
			StringCopy(&cVar0, "SHBC_CHEER_A", 24);
			break;
		
		case 13:
			StringCopy(&cVar0, "SHBC_CHEER_J", 24);
			break;
		
		case 14:
			StringCopy(&cVar0, "SHBC_BOO_A", 24);
			break;
		
		case 15:
			StringCopy(&cVar0, "SHBC_BOO_J", 24);
			break;
		
		case 16:
			StringCopy(&cVar0, "BND1_CHEER_A", 24);
			break;
		
		case 17:
			StringCopy(&cVar0, "BND1_CHEER_J", 24);
			break;
		
		case 18:
			StringCopy(&cVar0, "BND1_BOO_A", 24);
			break;
		
		case 19:
			StringCopy(&cVar0, "BND1_BOO_J", 24);
			break;
		
		case 20:
			StringCopy(&cVar0, "BND2_CHEER_A", 24);
			break;
		
		case 21:
			StringCopy(&cVar0, "BND2_CHEER_J", 24);
			break;
		
		case 22:
			StringCopy(&cVar0, "BND2_BOO_A", 24);
			break;
		
		case 23:
			StringCopy(&cVar0, "BND2_BOO_J", 24);
			break;
		
		case 24:
			StringCopy(&cVar0, "SFIRE_CHEER_A", 24);
			break;
		
		case 25:
			StringCopy(&cVar0, "SFIRE_CHEER_J", 24);
			break;
		
		case 26:
			StringCopy(&cVar0, "SFIRE_BOO_A", 24);
			break;
		
		case 27:
			StringCopy(&cVar0, "SFIRE_BOO_J", 24);
			break;
		
		case 28:
			StringCopy(&cVar0, "SHCAN_CHEER_A", 24);
			break;
		
		case 29:
			StringCopy(&cVar0, "SHCAN_CHEER_J", 24);
			break;
		
		case 30:
			StringCopy(&cVar0, "SHCAN_BOO_A", 24);
			break;
		
		case 31:
			StringCopy(&cVar0, "SHCAN_BOO_J", 24);
			break;
		
		case 32:
			StringCopy(&cVar0, "SSNKE_CHEER_A", 24);
			break;
		
		case 33:
			StringCopy(&cVar0, "SSNKE_CHEER_J", 24);
			break;
		
		case 34:
			StringCopy(&cVar0, "SSNKE_BOO_A", 24);
			break;
		
		case 35:
			StringCopy(&cVar0, "SSNKE_BOO_J", 24);
			break;
		
		case 36:
			StringCopy(&cVar0, "SSNKE_BRN_POS_A", 24);
			break;
		
		case 37:
			StringCopy(&cVar0, "SSNKE_BRN_POS_J", 24);
			break;
		
		case 38:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_A", 24);
			break;
		
		case 39:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_J", 24);
			break;
		
		case 40:
			StringCopy(&cVar0, "SHFOS_CHEER_A", 24);
			break;
		
		case 41:
			StringCopy(&cVar0, "SHFOS_CHEER_J", 24);
			break;
		
		case 42:
			StringCopy(&cVar0, "SHFOS_BOO_A", 24);
			break;
		
		case 43:
			StringCopy(&cVar0, "SHFOS_BOO_J", 24);
			break;
		
		case 44:
			StringCopy(&cVar0, "SHEA_CHEER_A", 24);
			break;
		
		case 45:
			StringCopy(&cVar0, "SHEA_CHEER_J", 24);
			break;
		
		case 46:
			StringCopy(&cVar0, "SHEA_BOO_A", 24);
			break;
		
		case 47:
			StringCopy(&cVar0, "SHEA_BOO_J", 24);
			break;
		
		case 48:
			StringCopy(&cVar0, "SHFF_CHEER_A", 24);
			break;
		
		case 49:
			StringCopy(&cVar0, "SHFF_CHEER_J", 24);
			break;
		
		case 50:
			StringCopy(&cVar0, "SHFF_BOO_A", 24);
			break;
		
		case 51:
			StringCopy(&cVar0, "SHFF_BOO_J", 24);
			break;
		
		case 52:
			StringCopy(&cVar0, "SHFF_FAUDC_A", 24);
			break;
		
		case 53:
			StringCopy(&cVar0, "SHFF_FAUDC_J", 24);
			break;
		
		case 54:
			StringCopy(&cVar0, "SHFF_FAUDB_A", 24);
			break;
		
		case 55:
			StringCopy(&cVar0, "SHFF_FAUDB_J", 24);
			break;
		
		case 56:
			StringCopy(&cVar0, "SHEA_APPEARC_A", 24);
			break;
		
		case 57:
			StringCopy(&cVar0, "SHEA_APPEARC_J", 24);
			break;
		
		case 58:
			StringCopy(&cVar0, "SHEA_APPEARB_A", 24);
			break;
		
		case 59:
			StringCopy(&cVar0, "SHEA_APPEARB_J", 24);
			break;
		
		case 60:
			StringCopy(&cVar0, "SHSD_CHEER_A", 24);
			break;
		
		case 61:
			StringCopy(&cVar0, "SHSD_CHEER_J", 24);
			break;
		
		case 62:
			StringCopy(&cVar0, "SHSD_BOO_A", 24);
			break;
		
		case 63:
			StringCopy(&cVar0, "SHSD_BOO_J", 24);
			break;
		
		case 64:
			StringCopy(&cVar0, "SHEN_CHEER_A", 24);
			break;
		
		case 65:
			StringCopy(&cVar0, "SHEN_CHEER_J", 24);
			break;
		
		case 66:
			StringCopy(&cVar0, "SHEN_BOO_A", 24);
			break;
		
		case 67:
			StringCopy(&cVar0, "SHEN_BOO_J", 24);
			break;
		
		case 68:
			StringCopy(&cVar0, "SHEN_HANGED_A", 24);
			break;
		
		case 69:
			StringCopy(&cVar0, "SHEN_HANGED_J", 24);
			break;
		
		case 70:
			StringCopy(&cVar0, "SHEN_SHOTDWN_A", 24);
			break;
		
		case 71:
			StringCopy(&cVar0, "SHEN_SHOTDWN_J", 24);
			break;
		
		case 72:
			StringCopy(&cVar0, "RODDF_CHEER_A", 24);
			break;
		
		case 73:
			StringCopy(&cVar0, "RODDF_CHEER_J", 24);
			break;
		
		case 74:
			StringCopy(&cVar0, "RODDF_BOO_A", 24);
			break;
		
		case 75:
			StringCopy(&cVar0, "RODDF_BOO_J", 24);
			break;
	}
	return cVar0;
}

bool func_496(int iParam0)
{
	return func_329(iParam0, 2);
}

bool func_497(int iParam0)
{
	return iParam0 != 0;
}

int func_498(int iParam0)
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
	iVar0 = func_364(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_363(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_261(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_361(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_360(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_362(iParam0);
	if (iVar5 < 1 || iVar5 > func_365(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_499(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_500(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
		
		case 1:
			return "seated_loop_female1_enthralled_b";
		
		case 2:
			return "seated_loop_female0_waiting_a";
		
		case 3:
			return "seated_loop_female1_waiting_a";
		
		case 4:
			return "seated_loop_male1_enthralled_b";
		
		case 5:
			return "seated_loop_male2_enthralled_b";
		
		case 6:
			return "seated_loop_male3_enthralled_b";
		
		case 7:
			return "seated_loop_male4_enthralled_b";
		
		case 8:
			return "seated_loop_male1_waiting_a";
		
		case 9:
			return "seated_loop_male2_waiting_a";
		
		case 10:
			return "seated_loop_male3_waiting_a";
		
		case 11:
			return "seated_loop_male4_waiting_a";
		
		case 12:
			return "railing_loop_male0_enthralled_b";
		
		case 13:
			return "railing_loop_male0_waiting_a";
		
		case 14:
			return "railingl_male0_enthralled_b";
		
		case 15:
			return "railingl_male0_waiting_a";
		
		case 16:
			return "railingr_male5_enthralled_b";
		
		case 17:
			return "railingr_male5_waiting_a";
		
		default:
			break;
	}
	return "seated_loop_male1_waiting_a";
}

char* func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
		
		case 1:
			return "seated_loop_female0_regular_b";
		
		case 2:
			return "seated_loop_female0_rowdy_b";
		
		case 3:
			return "seated_loop_female0_rowdy_c";
		
		case 4:
			return "seated_loop_female1_regular_a";
		
		case 5:
			return "seated_loop_female1_regular_b";
		
		case 6:
			return "seated_loop_female1_rowdy_b";
		
		case 7:
			return "seated_loop_female1_rowdy_c";
		
		case 8:
			return "seated_loop_male1_regular_a";
		
		case 9:
			return "seated_loop_male1_regular_b";
		
		case 10:
			return "seated_loop_male1_rowdy_b";
		
		case 11:
			return "seated_loop_male1_rowdy_c";
		
		case 12:
			return "seated_loop_male2_regular_a";
		
		case 13:
			return "seated_loop_male2_regular_b";
		
		case 14:
			return "seated_loop_male3_regular_a";
		
		case 15:
			return "seated_loop_male3_regular_b";
		
		case 16:
			return "seated_loop_male3_rowdy_b";
		
		case 17:
			return "seated_loop_male3_rowdy_c";
		
		case 18:
			return "seated_loop_male4_regular_a";
		
		case 19:
			return "seated_loop_male4_regular_b";
		
		case 20:
			return "seated_loop_male4_rowdy_b";
		
		case 21:
			return "seated_loop_male4_rowdy_c";
		
		case 22:
			return "railing_loop_male0_regular_a";
		
		case 23:
			return "railing_loop_male0_regular_b";
		
		case 24:
			return "railing_loop_male0_rowdy_b";
		
		case 25:
			return "railing_loop_male0_rowdy_c";
		
		case 26:
			return "railingl_male0_regular_a";
		
		case 27:
			return "railingl_male0_regular_b";
		
		case 28:
			return "railingl_male0_rowdy_b";
		
		case 29:
			return "railingl_male0_rowdy_c";
		
		case 30:
			return "railingr_male5_regular_a";
		
		case 31:
			return "railingr_male5_regular_b";
		
		case 32:
			return "railingr_male5_rowdy_b";
		
		case 33:
			return "railingr_male5_rowdy_c";
		
		default:
			break;
	}
	return "seated_loop_male1_regular_a";
}

char* func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
		
		case 1:
			return "seated_loop_female1_musical_b";
		
		case 2:
			return "seated_loop_mail0_musical_b";
		
		case 3:
			return "seated_loop_male2_musical_b";
		
		case 4:
			return "seated_loop_male3_musical_b";
		
		case 5:
			return "seated_loop_male4_musical_b";
		
		case 6:
			return "railing_loop_male1_musical_b";
		
		case 7:
			return "railingl_male1_musical_b";
		
		case 8:
			return "railingr_male5_musical_b";
		
		default:
			break;
	}
	return "seated_loop_mail0_musical_b";
}

char* func_503(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
		
		case 1:
			return "seated_loop_female0_dancing_c";
		
		case 2:
			return "seated_loop_female1_dancing_b";
		
		case 3:
			return "seated_loop_female1_dancing_c";
		
		case 4:
			return "seated_loop_male0_dancing_b";
		
		case 5:
			return "seated_loop_male0_dancing_c";
		
		case 6:
			return "seated_loop_male2_dancing_b";
		
		case 7:
			return "seated_loop_male2_dancing_c";
		
		case 8:
			return "seated_loop_male3_dancing_b";
		
		case 9:
			return "seated_loop_male3_dancing_c";
		
		case 10:
			return "seated_loop_male4_dancing_b";
		
		case 11:
			return "seated_loop_male4_dancing_c";
		
		case 12:
			return "railing_loop_male1_dancing_b";
		
		case 13:
			return "railing_loop_male1_dancing_c";
		
		case 14:
			return "railingl_male1_dancing_b";
		
		case 15:
			return "railingl_male1_dancing_c";
		
		case 16:
			return "railingr_male5_dancing_b";
		
		case 17:
			return "railingr_male5_dancing_c";
		
		default:
			break;
	}
	return "seated_loop_male0_dancing_b";
}

char* func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
		
		case 1:
			return "seated_loop_female0_comedic_c";
		
		case 2:
			return "seated_loop_female0_displeased_b";
		
		case 3:
			return "seated_loop_female0_displeased_c";
		
		case 4:
			return "seated_loop_female1_comedic_b";
		
		case 5:
			return "seated_loop_female1_comedic_c";
		
		case 6:
			return "seated_loop_female1_displeased_b";
		
		case 7:
			return "seated_loop_female1_displeased_c";
		
		case 8:
			return "seated_loop_male0_comedic_b";
		
		case 9:
			return "seated_loop_male0_comedic_c";
		
		case 10:
			return "seated_loop_male0_displeased_b";
		
		case 11:
			return "seated_loop_male0_displeased_c";
		
		case 12:
			return "seated_loop_male2_comedic_b";
		
		case 13:
			return "seated_loop_male2_comedic_c";
		
		case 14:
			return "seated_loop_male2_displeased_b";
		
		case 15:
			return "seated_loop_male2_displeased_c";
		
		case 16:
			return "seated_loop_male3_comedic_b";
		
		case 17:
			return "seated_loop_male3_comedic_c";
		
		case 18:
			return "seated_loop_male3_displeased_b";
		
		case 19:
			return "seated_loop_male3_displeased_c";
		
		case 20:
			return "railing_loop_male1_comedic_b";
		
		case 21:
			return "railing_loop_male1_comedic_c";
		
		case 22:
			return "railing_loop_male1_displeased_b";
		
		case 23:
			return "railing_loop_male1_displeased_c";
		
		case 24:
			return "railingl_male1_comedic_b";
		
		case 25:
			return "railingl_male1_comedic_c";
		
		case 26:
			return "railingl_male1_displeased_b";
		
		case 27:
			return "railingl_male1_displeased_c";
		
		case 28:
			return "railingr_male4_comedic_b";
		
		case 29:
			return "railingr_male4_comedic_c";
		
		case 30:
			return "railingr_male4_displeased_b";
		
		case 31:
			return "railingr_male4_displeased_c";
		
		default:
			break;
	}
	return "seated_loop_male0_comedic_b";
}

char* func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
		
		case 1:
			return "seated_loop_female0_applause_small_a";
		
		case 2:
			return "seated_loop_female0_suspense_neg_b";
		
		case 3:
			return "seated_loop_female0_suspense_pos_b";
		
		case 4:
			return "seated_loop_female1_applause_med_b";
		
		case 5:
			return "seated_loop_female1_applause_small_a";
		
		case 6:
			return "seated_loop_female1_suspense_neg_b";
		
		case 7:
			return "seated_loop_female1_suspense_pos_b";
		
		case 8:
			return "seated_loop_male0_applause_med_b";
		
		case 9:
			return "seated_loop_male0_applause_small_a";
		
		case 10:
			return "seated_loop_male0_suspense_neg_b";
		
		case 11:
			return "seated_loop_male0_suspense_pos_b";
		
		case 12:
			return "seated_loop_male2_applause_med_b";
		
		case 13:
			return "seated_loop_male2_applause_small_a";
		
		case 14:
			return "seated_loop_male2_suspense_neg_b";
		
		case 15:
			return "seated_loop_male2_suspense_pos_b";
		
		case 16:
			return "seated_loop_male3_applause_med_b";
		
		case 17:
			return "seated_loop_male3_applause_small_a";
		
		case 18:
			return "seated_loop_male3_suspense_neg_b";
		
		case 19:
			return "seated_loop_male3_suspense_pos_b";
		
		case 20:
			return "railing_loop_male1_applause_med_b";
		
		case 21:
			return "railing_loop_male1_applause_small_a";
		
		case 22:
			return "railing_loop_male1_suspense_neg_b";
		
		case 23:
			return "railing_loop_male1_suspense_pos_b";
		
		case 24:
			return "railingl_male1_applause_med_b";
		
		case 25:
			return "railingl_male1_applause_small_a";
		
		case 26:
			return "railingl_male1_suspense_neg_b";
		
		case 27:
			return "railingl_male1_suspense_pos_b";
		
		case 28:
			return "railingr_male4_applause_med_b";
		
		case 29:
			return "railingr_male4_applause_small_a";
		
		case 30:
			return "railingr_male4_suspense_neg_b";
		
		case 31:
			return "railingr_male4_suspense_pos_b";
		
		default:
			break;
	}
	return "seated_loop_male0_applause_med_b";
}

char* func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
		
		case 1:
			return "seated_loop_female0_horrified_c";
		
		case 2:
			return "seated_loop_female2_applause_big_c";
		
		case 3:
			return "seated_loop_female2_horrified_c";
		
		case 4:
			return "seated_loop_male0_applause_big_c";
		
		case 5:
			return "seated_loop_male0_horrified_c";
		
		case 6:
			return "seated_loop_male2_applause_big_c";
		
		case 7:
			return "seated_loop_male2_horrified_c";
		
		case 8:
			return "seated_loop_male3_applause_big_c";
		
		case 9:
			return "seated_loop_male3_horrified_c";
		
		case 10:
			return "railing_loop_male1_applause_big_c";
		
		case 11:
			return "railing_loop_male1_horrified_c";
		
		case 12:
			return "railingl_male1_applause_big_c";
		
		case 13:
			return "railingl_male1_horrified_c";
		
		case 14:
			return "railingr_male4_applause_big_c";
		
		case 15:
			return "railingr_male4_horrified_c";
		
		default:
			break;
	}
	return "seated_loop_male0_applause_big_c";
}

char* func_507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
		
		case 1:
			return "railingl_male0_applause_standing_01";
		
		case 2:
			return "railingl_male0_applause_standing_02";
		
		case 3:
			return "railingl_male0_boo_high";
		
		case 4:
			return "railingl_male0_boo_low";
		
		case 5:
			return "railingl_male0_horrified_amused";
		
		case 6:
			return "railingl_male0_horrified_high";
		
		case 7:
			return "railingl_male0_horrified_low";
		
		case 8:
			return "railingl_male0_impressed_high";
		
		case 9:
			return "railingl_male0_impressed_low";
		
		case 10:
			return "railingl_male0_laugh";
		
		case 11:
			return "railingl_male0_laugh_02";
		
		case 12:
			return "railingl_male0_raunchy";
		
		case 13:
			return "railingl_male0_raunchy_02";
		
		case 14:
			return "railingr_male4_applause_quick";
		
		case 15:
			return "railingr_male4_applause_standing_01";
		
		case 16:
			return "railingr_male4_applause_standing_02";
		
		case 17:
			return "railingr_male4_boo_high";
		
		case 18:
			return "railingr_male4_boo_low";
		
		case 19:
			return "railingr_male4_horrified_amused";
		
		case 20:
			return "railingr_male4_horrified_high";
		
		case 21:
			return "railingr_male4_horrified_low";
		
		case 22:
			return "railingr_male4_impressed_high";
		
		case 23:
			return "railingr_male4_impressed_low";
		
		case 24:
			return "railingr_male4_laugh";
		
		case 25:
			return "railingr_male4_laugh_02";
		
		case 26:
			return "railingr_male4_raunchy";
		
		case 27:
			return "railingr_male4_raunchy_02";
		
		case 28:
			return "seated_loop_female0_applause_quick";
		
		case 29:
			return "seated_loop_female0_applause_standing_01";
		
		case 30:
			return "seated_loop_female0_applause_standing_02";
		
		case 31:
			return "seated_loop_female0_boo_high";
		
		case 32:
			return "seated_loop_female0_boo_low";
		
		case 33:
			return "seated_loop_female0_horrified_amused";
		
		case 34:
			return "seated_loop_female0_horrified_high";
		
		case 35:
			return "seated_loop_female0_horrified_low";
		
		case 36:
			return "seated_loop_female0_impressed_high";
		
		case 37:
			return "seated_loop_female0_impressed_low";
		
		case 38:
			return "seated_loop_female0_laugh";
		
		case 39:
			return "seated_loop_female0_laugh_02";
		
		case 40:
			return "seated_loop_female0_raunchy";
		
		case 41:
			return "seated_loop_female0_raunchy_02";
		
		case 42:
			return "seated_loop_female1_applause_quick";
		
		case 43:
			return "seated_loop_female1_applause_standing_01";
		
		case 44:
			return "seated_loop_female1_applause_standing_02";
		
		case 45:
			return "seated_loop_female1_boo_high";
		
		case 46:
			return "seated_loop_female1_boo_low";
		
		case 47:
			return "seated_loop_female1_horrified_amused";
		
		case 48:
			return "seated_loop_female1_horrified_high";
		
		case 49:
			return "seated_loop_female1_horrified_low";
		
		case 50:
			return "seated_loop_female1_impressed_high";
		
		case 51:
			return "seated_loop_female1_impressed_low";
		
		case 52:
			return "seated_loop_female1_laugh";
		
		case 53:
			return "seated_loop_female1_laugh_02";
		
		case 54:
			return "seated_loop_female1_raunchy";
		
		case 55:
			return "seated_loop_female1_raunchy_02";
		
		case 56:
			return "seated_loop_male1_applause_quick";
		
		case 57:
			return "seated_loop_male1_applause_standing_01";
		
		case 58:
			return "seated_loop_male1_applause_standing_02";
		
		case 59:
			return "seated_loop_male1_boo_high";
		
		case 60:
			return "seated_loop_male1_boo_low";
		
		case 61:
			return "seated_loop_male1_horrified_amused";
		
		case 62:
			return "seated_loop_male1_horrified_high";
		
		case 63:
			return "seated_loop_male1_horrified_low";
		
		case 64:
			return "seated_loop_male1_impressed_high";
		
		case 65:
			return "seated_loop_male1_impressed_low";
		
		case 66:
			return "seated_loop_male1_laugh";
		
		case 67:
			return "seated_loop_male1_laugh_02";
		
		case 68:
			return "seated_loop_male1_raunchy";
		
		case 69:
			return "seated_loop_male1_raunchy_02";
		
		case 70:
			return "seated_loop_male2_applause_quick";
		
		case 71:
			return "seated_loop_male2_applause_standing_01";
		
		case 72:
			return "seated_loop_male2_applause_standing_02";
		
		case 73:
			return "seated_loop_male2_boo_high";
		
		case 74:
			return "seated_loop_male2_boo_low";
		
		case 75:
			return "seated_loop_male2_horrified_amused";
		
		case 76:
			return "seated_loop_male2_horrified_high";
		
		case 77:
			return "seated_loop_male2_horrified_low";
		
		case 78:
			return "seated_loop_male2_impressed_high";
		
		case 79:
			return "seated_loop_male2_impressed_low";
		
		case 80:
			return "seated_loop_male2_laugh";
		
		case 81:
			return "seated_loop_male2_laugh_02";
		
		case 82:
			return "seated_loop_male2_raunchy";
		
		case 83:
			return "seated_loop_male2_raunchy_02";
		
		case 84:
			return "seated_loop_male3_applause_quick";
		
		case 85:
			return "seated_loop_male3_applause_standing_01";
		
		case 86:
			return "seated_loop_male3_applause_standing_02";
		
		case 87:
			return "seated_loop_male3_boo_high";
		
		case 88:
			return "seated_loop_male3_boo_low";
		
		case 89:
			return "seated_loop_male3_horrified_amused";
		
		case 90:
			return "seated_loop_male3_horrified_high";
		
		case 91:
			return "seated_loop_male3_horrified_low";
		
		case 92:
			return "seated_loop_male3_impressed_high";
		
		case 93:
			return "seated_loop_male3_impressed_low";
		
		case 94:
			return "seated_loop_male3_laugh";
		
		case 95:
			return "seated_loop_male3_laugh_02";
		
		case 96:
			return "seated_loop_male3_raunchy";
		
		case 97:
			return "seated_loop_male3_raunchy_02";
		
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
		
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
		
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
		
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
		
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
		
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
		
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
		
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
		
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
		
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
		
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
		
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
		
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
		
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
		
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
		
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
		
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
		
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
		
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
		
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
		
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
		
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
		
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
		
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
		
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
		
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
		
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
		
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
		
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
		
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
		
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
		
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
		
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
		
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
		
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
		
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
		
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
		
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
		
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
		
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
		
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
		
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
		
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
		
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
		
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
		
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
		
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
		
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
		
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
		
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
		
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
		
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
		
		default:
			break;
	}
	return "seated_loop_male1_applause_quick";
}

char* func_508(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
		
		case 1:
			return "seated_loop_female0_blocked_left_a";
		
		case 2:
			return "seated_loop_female0_blocked_right_a";
		
		case 3:
			return "seated_loop_female1_blocked_a";
		
		case 4:
			return "seated_loop_female1_blocked_left_a";
		
		case 5:
			return "seated_loop_female1_blocked_right_a";
		
		case 6:
			return "seated_loop_male0_blocked_a";
		
		case 7:
			return "seated_loop_male0_blocked_left_a";
		
		case 8:
			return "seated_loop_male0_blocked_right_a";
		
		case 9:
			return "seated_loop_male2_blocked_a";
		
		case 10:
			return "seated_loop_male2_blocked_left_a";
		
		case 11:
			return "seated_loop_male2_blocked_right_a";
		
		case 12:
			return "seated_loop_male3_blocked_a";
		
		case 13:
			return "seated_loop_male3_blocked_left_a";
		
		case 14:
			return "seated_loop_male3_blocked_right_a";
		
		case 15:
			return "railingl_male1_blocked_a";
		
		case 16:
			return "railingl_male1_blocked_left_a";
		
		case 17:
			return "railingl_male1_blocked_right_a";
		
		case 18:
			return "railingr_male4_blocked_a";
		
		case 19:
			return "railingr_male4_blocked_left_a";
		
		case 20:
			return "railingr_male4_blocked_right_a";
		
		default:
			break;
	}
	return "seated_loop_male0_blocked_a";
}

int func_509(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_512(), 1))
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0, bool bParam1)
{
	return func_513(iParam0, Global_1894899->f_2, bParam1);
}

int func_511(int iParam0)
{
	if (!func_514(iParam0))
	{
		return -1;
	}
	return func_515(iParam0);
}

int func_512()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_513(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_516(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_517(iParam0, uVar0, iVar1, bParam2);
}

bool func_514(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_515(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_516(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	bVar0 = func_283() != -1;
	switch (iParam0)
	{
		case 76:
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
		
		case 105:
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
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
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

int func_517(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _NAMESPACE48::_0x32A1E3B83D501096(iParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = uParam1;
	iVar1 = uParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_519(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_520(iVar2)))
		{
			if (func_520(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_518(int iParam0)
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

int func_519(int iParam0)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_520(int iParam0)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

bool func_521(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

