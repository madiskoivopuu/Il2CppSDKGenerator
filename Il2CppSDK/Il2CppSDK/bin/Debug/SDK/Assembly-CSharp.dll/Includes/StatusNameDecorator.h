#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusNameDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusNameDecorator"));
	}

	template <typename R = TextImageMonoBehaviour*> R& EntityName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TextMonoBehaviour*> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextMonoBehaviour*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& PowerIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextMonoBehaviour*> R& Power() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HideClanForTags() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HideGuildForTags() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _clanName() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _guildTag() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Nullable1int32_t>*& _power() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(StatusNameDecorator*))(Il2CppBase() + 0x1490E28))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* entity, StatusNameShow* show) {
		return ((R (*)(StatusNameDecorator*, GameEntity*, StatusNameShow*))(Il2CppBase() + 0x1490EF4))(this, entity, show);
	}

};

