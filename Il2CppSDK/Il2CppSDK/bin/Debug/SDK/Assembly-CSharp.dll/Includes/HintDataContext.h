#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "HintEntity.h" 

class HintDataContext : public DataContext1<HintEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintDataContext"));
	}

	template <typename R = Il2CppString*> static R& Locations() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(HintDataContext*))(Il2CppBase() + 0x1C45F20))(this);
	}
	 HashSet1<HintEntity*>* GetEntitiesWithLocation(Il2CppString* Name) {
		return ((HashSet1<HintEntity*>* (*)(HintDataContext*, Il2CppString*))(Il2CppBase() + 0x1C46280))(this, Name);
	}
	 HashSet1<HintEntity*>* GetNonSpecificEntities() {
		return ((HashSet1<HintEntity*>* (*)(HintDataContext*))(Il2CppBase() + 0x1C46340))(this);
	}

};

