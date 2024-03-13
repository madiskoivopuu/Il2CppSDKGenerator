#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildEventTypeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildEventTypeComponent"));
	}

	template <typename T = GuildEventType*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

