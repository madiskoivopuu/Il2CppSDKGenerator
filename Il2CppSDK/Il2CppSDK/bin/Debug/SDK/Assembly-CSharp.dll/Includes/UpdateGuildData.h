#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateGuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateGuildData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Language() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GuildType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpdateGuildData*, uintptr_t))(Il2CppBase() + 0x153D4A4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UpdateGuildData*, uintptr_t))(Il2CppBase() + 0x153D528))(this, reader);
	}

};

