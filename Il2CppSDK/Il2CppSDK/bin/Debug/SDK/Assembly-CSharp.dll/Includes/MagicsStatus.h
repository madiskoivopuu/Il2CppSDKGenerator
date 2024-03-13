#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicsStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicsStatus"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _hunger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _thirst() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = MagicProgress*> T& _iconPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<MagicProgress*>*> T& _icons() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _activeCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _currentIconIds() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _currentCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T UpdateView(GameEntity* entity, bool showHungerThirst, MagicIconShowType* showType, int64_t now) {
		return ((T (*)(MagicsStatus*, GameEntity*, bool, MagicIconShowType*, int64_t))(Il2CppBase() + 0x1A47834))(this, entity, showHungerThirst, showType, now);
	}
	template <typename T = void> T AddMagicIcon(GameEntity* entity, MagicEntity* magic, MagicDataEntity* magicData, MagicIconComponent* magicIcon, Il2CppString* iconId, Il2CppString* iconName, int64_t now, uintptr_t index) {
		return ((T (*)(MagicsStatus*, GameEntity*, MagicEntity*, MagicDataEntity*, MagicIconComponent*, Il2CppString*, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x1A485A4))(this, entity, magic, magicData, magicIcon, iconId, iconName, now, index);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MagicsStatus*))(Il2CppBase() + 0x1A493CC))(this);
	}
	template <typename T = ValueTuple2float, int64_t>*> T GetMagicProgress(GameEntity* entity, MagicEntity* magic, int64_t now) {
		return ((T (*)(MagicsStatus*, GameEntity*, MagicEntity*, int64_t))(Il2CppBase() + 0x1A48C3C))(this, entity, magic, now);
	}
	template <typename T = bool> T UpdateViewg__TryAddMagicIcon|9_0(MagicEntity* magic, MagicDataEntity* magicData, MagicIconComponent* magicIcon, uintptr_t ) {
		return ((T (*)(MagicsStatus*, MagicEntity*, MagicDataEntity*, MagicIconComponent*, uintptr_t))(Il2CppBase() + 0x1A48428))(this, magic, magicData, magicIcon, );
	}

};

