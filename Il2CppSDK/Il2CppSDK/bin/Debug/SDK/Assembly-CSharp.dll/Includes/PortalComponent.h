#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExitTagIn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ExitTagOut() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ToLocationName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Disabled() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& WithoutParent() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& ShieldRevealTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Points() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& PointIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ToGlobalMap() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& SkipGlobalMap() {
		return *(T*)((uintptr_t)this + 0x45);
	}

	template <typename T = uintptr_t> T GetPoint() {
		return ((T (*)(PortalComponent*))(Il2CppBase() + 0x1576D88))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PortalComponent*, uintptr_t))(Il2CppBase() + 0x1576E18))(this, targetObject);
	}

};

}
