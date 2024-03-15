#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicsStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicsStatus"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _hunger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _thirst() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = MagicProgress*> R& _iconPrefab() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<MagicProgress*>*& _icons() {
		return *(Il2CppList<MagicProgress*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _activeCount() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 HashSet1Il2CppString*>*& _currentIconIds() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x50);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& _currentCount() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R UpdateView(GameEntity* entity, bool showHungerThirst, MagicIconShowType* showType, int64_t now) {
		return ((R (*)(MagicsStatus*, GameEntity*, bool, MagicIconShowType*, int64_t))(Il2CppBase() + 0x1A47834))(this, entity, showHungerThirst, showType, now);
	}
	template <typename R = void> R AddMagicIcon(GameEntity* entity, MagicEntity* magic, MagicDataEntity* magicData, MagicIconComponent* magicIcon, Il2CppString* iconId, Il2CppString* iconName, int64_t now, uintptr_t index) {
		return ((R (*)(MagicsStatus*, GameEntity*, MagicEntity*, MagicDataEntity*, MagicIconComponent*, Il2CppString*, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x1A485A4))(this, entity, magic, magicData, magicIcon, iconId, iconName, now, index);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(MagicsStatus*))(Il2CppBase() + 0x1A493CC))(this);
	}
	 ValueTuple2float, int64_t>* GetMagicProgress(GameEntity* entity, MagicEntity* magic, int64_t now) {
		return ((ValueTuple2float, int64_t>* (*)(MagicsStatus*, GameEntity*, MagicEntity*, int64_t))(Il2CppBase() + 0x1A48C3C))(this, entity, magic, now);
	}
	template <typename R = bool> R UpdateViewg__TryAddMagicIcon|9_0(MagicEntity* magic, MagicDataEntity* magicData, MagicIconComponent* magicIcon, uintptr_t ) {
		return ((R (*)(MagicsStatus*, MagicEntity*, MagicDataEntity*, MagicIconComponent*, uintptr_t))(Il2CppBase() + 0x1A48428))(this, magic, magicData, magicIcon, );
	}

};

