#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreatePointData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreatePointData"));
	}

	template <typename R = bool> R& Update() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int64_t>*& EndTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1int64_t>*& ResetTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x28);
	}
	 Nullable1int64_t>*& ClanId() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreatePointData*, uintptr_t))(Il2CppBase() + 0x1BCD09C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreatePointData*, uintptr_t))(Il2CppBase() + 0x1BCD130))(this, reader);
	}

};

