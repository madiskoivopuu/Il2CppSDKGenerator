#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveActionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Item() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& SaveEffect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& LeaveOnDeath() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SaveActionComponent*, Il2CppObject*))(Il2CppBase() + 0x1356C98))(this, targetObject);
	}

};

