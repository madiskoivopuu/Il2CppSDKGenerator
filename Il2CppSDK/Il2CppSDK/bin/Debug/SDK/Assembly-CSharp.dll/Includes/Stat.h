#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Stat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Stat"));
	}

	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& EnterTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& AttackTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& ExitTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& UpdateTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Scouting() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<ItemCount*>*> T& DestroyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<ItemCount*>*> T& KillList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<ItemCount*>*> T& DeathList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<ItemCount*>*> T& StolenList() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = Stat*> T Clone() {
		return ((T (*)(Stat*))(Il2CppBase() + 0x10C0928))(this);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Stat*, uintptr_t))(Il2CppBase() + 0x10C0B3C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Stat*, uintptr_t))(Il2CppBase() + 0x10C10E4))(this, reader);
	}

};

