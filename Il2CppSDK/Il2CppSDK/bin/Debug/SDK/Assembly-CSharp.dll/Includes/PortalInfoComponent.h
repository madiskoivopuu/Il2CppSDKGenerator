#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalInfoComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PortalsRank() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Players() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PortalInfoComponent*, uintptr_t))(Il2CppBase() + 0x1576F10))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PortalInfoComponent*, uintptr_t))(Il2CppBase() + 0x1576FB8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PortalInfoComponent*, uintptr_t))(Il2CppBase() + 0x1577090))(this, writer);
	}

};

}
