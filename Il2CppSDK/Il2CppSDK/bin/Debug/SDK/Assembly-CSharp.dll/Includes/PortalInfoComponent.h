#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalInfoComponent"));
	}

	template <typename R = LobbyType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PortalsRank() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<int64_t>*> R& Players() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PortalInfoComponent*, Il2CppObject*))(Il2CppBase() + 0x1576F10))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PortalInfoComponent*, uintptr_t))(Il2CppBase() + 0x1576FB8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PortalInfoComponent*, uintptr_t))(Il2CppBase() + 0x1577090))(this, writer);
	}

};

