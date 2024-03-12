#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class ActionDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionDataContext"));
	}

	template <typename T = Il2CppString*> static T& WithTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(ActionDataContext*))(Il2CppBase() + 0x1DC0294))(this);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(ActionDataContext*, Il2CppString*))(Il2CppBase() + 0x1DC047C))(this, tag);
	}

};

}
