#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class HintDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintDataContext"));
	}

	template <typename T = Il2CppString*> static T& Locations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(HintDataContext*))(Il2CppBase() + 0x1C45F20))(this);
	}
	template <typename T = void*> T GetEntitiesWithLocation(Il2CppString* Name) {
		return ((T (*)(HintDataContext*, Il2CppString*))(Il2CppBase() + 0x1C46280))(this, Name);
	}
	template <typename T = void*> T GetNonSpecificEntities() {
		return ((T (*)(HintDataContext*))(Il2CppBase() + 0x1C46340))(this);
	}

};

}
