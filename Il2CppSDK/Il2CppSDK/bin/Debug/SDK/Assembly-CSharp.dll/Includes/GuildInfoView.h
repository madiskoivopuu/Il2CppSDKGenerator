#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInfoView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& MemberCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& LeaderName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ServerName() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Language() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& closedClanColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Init(int64_t guildId) {
		return ((R (*)(GuildInfoView*, int64_t))(Il2CppBase() + 0x1B26B80))(this, guildId);
	}

};

