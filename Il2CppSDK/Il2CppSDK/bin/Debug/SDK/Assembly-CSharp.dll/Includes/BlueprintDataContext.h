#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class BlueprintDataContext : public DataContext1<BlueprintEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintDataContext"));
	}

	template <typename R = Il2CppString*> static R& Craft() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(BlueprintDataContext*))(Il2CppBase() + 0x16BD2D8))(this);
	}
	 HashSet1BlueprintEntity*>* GetEntitiesWithCraft(Il2CppString* type) {
		return ((HashSet1BlueprintEntity*>* (*)(BlueprintDataContext*, Il2CppString*))(Il2CppBase() + 0x16BD658))(this, type);
	}
	 HashSet1BlueprintEntity*>* GetEntitiesWithCraft_1(Il2CppString* type, int32_t maxSlots) {
		return ((HashSet1BlueprintEntity*>* (*)(BlueprintDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x16BD718))(this, type, maxSlots);
	}

};

