#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusNameDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusNameDecorator"));
	}

	template <typename T = TextImageMonoBehaviour*> T& EntityName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TextMonoBehaviour*> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TextMonoBehaviour*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PowerIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TextMonoBehaviour*> T& Power() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HideClanForTags() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HideGuildForTags() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _clanName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _guildTag() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Nullable1int32_t>*> T& _power() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StatusNameDecorator*))(Il2CppBase() + 0x1490E28))(this);
	}
	template <typename T = void> T UpdateView(GameEntity* entity, StatusNameShow* show) {
		return ((T (*)(StatusNameDecorator*, GameEntity*, StatusNameShow*))(Il2CppBase() + 0x1490EF4))(this, entity, show);
	}

};

