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
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	Local_13.f_1 = { ScriptParam_0 };
	func_1();
	while (!aggregate.aberdeenpigfarm.func_49(0, 0) && Local_13 != 5)
	{
		func_3(&Local_13);
		BUILTIN::WAIT(0);
	}
	aggregate.aberdeenpigfarm.func_46();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

void func_3(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(iParam0->f_1.f_1), iVar0))
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				SCRIPTS::_0xD426E2E3288469D6(&(iParam0->f_1.f_1), iVar0);
			}
		}
		iVar0++;
	}
	if (*iParam0 > 0)
	{
		if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > 15000)
		{
			aggregate.coffee_drinking.func_5(5, iParam0);
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (NETWORK::_0xE404BFF0ABA23CDC(&(iParam0->f_1.f_1)))
			{
				aggregate.coffee_drinking.func_5(1, iParam0);
				iParam0->f_6 = MISC::GET_GAME_TIMER();
				NETWORK::_0xC505036A35AFD01B(iParam0->f_1.f_3);
			}
			break;
		case 1:
			if (NETWORK::_0xC223D299C670413D(1, iParam0->f_1.f_4, 0, -1))
			{
				aggregate.coffee_drinking.func_5(2, iParam0);
			}
			break;
		case 2:
			if (NETWORK::_0xA021095C983F20D8())
			{
			}
			else
			{
				aggregate.coffee_drinking.func_5(3, iParam0);
			}
			break;
		case 3:
			if (NETWORK::_0x6D87BA8EF15226CD())
			{
				aggregate.coffee_drinking.func_5(4, iParam0);
			}
			else
			{
				aggregate.coffee_drinking.func_5(1, iParam0);
			}
			break;
		case 4:
			if (NETWORK::_0x277865A734918AE6())
			{
				if (!NETWORK::_0x0B6B4507AC5EA8B8())
				{
					if (!NETWORK::_0x1BB50CD340A996E6())
					{
						NETWORK::_0x101F538C25ABB39A(0, 0);
					}
				}
				aggregate.coffee_drinking.func_5(5, iParam0);
			}
			else
			{
				aggregate.coffee_drinking.func_5(1, iParam0);
			}
			break;
		case 5:
			break;
	}
}

