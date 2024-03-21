#pragma once

#include "EnumComponent1.h"


class GuildRoleComponent : public EnumComponent1<GuildRole> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRoleComponent"));
	}

};};
