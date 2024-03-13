#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeComponent"));
	}

	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& To() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IgnoreSlots() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FinalizeComponent*, Il2CppObject*))(Il2CppBase() + 0x16938F0))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(FinalizeComponent*, Il2CppObject*))(Il2CppBase() + 0x16939BC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FinalizeComponent*, uintptr_t))(Il2CppBase() + 0x1693ABC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FinalizeComponent*, uintptr_t))(Il2CppBase() + 0x1693BDC))(this, writer);
	}

};

