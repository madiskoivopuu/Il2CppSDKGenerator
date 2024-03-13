#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateGuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateGuildData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Language() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = GuildType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpdateGuildData*, uintptr_t))(Il2CppBase() + 0x153D4A4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UpdateGuildData*, uintptr_t))(Il2CppBase() + 0x153D528))(this, reader);
	}

};

