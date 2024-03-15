#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionActiveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionActiveComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CollisionActiveComponent*, Il2CppObject*))(Il2CppBase() + 0xE23A64))(this, targetObject);
	}

};

