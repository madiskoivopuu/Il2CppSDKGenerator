#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Stat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Stat"));
	}

	template <typename R = bool> R& Active() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& EnterTime() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& AttackTime() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& ExitTime() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& UpdateTime() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& Scouting() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<ItemCount*>*& DestroyList() {
		return *(Il2CppList<ItemCount*>**)((uintptr_t)this + 0x60);
	}
	 Il2CppList<ItemCount*>*& KillList() {
		return *(Il2CppList<ItemCount*>**)((uintptr_t)this + 0x68);
	}
	 Il2CppList<ItemCount*>*& DeathList() {
		return *(Il2CppList<ItemCount*>**)((uintptr_t)this + 0x70);
	}
	 Il2CppList<ItemCount*>*& StolenList() {
		return *(Il2CppList<ItemCount*>**)((uintptr_t)this + 0x78);
	}

	template <typename R = Stat*> R Clone() {
		return ((R (*)(Stat*))(Il2CppBase() + 0x10C0928))(this);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Stat*, uintptr_t))(Il2CppBase() + 0x10C0B3C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Stat*, uintptr_t))(Il2CppBase() + 0x10C10E4))(this, reader);
	}

};

