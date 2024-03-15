#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeJsonConverter1.h" 
#include "GuildType.h" 

class GuildTypeJsonConverter : public TypeTypeJsonConverter1<GuildType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildTypeJsonConverter"));
	}



};

