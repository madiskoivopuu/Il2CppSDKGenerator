#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "ActionEntity.h" 

class ActionDataContext : public DataContext1<ActionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionDataContext"));
	}

	template <typename R = Il2CppString*> static R& WithTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(ActionDataContext*))(Il2CppBase() + 0x1DC0294))(this);
	}
	 HashSet1<ActionEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<ActionEntity*>* (*)(ActionDataContext*, Il2CppString*))(Il2CppBase() + 0x1DC047C))(this, tag);
	}

};

