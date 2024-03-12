#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class BlueprintDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintDataContext"));
	}

	template <typename T = Il2CppString*> static T& Craft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(BlueprintDataContext*))(Il2CppBase() + 0x16BD2D8))(this);
	}
	template <typename T = void*> T GetEntitiesWithCraft(Il2CppString* type) {
		return ((T (*)(BlueprintDataContext*, Il2CppString*))(Il2CppBase() + 0x16BD658))(this, type);
	}
	template <typename T = void*> T GetEntitiesWithCraft_1(Il2CppString* type, int32_t maxSlots) {
		return ((T (*)(BlueprintDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x16BD718))(this, type, maxSlots);
	}

};

}
