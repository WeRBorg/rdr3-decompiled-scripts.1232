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
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	aggregate.net_beat_manager.func_1();
	while (!aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		aggregate.fme_animal_tagging.func_4();
		BUILTIN::WAIT(0);
	}
	func_4();
	aggregate.aberdeenpigfarm.func_46();
}

void func_4()
{
	int iVar0;

	func_13();
	if (HUD::_0xD0976CC34002DB57(aggregate.fme_animal_tagging.func_338()))
	{
		HUD::_0xAA03F130A637D923(aggregate.fme_animal_tagging.func_338());
	}
	Global_1183537 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		*(Global_1183537->f_227[iVar0 /*26*/]) = { *(Global_1182978->f_1[iVar0 /*26*/]) };
		if (&Global_1183537->f_66[iVar0 /*20*/] > 0 && &Global_1183537->f_66[iVar0 /*20*/] < 4)
		{
			aggregate.fme_animal_tagging.func_238(iVar0, 8);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_SESSION())
			{
				aggregate.fme_animal_tagging.func_825((*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0]);
			}
			func_17(Global_1183537->f_66[iVar0 /*20*/]);
		}
		iVar0++;
	}
}

void func_9()
{
	func_20(Global_1182978);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1182978, 228, 39);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1182978), 228, "g_mpFmeManagerHostData");
	if (aggregate.dynamic_craft_scenario.func_452())
	{
		*Global_1183527 = { *((*Global_1183206)[aggregate.annesburg.func_265() /*10*/]) };
	}
	aggregate.net_camp_manager.func_23(Global_1183206);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1183206, 321, 40);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1183206)[0 /*10*/]), 321, "g_mpFmeManagerPlayerData");
	if (!aggregate.dynamic_craft_scenario.func_452())
	{
		func_26(Global_1183537);
	}
}

void func_11()
{
	switch (&Global_1182978)
	{
		case 0:
			aggregate.fishing_core.func_108();
			break;
		case 1:
			aggregate.nb_duel.func_187();
			break;
		case 2:
			func_29();
			break;
		case 3:
			aggregate.fme_king_of_the_rails.func_353();
			break;
	}
}

void func_12()
{
	switch (&Global_1183537)
	{
		case 0:
			func_31();
			break;
		case 1:
			func_32();
			break;
		case 2:
			func_33();
			break;
		case 3:
			func_34();
			break;
	}
}

void func_13()
{
	if (DATAFILE::_0x7907969497EA92F5(Global_1183537->f_443))
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1183537->f_443);
	}
}

void func_17(var uParam0)
{
	struct<20> Var0;

	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 5;
	*uParam0 = { Var0 };
}

void func_20(var uParam0)
{
	struct<228> Var0;

	Var0.f_1 = 8;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_5 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_7 = 255;
	Var0.f_1.f_1.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	*uParam0 = { Var0 };
}

void func_26(var uParam0)
{
	struct<444> Var0;

	Var0.f_1 = 16;
	Var0.f_66 = 8;
	Var0.f_66.f_1.f_1 = -1;
	Var0.f_66.f_1.f_3 = -1;
	Var0.f_66.f_1.f_7 = -1;
	Var0.f_66.f_1.f_7.f_1 = -1;
	Var0.f_66.f_1.f_10 = 5;
	Var0.f_66.f_1.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_66.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_227 = 8;
	Var0.f_227.f_1.f_1 = -1;
	Var0.f_227.f_1.f_5 = -1;
	Var0.f_227.f_1.f_5.f_1 = -1;
	Var0.f_227.f_1.f_7 = 255;
	Var0.f_227.f_1.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_227.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_436 = 5;
	*uParam0 = { Var0 };
}

void func_29()
{
	if (&Global_1183537 >= 2)
	{
		func_39();
		func_40();
		func_37(3);
	}
}

void func_31()
{
	int iVar0;

	if (&Global_1182978 > 0)
	{
		if (aggregate.dynamic_craft_scenario.func_452() && aggregate.adlerranch.func_96())
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (aggregate.fme_animal_tagging.func_18(iVar0, 8))
				{
					if (aggregate.fme_animal_tagging.func_18(iVar0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iVar0 /*20*/])->f_5))
					{
						aggregate.fme_animal_tagging.func_825((*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0]);
						func_17(Global_1183537->f_66[iVar0 /*20*/]);
					}
					else
					{
						(*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iVar0] = Global_1183527[iVar0];
					}
				}
				iVar0++;
			}
		}
		func_46();
		func_47(1);
	}
}

void func_32()
{
	if (func_38() && &Global_1182978 > 1)
	{
		aggregate.fme_animal_tagging.func_622();
		func_47(2);
	}
}

void func_33()
{
	if (&Global_1182978 > 2)
	{
		func_47(3);
	}
}

void func_34()
{
	func_49((*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/]);
	func_50();
}

void func_36(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		aggregate.fme_animal_tagging.func_825((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_37(int iParam0)
{
	Global_1182978 = iParam0;
}

bool func_38()
{
	int iVar0;

	if (!aggregate.dynamic_craft_scenario.func_182())
	{
		return false;
	}
	if (!aggregate.flow_controller.func_198())
	{
		return false;
	}
	iVar0 = 1;
	if (!func_54())
	{
		iVar0 = 0;
	}
	HUD::_0xF66090013DE648D5(aggregate.fme_animal_tagging.func_338());
	if (!HUD::_0xD0976CC34002DB57(aggregate.fme_animal_tagging.func_338()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_39()
{
	struct<7> Var0;
	struct<7> Var7;
	struct<5> Var14;
	int iVar21;

	CLOCK::_0x86A68E84E5884951(&Var0);
	Var7 = { Var0 };
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = func_55();
	CLOCK::_0x28EEACE9B43D9597(&Var7, &Var14, &Var7);
	iVar21 = 0;
	while (!aggregate.net_camp_manager.func_361(Var7, Var0) && iVar21 < 500)
	{
		CLOCK::_0x28EEACE9B43D9597(&Var7, &Var14, &Var7);
		iVar21++;
	}
	Global_1182978->f_226 = iVar21;
	Global_1182978->f_210 = { Var7 };
}

void func_40()
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	struct<5> Var15;
	int iVar22;

	uVar0 = Global_1901929->f_295.f_175;
	CLOCK::_0x86A68E84E5884951(&Var1);
	Var8 = { Var1 };
	Var8.f_3 = 0;
	Var8.f_4 = uVar0;
	Var8.f_5 = 0;
	Var8.f_6 = 0;
	Var15.f_4 = func_57();
	CLOCK::_0x28EEACE9B43D9597(&Var8, &Var15, &Var8);
	iVar22 = 0;
	while (!aggregate.net_camp_manager.func_361(Var8, Var1) && iVar22 < 500)
	{
		CLOCK::_0x28EEACE9B43D9597(&Var8, &Var15, &Var8);
		iVar22++;
	}
	Global_1182978->f_227 = iVar22;
	Global_1182978->f_217 = { Var8 };
}

void func_41()
{
	struct<7> Var0;
	int iVar7;

	if (!aggregate.annesburg.func_109() || Global_1070355->f_27249)
	{
		return;
	}
	if (!func_59(2, 30))
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	if (aggregate.net_camp_manager.func_361(Var0, Global_1182978->f_210))
	{
		iVar7 = 0;
		if (&Global_1182978->f_1[iVar7 /*26*/] != 0 && !aggregate.fme_animal_tagging.func_148())
		{
			func_61(0);
			return;
		}
		if (func_62(joaat("standard")))
		{
			func_39();
		}
		else
		{
			func_63(joaat("standard"));
		}
	}
}

void func_42()
{
	struct<7> Var0;
	int iVar7;

	if (!aggregate.annesburg.func_109() || Global_1070355->f_27249)
	{
		return;
	}
	if (!func_59(3, 30))
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	if (aggregate.net_camp_manager.func_361(Var0, Global_1182978->f_217))
	{
		iVar7 = 1;
		if (&Global_1182978->f_1[iVar7 /*26*/] != 0 && !aggregate.fme_animal_tagging.func_148())
		{
			func_61(1);
			return;
		}
		if (func_62(joaat("themed")))
		{
			func_40();
		}
		else
		{
			func_63(joaat("themed"));
		}
	}
}

void func_43()
{
	if (&Global_1183537->f_436[1] >= 8)
	{
		Global_1183537->f_436[1] = 0;
	}
	func_64(&(Global_1183537->f_436[1]));
	Global_1183537->f_436[1] = &Global_1183537->f_436[1] + 1;
}

void func_46()
{
	Global_1183537->f_443 = DATAFILE::_0xD97D8D905F1562F2(1024887829);
}

void func_47(int iParam0)
{
	Global_1183537 = iParam0;
}

void func_49(var uParam0)
{
	Global_1183537->f_442 = (Global_1183537->f_442 + 1 % 30);
	if (Global_1183537->f_442 > 0)
	{
		return;
	}
	if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_9, 1))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
		{
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_9), 1);
		}
	}
}

void func_50()
{
	if (&Global_1183537->f_436[0] >= 8)
	{
		Global_1183537->f_436[0] = 0;
	}
	func_70(&(Global_1183537->f_436[0]));
	Global_1183537->f_436[0] = &Global_1183537->f_436[0] + 1;
}

bool func_54()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1183537->f_443);
}

var func_55()
{
	var uVar0;

	uVar0 = Global_1901929->f_295.f_173;
	return uVar0;
}

var func_57()
{
	var uVar0;

	uVar0 = Global_1901929->f_295.f_174;
	return uVar0;
}

bool func_59(int iParam0, int iParam1)
{
	Global_1183537->f_436[iParam0] = &Global_1183537->f_436[iParam0] + 1;
	if (&Global_1183537->f_436[iParam0] < iParam1)
	{
		return false;
	}
	Global_1183537->f_436[iParam0] = 0;
	return true;
}

void func_61(int iParam0)
{
	if (aggregate.fme_animal_tagging_offline.func_135() != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_72(iParam0) != 0)
	{
		func_73(iParam0, 6);
	}
}

bool func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_75(func_74(iParam0));
	MISC::SET_RANDOM_SEED(iVar0);
	switch (iParam0)
	{
		case joaat("standard"):
			if (!func_76(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
		case joaat("themed"):
			if (!func_77(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
	}
	bVar4 = aggregate.net_fme_manager.func_78(iVar1, PLAYER::PLAYER_ID(), iVar2, iVar3, iVar0, 0);
	MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
	if (bVar4)
	{
		switch (iParam0)
		{
			case joaat("standard"):
				Global_1182978->f_224 = iVar1;
				break;
			case joaat("themed"):
				Global_1182978->f_225 = iVar1;
				break;
		}
	}
	return bVar4;
}

void func_63(int iParam0)
{
	var uVar0;
	struct<7> Var7;
	struct<5> Var14;

	CLOCK::_0x86A68E84E5884951(&uVar0);
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = 1;
	CLOCK::_0x28EEACE9B43D9597(&uVar0, &Var14, &Var7);
	switch (iParam0)
	{
		case joaat("standard"):
			Global_1182978->f_210 = { Var7 };
			break;
		case joaat("themed"):
			Global_1182978->f_217 = { Var7 };
			break;
	}
}

void func_64(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] == 0)
	{
		return;
	}
	switch (&Global_1182978->f_1[iParam0 /*26*/])
	{
		case 1:
			func_79(iParam0);
			break;
		case 5:
			func_80(iParam0);
			break;
		case 6:
			func_81(iParam0);
			break;
	}
}

void func_66()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1093317127, "data/events/event(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1782115362, "locations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1574313466, "location(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 454625570, "location(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -171261332, "outro");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 670816652, "respawn");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1701407264, "ui");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -310067910, "variations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1481789088, "variation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1739269194, "variation(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1648302374, "lobby_positions");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1950557689, "lobby_position(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -704316038, "lobby_position(id=%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 2005647695, ":ambient_blocking_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -75980337, ":award_mod_promo");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -13272314, ":disable_mount");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1576411076, ":duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -2068413581, ":enable_law");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1393462640, ":event_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -135059083, ":spec_cam_pos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1922656805, ":spec_cam_rot");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -185561597, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1378896287, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -994988323, ":alternative_mode");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1963437248, ":inner_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1220434501, ":intro_shard_primary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -463492762, ":lobby_duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1168414437, ":lobby_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -823479386, ":max_players");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1189568052, ":min_gangs");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 948567928, ":min_players");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1755025897, ":min_players_start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -467067774, ":relationship_type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 37194763, ":name_handle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1771940760, ":name_handle_alt");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1509074216, ":on_foot");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 2121037717, ":on_mount");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -415053522, ":outer_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 2060397848, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 221135615, ":lobby_blip_position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1777884256, ":rules_help");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1996633489, ":rules_secondary_help");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -399138777, ":script");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1434638998, ":shocking_event_radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 1388840187, ":stack_size");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 915697271, ":stat_group");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -874721119, ":text_block");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1268019774, ":toast_icon");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1641329203, ":toast_icon_dict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1102158142, ":tod_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 796959411, ":tod_end_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1068020191, ":tod_start_hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -1107031930, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -605149915, ":unlock_id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, -993857789, ":unlock_level");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 511429636, ":weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1183537->f_443, 733859289, ":xml");
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		func_82(iVar0);
		iVar0++;
	}
}

void func_70(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] == 0 && &Global_1183537->f_66[iParam0 /*20*/] == 0)
	{
		return;
	}
	if (!func_83(iParam0))
	{
		return;
	}
	switch (&Global_1183537->f_66[iParam0 /*20*/])
	{
		case 0:
			func_84(iParam0);
			break;
		case 1:
			func_85(iParam0);
			break;
		case 2:
			func_86(iParam0);
			break;
		case 3:
			func_87(iParam0);
			break;
		case 4:
			func_88(iParam0);
			break;
		case 5:
			func_89(iParam0);
			break;
		case 6:
			func_90(iParam0);
			break;
	}
}

int func_72(int iParam0)
{
	return &(Global_1182978->f_1[iParam0 /*26*/]);
}

void func_73(int iParam0, int iParam1)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] != iParam1)
	{
		Global_1182978->f_1[iParam0 /*26*/] = iParam1;
	}
}

struct<7> func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return Global_1182978->f_210;
		case joaat("themed"):
			return Global_1182978->f_217;
		default:
			break;
	}
	return Global_1182978->f_210;
}

int func_75(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;

	iVar0 = (Param0 * (Param0.f_1 * (Param0.f_2 * (Param0.f_3 + 1 * Param0.f_4 + 1))));
	return iVar0;
}

bool func_76(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[21];
	struct<2> Var26[21];
	int iVar69;
	int iVar70;

	iVar0 = func_91();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1182978->f_226 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_92(iVar2);
	iVar3 = func_93(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_92(iVar2);
		if (*uParam0 == Global_1182978->f_224)
		{
		}
		else if (func_95(*uParam0, Var26[iVar69 /*2*/], &((Var26[iVar69 /*2*/])->f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return false;
	}
	iVar70 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return false;
	}
	*uParam0 = &uVar4[iVar70];
	*uParam1 = &Var26[iVar70 /*2*/];
	*uParam2 = (Var26[iVar70 /*2*/])->f_1;
	return true;
}

bool func_77(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[10];
	struct<2> Var15[10];
	int iVar36;
	int iVar37;

	iVar0 = func_96();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1182978->f_227 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_97(iVar2);
	iVar3 = func_98(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		*uParam0 = func_97(iVar2);
		if (*uParam0 == Global_1182978->f_225)
		{
		}
		else if (func_95(*uParam0, Var15[iVar36 /*2*/], &((Var15[iVar36 /*2*/])->f_1)))
		{
			uVar4[iVar36] = *uParam0;
			iVar36++;
		}
		iVar2++;
	}
	if (iVar36 <= 0)
	{
		return false;
	}
	iVar37 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar36);
	if (iVar37 < 0 || iVar37 >= 10)
	{
		return false;
	}
	*uParam0 = &uVar4[iVar37];
	*uParam1 = &Var15[iVar37 /*2*/];
	*uParam2 = (Var15[iVar37 /*2*/])->f_1;
	return true;
}

void func_79(int iParam0)
{
	bool bVar0;

	if (func_108(iParam0, 1))
	{
		if (aggregate.dynamic_craft_scenario.func_193((Global_1183537->f_66[iParam0 /*20*/])->f_3) != -785841056)
		{
			func_73(iParam0, 5);
		}
		else if (func_110(iParam0, &bVar0))
		{
			if (bVar0)
			{
				func_73(iParam0, 6);
			}
			else
			{
				func_73(iParam0, 5);
			}
		}
	}
}

void func_80(int iParam0)
{
	struct<7> Var0;

	if (!func_111(iParam0, 1))
	{
		func_73(iParam0, 6);
		return;
	}
	if (func_108(iParam0, 8))
	{
		func_73(iParam0, 6);
		return;
	}
	if (!func_111(iParam0, 64))
	{
		CLOCK::_0x86A68E84E5884951(&Var0);
		if (aggregate.net_camp_manager.func_361(Var0, (Global_1182978->f_1[iParam0 /*26*/])->f_19))
		{
			func_73(iParam0, 6);
		}
	}
}

void func_81(int iParam0)
{
	if (!func_111(iParam0, 1))
	{
		if (VOLUME::_0xF6A8A652A6B186CD((Global_1182978->f_1[iParam0 /*26*/])->f_9.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11((Global_1182978->f_1[iParam0 /*26*/])->f_9.f_1);
		}
		func_112(Global_1182978->f_1[iParam0 /*26*/]);
	}
}

void func_82(int iParam0)
{
	if (&Global_1183537->f_1[iParam0 /*4*/] != 0)
	{
		return;
	}
	Global_1183537->f_1[iParam0 /*4*/] = func_113(iParam0);
	if (&Global_1183537->f_1[iParam0 /*4*/] == joaat("themed"))
	{
		(Global_1183537->f_1[iParam0 /*4*/])->f_3 = func_114(iParam0);
	}
}

bool func_83(int iParam0)
{
	if (aggregate.fme_animal_tagging.func_18(iParam0, 8) && &Global_1183537->f_66[iParam0 /*20*/] < 6)
	{
		if (!aggregate.dynamic_craft_scenario.func_296(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			aggregate.net_fme_manager.func_116(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_117(Global_1183537->f_227[iParam0 /*26*/], iParam0);
		}
		else
		{
			(Global_1183537->f_66[iParam0 /*20*/])->f_19++;
			if ((Global_1183537->f_66[iParam0 /*20*/])->f_19 > 120)
			{
				aggregate.net_fme_manager.func_116(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
				(Global_1183537->f_66[iParam0 /*20*/])->f_19 = 0;
			}
		}
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_296(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!aggregate.flow_controller.func_165((Global_1182978->f_1[iParam0 /*26*/])->f_5, (Global_1183537->f_66[iParam0 /*20*/])->f_7))
		{
			return false;
		}
		aggregate.net_fme_manager.func_116(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (func_120())
	{
		return false;
	}
	return true;
}

void func_84(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] > 0 && &Global_1182978->f_1[iParam0 /*26*/] < 6)
	{
		func_121(iParam0, 1);
	}
}

void func_85(int iParam0)
{
	var uVar0;
	struct<5> Var3;
	struct<7> Var8;

	if (&Global_1182978->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!aggregate.dynamic_craft_scenario.func_296(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if ((Global_1182978->f_1[iParam0 /*26*/])->f_1 != -1 && aggregate.aberdeenpigfarm.func_158((Global_1182978->f_1[iParam0 /*26*/])->f_5))
		{
			if ((aggregate.fme_animal_tagging.func_36(&Var3, (Global_1182978->f_1[iParam0 /*26*/])->f_1) && aggregate.fme_animal_tagging.func_44(&Var3)) && aggregate.fme_animal_tagging.func_45(&Var3, (Global_1182978->f_1[iParam0 /*26*/])->f_2))
			{
				aggregate.flow_controller.func_459(Var3, 2060397848, &uVar0, 1);
			}
			(Global_1183537->f_66[iParam0 /*20*/])->f_3 = (Global_1182978->f_1[iParam0 /*26*/])->f_1;
			(Global_1183537->f_66[iParam0 /*20*/])->f_7 = { (Global_1182978->f_1[iParam0 /*26*/])->f_5 };
			(Global_1183537->f_66[iParam0 /*20*/])->f_9 = (Global_1182978->f_1[iParam0 /*26*/])->f_11;
			aggregate.net_fme_manager.func_116(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
	}
	else if (&Global_1182978->f_1[iParam0 /*26*/] > 1)
	{
		if (aggregate.dynamic_craft_scenario.func_193((Global_1183537->f_66[iParam0 /*20*/])->f_3) != -785841056)
		{
			CLOCK::_0x86A68E84E5884951(&Var8);
			if (aggregate.net_camp_manager.func_361(Var8, (Global_1182978->f_1[iParam0 /*26*/])->f_12))
			{
				func_121(iParam0, 6);
				return;
			}
			func_121(iParam0, 2);
		}
		else
		{
			aggregate.fme_animal_tagging.func_238(iParam0, 1024);
			func_121(iParam0, 4);
		}
	}
}

void func_86(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (aggregate.fme_animal_tagging.func_18(iParam0, 1) && &Global_1182978->f_1[iParam0 /*26*/] > 2)
	{
		func_121(iParam0, 3);
	}
}

void func_87(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] >= 6)
	{
		if (aggregate.fme_animal_tagging.func_18(iParam0, 512))
		{
			aggregate.net_fme_manager.func_127(1024);
		}
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	if (!aggregate.fme_animal_tagging.func_18(iParam0, 512))
	{
		func_129(iParam0);
	}
	else if (!aggregate.dynamic_craft_scenario.func_296(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (aggregate.fme_animal_tagging.func_884())
		{
			aggregate.net_fme_manager.func_116(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_121(iParam0, 4);
		}
	}
}

void func_88(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	struct<10> Var14;
	int iVar24;
	int iVar25;

	if (&Global_1182978->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (aggregate.fme_animal_tagging.func_18(iParam0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	iVar0 = (Global_1182978->f_1[iParam0 /*26*/])->f_1;
	if (!aggregate.fme_animal_tagging.func_36(&Var1, iVar0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_141(Var1, -399138777, &uVar6, 1);
	SCRIPTS::REQUEST_SCRIPT(&uVar6);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(&uVar6))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_5 = 255;
	Var14.f_7 = -1;
	Var14.f_7.f_1 = -1;
	Var14.f_1 = iVar0;
	Var14 = iParam0;
	Var14.f_5 = (Global_1182978->f_1[iParam0 /*26*/])->f_7;
	Var14.f_2 = (Global_1182978->f_1[iParam0 /*26*/])->f_2;
	Var14.f_3 = (Global_1182978->f_1[iParam0 /*26*/])->f_3;
	Var14.f_4 = (Global_1182978->f_1[iParam0 /*26*/])->f_4;
	Var14.f_7 = { (Global_1183537->f_66[iParam0 /*20*/])->f_7 };
	Var14.f_9 = &Global_1183537->f_1[iVar0 /*4*/];
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var14.f_5))
	{
		Var14.f_6 = _NAMESPACE26::_0x901E0DC25080C8B9(Var14.f_5);
	}
	iVar24 = 1024;
	if (aggregate.fme_animal_tagging.func_40(Var1, 1388840187, &iVar25, 0))
	{
		iVar24 = func_133(iVar25);
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar24) == 0)
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_16(Var14.f_7, 0, 128))
	{
		return;
	}
	if (func_135((Global_1182978->f_1[iParam0 /*26*/])->f_7, (Global_1182978->f_1[iParam0 /*26*/])->f_1))
	{
		(Global_1183537->f_66[iParam0 /*20*/])->f_4 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&uVar6, &Var14, 10, iVar24);
	}
	func_121(iParam0, 5);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uVar6);
}

void func_89(int iParam0)
{
	if (&Global_1182978->f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_4))
	{
		func_121(iParam0, 6);
		return;
	}
	if (aggregate.fme_animal_tagging.func_18(iParam0, 1) && !SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
}

void func_90(int iParam0)
{
	if (!aggregate.dynamic_craft_scenario.func_296(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		aggregate.net_fme_manager.func_116(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_4))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE((Global_1183537->f_66[iParam0 /*20*/])->f_4, false))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iParam0 /*20*/])->f_4);
		}
	}
	else if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iParam0 /*20*/])->f_5))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE((Global_1183537->f_66[iParam0 /*20*/])->f_5, false))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iParam0 /*20*/])->f_5);
		}
	}
	else
	{
		if (aggregate.dynamic_craft_scenario.func_296(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			aggregate.net_fme_manager.func_116(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
		if (&Global_1182978->f_1[iParam0 /*26*/] == 6 || !aggregate.flow_controller.func_165((Global_1182978->f_1[iParam0 /*26*/])->f_5, (Global_1183537->f_66[iParam0 /*20*/])->f_7))
		{
			aggregate.fme_animal_tagging.func_825((*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam0]);
			func_17(Global_1183537->f_66[iParam0 /*20*/]);
		}
	}
}

int func_91()
{
	if (Global_1901929->f_295.f_179 == -1)
	{
		return 0;
	}
	else if (Global_1901929->f_295.f_180 == -1)
	{
		return 1;
	}
	else if (Global_1901929->f_295.f_181 == -1)
	{
		return 2;
	}
	else if (Global_1901929->f_295.f_182 == -1)
	{
		return 3;
	}
	else if (Global_1901929->f_295.f_183 == -1)
	{
		return 4;
	}
	else if (Global_1901929->f_295.f_184 == -1)
	{
		return 5;
	}
	else if (Global_1901929->f_295.f_185 == -1)
	{
		return 6;
	}
	else if (Global_1901929->f_295.f_186 == -1)
	{
		return 7;
	}
	else if (Global_1901929->f_295.f_187 == -1)
	{
		return 8;
	}
	else if (Global_1901929->f_295.f_188 == -1)
	{
		return 9;
	}
	else if (Global_1901929->f_295.f_189 == -1)
	{
		return 10;
	}
	else if (Global_1901929->f_295.f_190 == -1)
	{
		return 11;
	}
	else if (Global_1901929->f_295.f_191 == -1)
	{
		return 12;
	}
	else if (Global_1901929->f_295.f_192 == -1)
	{
		return 13;
	}
	else if (Global_1901929->f_295.f_193 == -1)
	{
		return 14;
	}
	else if (Global_1901929->f_295.f_194 == -1)
	{
		return 15;
	}
	else if (Global_1901929->f_295.f_195 == -1)
	{
		return 16;
	}
	else if (Global_1901929->f_295.f_196 == -1)
	{
		return 17;
	}
	else if (Global_1901929->f_295.f_197 == -1)
	{
		return 18;
	}
	else if (Global_1901929->f_295.f_198 == -1)
	{
		return 19;
	}
	else if (Global_1901929->f_295.f_199 == -1)
	{
		return 20;
	}
	return 21;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_179;
		case 1:
			return Global_1901929->f_295.f_180;
		case 2:
			return Global_1901929->f_295.f_181;
		case 3:
			return Global_1901929->f_295.f_182;
		case 4:
			return Global_1901929->f_295.f_183;
		case 5:
			return Global_1901929->f_295.f_184;
		case 6:
			return Global_1901929->f_295.f_185;
		case 7:
			return Global_1901929->f_295.f_186;
		case 8:
			return Global_1901929->f_295.f_187;
		case 9:
			return Global_1901929->f_295.f_188;
		case 10:
			return Global_1901929->f_295.f_189;
		case 11:
			return Global_1901929->f_295.f_190;
		case 12:
			return Global_1901929->f_295.f_191;
		case 13:
			return Global_1901929->f_295.f_192;
		case 14:
			return Global_1901929->f_295.f_193;
		case 15:
			return Global_1901929->f_295.f_194;
		case 16:
			return Global_1901929->f_295.f_195;
		case 17:
			return Global_1901929->f_295.f_196;
		case 18:
			return Global_1901929->f_295.f_197;
		case 19:
			return Global_1901929->f_295.f_198;
		case 20:
			return Global_1901929->f_295.f_199;
		default:
			break;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_201;
		case 1:
			return Global_1901929->f_295.f_202;
		case 2:
			return Global_1901929->f_295.f_203;
		case 3:
			return Global_1901929->f_295.f_204;
		case 4:
			return Global_1901929->f_295.f_205;
		case 5:
			return Global_1901929->f_295.f_206;
		case 6:
			return Global_1901929->f_295.f_207;
		case 7:
			return Global_1901929->f_295.f_208;
		case 8:
			return Global_1901929->f_295.f_209;
		case 9:
			return Global_1901929->f_295.f_210;
		case 10:
			return Global_1901929->f_295.f_211;
		case 11:
			return Global_1901929->f_295.f_212;
		case 12:
			return Global_1901929->f_295.f_213;
		case 13:
			return Global_1901929->f_295.f_214;
		case 14:
			return Global_1901929->f_295.f_215;
		case 15:
			return Global_1901929->f_295.f_216;
		case 16:
			return Global_1901929->f_295.f_217;
		case 17:
			return Global_1901929->f_295.f_218;
		case 18:
			return Global_1901929->f_295.f_219;
		case 19:
			return Global_1901929->f_295.f_220;
		case 20:
			return Global_1901929->f_295.f_221;
		default:
			break;
	}
	return -1;
}

bool func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	struct<5> Var15;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	if (aggregate.fme_animal_tagging.func_36(&Var0, iParam0))
	{
		Var5 = { Var0 };
		if (aggregate.fme_animal_tagging.func_37(&Var5))
		{
			if (aggregate.net_fme_manager.func_137(&Var5, iParam1))
			{
				aggregate.fme_animal_tagging.func_40(Var5, -1378896287, uParam3, 1);
				aggregate.fme_animal_tagging.func_40(Var5, -994988323, &iVar27, 0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_44(&Var0))
	{
		iVar21 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (aggregate.net_fme_manager.func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (aggregate.fme_animal_tagging.func_37(&Var5))
				{
					iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (aggregate.net_fme_manager.func_137(&Var10, iVar24))
							{
								aggregate.fme_animal_tagging.func_40(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									aggregate.fme_animal_tagging.func_40(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
		if (iVar25 == 0)
		{
			return false;
		}
		iVar26 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar25);
		iVar25 = 0;
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (aggregate.net_fme_manager.func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (aggregate.fme_animal_tagging.func_37(&Var5))
				{
					iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (aggregate.net_fme_manager.func_137(&Var10, iVar24))
							{
								aggregate.fme_animal_tagging.func_40(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									aggregate.fme_animal_tagging.func_40(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									if (iVar25 == iVar26)
									{
										*uParam3 = iVar22;
										aggregate.fme_animal_tagging.func_40(Var15, -1378896287, uParam2, 1);
										return true;
									}
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
	}
	return false;
}

bool func_95(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	struct<5> Var11;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	bool bVar23;

	iVar0 = -1;
	if (aggregate.net_fme_manager.func_99(iParam0, PLAYER::PLAYER_ID(), &iVar0) == 0)
	{
		*uParam1 = 0;
		if (aggregate.fme_animal_tagging.func_36(&Var1, iParam0) && aggregate.fme_animal_tagging.func_44(&Var1))
		{
			iVar16 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			Var21 = -1;
			Var21.f_1 = -1;
			while (!bVar23)
			{
				if (iVar18 > 99)
				{
					return false;
				}
				iVar17 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar16);
				Var6 = { Var1 };
				if (aggregate.net_fme_manager.func_138(&Var6, iVar17))
				{
					aggregate.fme_animal_tagging.func_40(Var6, -1378896287, uParam1, 1);
					if (aggregate.net_fme_manager.func_100(iParam0, *uParam1) == 0 && aggregate.fme_animal_tagging.func_37(&Var6))
					{
						iVar20 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var6, Var6.f_1);
						iVar19 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar20);
						Var11 = { Var6 };
						if (aggregate.net_fme_manager.func_137(&Var11, iVar19))
						{
							aggregate.fme_animal_tagging.func_40(Var11, -1378896287, uParam2, 1);
							if (aggregate.net_fme_manager.func_101(*uParam2) == 0)
							{
								Var21 = { aggregate.net_fme_manager.func_102(iParam0, *uParam1, *uParam2) };
								if (aggregate.net_fme_manager.func_103(Var21) == 0)
								{
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar18++;
			}
		}
	}
	return true;
}

int func_96()
{
	if (Global_1901929->f_295.f_222 == -1)
	{
		return 0;
	}
	else if (Global_1901929->f_295.f_223 == -1)
	{
		return 1;
	}
	else if (Global_1901929->f_295.f_224 == -1)
	{
		return 2;
	}
	else if (Global_1901929->f_295.f_225 == -1)
	{
		return 3;
	}
	else if (Global_1901929->f_295.f_226 == -1)
	{
		return 4;
	}
	else if (Global_1901929->f_295.f_227 == -1)
	{
		return 5;
	}
	else if (Global_1901929->f_295.f_228 == -1)
	{
		return 6;
	}
	else if (Global_1901929->f_295.f_229 == -1)
	{
		return 7;
	}
	else if (Global_1901929->f_295.f_230 == -1)
	{
		return 8;
	}
	else if (Global_1901929->f_295.f_231 == -1)
	{
		return 9;
	}
	return 10;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_222 + 7;
		case 1:
			return Global_1901929->f_295.f_223 + 7;
		case 2:
			return Global_1901929->f_295.f_224 + 7;
		case 3:
			return Global_1901929->f_295.f_225 + 7;
		case 4:
			return Global_1901929->f_295.f_226 + 7;
		case 5:
			return Global_1901929->f_295.f_227 + 7;
		case 6:
			return Global_1901929->f_295.f_228 + 7;
		case 7:
			return Global_1901929->f_295.f_229 + 7;
		case 8:
			return Global_1901929->f_295.f_230 + 7;
		case 9:
			return Global_1901929->f_295.f_231 + 7;
		default:
			break;
	}
	return -1;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_232;
		case 1:
			return Global_1901929->f_295.f_233;
		case 2:
			return Global_1901929->f_295.f_234;
		case 3:
			return Global_1901929->f_295.f_235;
		case 4:
			return Global_1901929->f_295.f_236;
		case 5:
			return Global_1901929->f_295.f_237;
		case 6:
			return Global_1901929->f_295.f_238;
		case 7:
			return Global_1901929->f_295.f_239;
		case 8:
			return Global_1901929->f_295.f_240;
		case 9:
			return Global_1901929->f_295.f_241;
		default:
			break;
	}
	return -1;
}

bool func_108(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && !aggregate.aberdeenpigfarm.func_175((*Global_1183206)[iVar0 /*10*/][iParam0], iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_110(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;

	vVar0 = { aggregate.fme_animal_tagging.func_33((Global_1182978->f_1[iParam0 /*26*/])->f_1, (Global_1182978->f_1[iParam0 /*26*/])->f_2) };
	if (aggregate.annesburg.func_121(vVar0))
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34((Global_1182978->f_1[iParam0 /*26*/])->f_9))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, 100f, 0, 0, MISC::GET_HASH_KEY("NET_TRAIN")))
		{
			*uParam1 = 1;
			return true;
		}
		Var3 = { vVar0 };
		Var3.f_4 = 100f;
		Var3.f_6 = MISC::GET_HASH_KEY("NET_FME_MANAGER");
		Var3.f_7 = (Global_1182978->f_1[iParam0 /*26*/])->f_4;
		Var3.f_5 = 129;
		(Global_1182978->f_1[iParam0 /*26*/])->f_9 = VOLUME::_0x183C0B6CFEFFCAE4(&Var3);
	}
	switch (VOLUME::_0xB33A604345F58202((Global_1182978->f_1[iParam0 /*26*/])->f_9))
	{
		case 3:
			(Global_1182978->f_1[iParam0 /*26*/])->f_9.f_1 = VOLUME::_0x351D71B8B72B858B((Global_1182978->f_1[iParam0 /*26*/])->f_9);
			return true;
		case 4:
			*uParam1 = 1;
			(Global_1182978->f_1[iParam0 /*26*/])->f_9 = 0;
			return true;
		default:
			break;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && aggregate.aberdeenpigfarm.func_175((*Global_1183206)[iVar0 /*10*/][iParam0], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_112(var uParam0)
{
	struct<26> Var0;

	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_113(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (aggregate.fme_animal_tagging.func_36(&Var1, iParam0))
	{
		aggregate.fme_animal_tagging.func_40(Var1, -1107031930, &iVar0, 1);
	}
	return iVar0;
}

int func_114(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 4;
	if (aggregate.fme_animal_tagging.func_36(&Var1, iParam0))
	{
		aggregate.fme_animal_tagging.func_40(Var1, -993857789, &iVar0, 0);
	}
	return iVar0;
}

void func_117(var uParam0, int iParam1)
{
	struct<12> Var0;

	if (aggregate.fme_animal_tagging_offline.func_135() == PLAYER::PLAYER_ID())
	{
		func_158(uParam0, iParam1, PLAYER::PLAYER_ID());
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 2;
		Var0.f_11 = { *uParam0 };
		Var0.f_9 = iParam1;
		func_160(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
}

bool func_120()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (aggregate.fme_animal_tagging.func_18(iVar0, 8))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_121(int iParam0, int iParam1)
{
	if (&Global_1183537->f_66[iParam0 /*20*/] != iParam1)
	{
		Global_1183537->f_66[iParam0 /*20*/] = iParam1;
	}
}

void func_128(int iParam0)
{
	if (!aggregate.dynamic_craft_scenario.func_296(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && aggregate.fme_animal_tagging.func_18(iParam0, 32))
	{
		aggregate.net_fme_manager.func_116(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (aggregate.fme_animal_tagging.func_18(iParam0, 512))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_18(iParam0, 32))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_148())
	{
		aggregate.fme_animal_tagging.func_238(iParam0, 512);
		aggregate.fme_animal_tagging.func_238(iParam0, 1024);
		return;
	}
	if (aggregate.fme_animal_tagging.func_884())
	{
		aggregate.fme_animal_tagging.func_238(iParam0, 512);
		aggregate.fme_animal_tagging.func_238(iParam0, 1024);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return;
	}
	iVar1 = _NAMESPACE26::_0x149A2751AB66AC02(iVar0);
	if (iVar1 == 1)
	{
		func_165(iParam0);
	}
	else
	{
		iVar2 = func_166(iParam0, 64, iVar0);
		if (iVar2 == iVar1)
		{
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_165(iParam0);
			}
		}
		else if (!aggregate.barcustomer_interaction.func_42(&((Global_1183537->f_66[iParam0 /*20*/])->f_16)))
		{
			aggregate.barcustomer_interaction.func_25(&((Global_1183537->f_66[iParam0 /*20*/])->f_16), 1);
		}
		else if (aggregate.fme_animal_tagging.func_181(&((Global_1183537->f_66[iParam0 /*20*/])->f_16)) > 15000)
		{
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !aggregate.dynamic_craft_scenario.func_296(iParam0, 64, iVar3))
				{
					aggregate.fme_animal_tagging.func_352(1);
				}
			}
			else
			{
				iVar5 = 0;
				iVar5 = 0;
				while (iVar5 <= 31)
				{
					iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
					if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && iVar4 != PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar0, iVar4)) && !aggregate.dynamic_craft_scenario.func_296(iParam0, 64, iVar5))
					{
						func_171(iVar4, 0, 120);
					}
					iVar5++;
				}
			}
		}
	}
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case joaat("micro"):
			return 128;
		case -1598299820:
			return 200;
		case 746035441:
			return 400;
		case joaat("mini"):
			return 512;
		case 1567969312:
			return 600;
		case 849942934:
			return 800;
		case joaat("default"):
			return 1024;
		case 662654967:
			return 1026;
		case joaat("update"):
			return 1300;
		case 356437857:
			return 1301;
		case 1444727078:
			return 1400;
		case -1152281542: /* GXTEntry: "Posse Race" */
			return 1600;
		case -2027482694:
			return 1800;
		case joaat("pause_menu_script"):
			return 2000;
		case 1371455820:
			return 2024;
		case 1230979482:
			return 2025;
		case -1298200006:
			return 2026;
		case 28140092:
			return 2027;
		case 1497760498:
			return 2047;
		case -346238945:
			return 2048;
		case 627973797:
			return 2549;
		case 1875090462:
			return 2050;
		case -1571441951:
			return 2051;
		case 141976779:
			return 2452;
		case -390588104:
			return 2053;
		case -1156795024:
			return 3000;
		case 1955050002:
			return 3001;
		case 1415704879:
			return 3002;
		case 1168642835:
			return 3081;
		case -1582256496:
			return 3088;
		case 894914127:
			return 3090;
		case -925217315:
			return 3500;
		case joaat("script_xml"):
			return 4592;
		case -299117668:
			return 4700;
		case 2134863183:
			return 5000;
		case 1442743587:
			return 5001;
		case -354964017:
			return 5400;
		case 487844664:
			return 5500;
		case -1050991852:
			return 5501;
		case -544337485:
			return 5502;
		case joaat("region"):
			return 5503;
		case 46285951:
			return 5504;
		case 838854843: /* GXTEntry: "Fishing" */
			return 5505;
		case 2122926971:
			return 5506;
		case -1475898915:
			return 6000;
		case -1644014996:
			return 6001;
		case -45677744:
			return 6002;
		case joaat("shop"):
			return 6005;
		case -192136878:
			return 6010;
		case 1517073634:
			return 6400;
		case 1495295997:
			return 6500;
		case 364255091:
			return 7000;
		case -1330320955:
			return 7001;
		case -901433337:
			return 7002;
		case 1865091110:
			return 7300;
		case 36156066:
			return 7301;
		case -1226137495:
			return 8700;
		case 1524910643:
			return 10001;
		case -1125321488:
			return 10003;
		case 2013232686:
			return 14335;
		case joaat("transition"):
			return 25500;
		case joaat("mission_creator"):
			return 40500;
		case joaat("mission"):
			return 45000;
		case 56269207:
			return 68000;
		case 992915021:
			return 1631;
		case -1294698649:
			return 3482;
		case joaat("soak_test"):
			return 4088;
		case joaat("network_bot"):
			return 4096;
		case joaat("debug_script"):
			return 4080;
		case joaat("debug_menu"):
			return 50000;
		case 708358771:
			return 65536;
		case -800826243:
			return 32768;
		case 1978046393:
			return 129;
		default:
			break;
	}
	return 0;
}

bool func_135(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 12:
		case 13:
		case 14:
			return Global_1273882->f_15 == _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
		default:
			break;
	}
	return true;
}

void func_158(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (aggregate.fme_animal_tagging_offline.func_135() != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = aggregate.net_fme_manager.func_152(uParam0->f_5);
	if (iVar0 != -1)
	{
		func_189(uParam0, iVar0, iParam1, iParam2);
		return;
	}
	iVar0 = aggregate.net_fme_manager.func_142(aggregate.dynamic_craft_scenario.func_193(uParam0->f_1));
	if (iVar0 != -1)
	{
		*(Global_1182978->f_1[iVar0 /*26*/]) = { *uParam0 };
		func_189(uParam0, iVar0, iParam1, iParam2);
	}
	else
	{
		func_189(uParam0, -1, iParam1, iParam2);
	}
}

void func_160(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 47, 5, &uParam1);
	aggregate.net_fme_manager.func_190(uParam0);
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.fme_animal_tagging.func_18(iParam0, 512))
	{
		iVar0 = func_192((Global_1183537->f_66[iParam0 /*20*/])->f_3, (Global_1182978->f_1[iParam0 /*26*/])->f_3);
		iVar1 = func_193(iVar0);
		if (func_194(3, 32, 0, iVar1, (Global_1183537->f_66[iParam0 /*20*/])->f_7, 268435458, -1, 0, 0, 0))
		{
			if (aggregate.barcustomer_interaction.func_42(&((Global_1183537->f_66[iParam0 /*20*/])->f_16)))
			{
				aggregate.fme_animal_tagging.func_290(&((Global_1183537->f_66[iParam0 /*20*/])->f_16));
			}
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam2))
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iParam2, iVar0)) && aggregate.aberdeenpigfarm.func_175((*Global_1183206)[iVar2 /*10*/][iParam0], iParam1))
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

int func_171(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (aggregate.fm_deathmatch_controller.func_2807(iVar1))
	{
		if (bParam1)
		{
			Var2 = { aggregate.aberdeenpigfarm.func_131(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar9);
			if (func_200(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_NAMESPACE26::_0xCD9E2D9BC52FD80F(iParam0, iParam2);
	}
	return 1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	var uVar47;

	if (iParam3 == PLAYER::PLAYER_ID())
	{
		func_212(uParam0, iParam1, iParam2);
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 3;
		Var0.f_11 = { *uParam0 };
		Var0.f_10 = iParam1;
		Var0.f_9 = iParam2;
		SCRIPTS::_0x31010318BA9897AC(&uVar47, iParam3);
		func_160(&Var0, uVar47);
	}
}

int func_192(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 28;
	if ((aggregate.fme_animal_tagging.func_36(&Var1, iParam0) && aggregate.fme_animal_tagging.func_37(&Var1)) && aggregate.fme_animal_tagging.func_38(&Var1, uParam1))
	{
		aggregate.fme_animal_tagging.func_39(Var1, -823479386, &iVar0, 1);
	}
	return iVar0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 32;
		case 12:
			return 34;
		case 16:
			return 36;
		case 20:
			return 38;
		case 28:
			return 42;
		default:
			break;
	}
	return 42;
}

bool func_194(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!aggregate.map_app_event_handler.func_169(iParam2, iParam3))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_148() && Global_1572887->f_106.f_75 != 8)
	{
		return false;
	}
	if (!aggregate.map_app_event_handler.func_171(Global_1273882->f_10))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	aggregate.map_app_event_handler.func_172(&Var0);
	aggregate.map_app_event_handler.func_173(iParam2, iParam3, iParam7, 1);
	aggregate.map_app_event_handler.func_174(Param4, 1);
	aggregate.map_app_event_handler.func_140(iParam6);
	aggregate.map_app_event_handler.func_140(iParam9);
	aggregate.map_app_event_handler.func_177(iParam10, 1);
	if ((aggregate.aberdeenpigfarm.func_158(Param4) && !aggregate.map_app_event_handler.func_178()) && &Global_1197951 == -1)
	{
		aggregate.map_app_event_handler.func_179(Param4);
	}
	NETWORK::_0x0AE241A4A9ADEEEC(1);
	if (iParam2 != 2)
	{
		aggregate.map_app_event_handler.func_180();
	}
	if (aggregate.map_app_event_handler.func_178())
	{
		aggregate.map_app_event_handler.func_181(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!aggregate.fme_animal_tagging.func_228(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
			{
				aggregate.dynamic_craft_scenario.func_89(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			aggregate.map_app_event_handler.func_184(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, aggregate.aberdeenpigfarm.func_103(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, aggregate.map_app_event_handler.func_186(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, aggregate.map_app_event_handler.func_188(aggregate.map_app_event_handler.func_187(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_135, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	}
	if ((!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && aggregate.map_app_event_handler.func_189(255, 0)) && !bParam8)
	{
		aggregate.fme_treasure_hunt.func_1037("NM_MATCHMAKING_WARNING");
	}
	aggregate.map_app_event_handler.func_140(9);
	return true;
}

bool func_200(int iParam0, struct<7> Param1)
{
	struct<28> Var0;
	struct<7> Var118;
	bool bVar125;
	int iVar126;

	Var0.f_27 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return false;
	}
	Var118 = { aggregate.fme_animal_tagging.func_783() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var118))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_784(Param1))
	{
		return false;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0.f_27[iVar126 /*9*/], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return false;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	aggregate.fme_animal_tagging.func_238(iParam2, 8);
	aggregate.net_fme_manager.func_116(iParam2, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	(Global_1183537->f_66[iParam2 /*20*/])->f_19 = 0;
	if (iParam1 == -1)
	{
		aggregate.net_fme_manager.func_116(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else if (!aggregate.flow_controller.func_165(uParam0->f_5, (Global_1183537->f_227[iParam2 /*26*/])->f_5))
	{
		aggregate.net_fme_manager.func_116(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else
	{
		(*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam1] = Global_1183527[iParam2];
		if (iParam1 != iParam2)
		{
			*(Global_1183537->f_66[iParam1 /*20*/]) = { *(Global_1183537->f_66[iParam2 /*20*/]) };
			aggregate.fme_animal_tagging.func_825((*(*Global_1183206)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/])[iParam2]);
			func_17(Global_1183537->f_66[iParam2 /*20*/]);
		}
		aggregate.net_fme_manager.func_116(iParam1, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

