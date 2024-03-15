#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& To() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IgnoreSlots() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FinalizeComponent*, Il2CppObject*))(Il2CppBase() + 0x16938F0))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(FinalizeComponent*, Il2CppObject*))(Il2CppBase() + 0x16939BC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FinalizeComponent*, uintptr_t))(Il2CppBase() + 0x1693ABC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FinalizeComponent*, uintptr_t))(Il2CppBase() + 0x1693BDC))(this, writer);
	}

};

