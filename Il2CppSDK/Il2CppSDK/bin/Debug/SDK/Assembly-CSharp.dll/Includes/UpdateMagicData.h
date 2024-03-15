#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& UseCount() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	 Nullable1int64_t>*& StartTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1float>*& Duration() {
		return *(Nullable1float>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpdateMagicData*, uintptr_t))(Il2CppBase() + 0x153EBB8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(UpdateMagicData*, uintptr_t, bool))(Il2CppBase() + 0x153EC2C))(this, reader, checkAvailableBytes);
	}

};

