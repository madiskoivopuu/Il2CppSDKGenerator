#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPortalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPortalComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ExitTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ToLocationName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& WithoutParent() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& ToGlobalMap() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = bool> R& SkipGlobalMap() {
		return *(R*)((uintptr_t)this + 0x2A);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyPortalComponent*, Il2CppObject*))(Il2CppBase() + 0x189514C))(this, target);
	}

};
