#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonCustomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonCustomData"));
	}

	template <typename R = Il2CppString*> R& ComponentName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Data() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

