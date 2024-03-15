#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "GuildRole.h" 

class GuildRoleComponent : public EnumComponent1<GuildRole*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRoleComponent"));
	}



};

