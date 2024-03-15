#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeJsonConverter1.h" 
#include "GuildRole.h" 

class GuildRoleJsonConverter : public TypeTypeJsonConverter1<GuildRole*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRoleJsonConverter"));
	}



};

