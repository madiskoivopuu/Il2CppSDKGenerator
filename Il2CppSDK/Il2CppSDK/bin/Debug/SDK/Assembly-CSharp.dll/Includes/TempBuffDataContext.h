#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class TempBuffDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffDataContext"));
	}

	template <typename T = Il2CppString*> static T& _active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _uniqueLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OBT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& QA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& _serverLifeTimeGroup() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(TempBuffDataContext*))(Il2CppBase() + 0x16AF808))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithUniqueLookup(Il2CppString* uniqueLookup) {
		return ((T (*)(TempBuffDataContext*, Il2CppString*))(Il2CppBase() + 0x16AFD50))(this, uniqueLookup);
	}
	template <typename T = uintptr_t> T GetActiveNow(uintptr_t world, Il2CppString* uniqueLookup) {
		return ((T (*)(TempBuffDataContext*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16AFE2C))(this, world, uniqueLookup);
	}
	template <typename T = uintptr_t> T GetEntityWithServerLifeTime() {
		return ((T (*)(TempBuffDataContext*))(Il2CppBase() + 0x16B003C))(this);
	}

};

}
