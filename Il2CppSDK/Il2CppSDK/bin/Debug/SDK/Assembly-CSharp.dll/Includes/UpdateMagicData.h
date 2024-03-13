#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Nullable1int64_t>*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1float>*> T& Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpdateMagicData*, uintptr_t))(Il2CppBase() + 0x153EBB8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(UpdateMagicData*, uintptr_t, bool))(Il2CppBase() + 0x153EC2C))(this, reader, checkAvailableBytes);
	}

};

