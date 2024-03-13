#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class MagicDataContext : public DataContext1<MagicDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataContext"));
	}

	template <typename T = Il2CppString*> static T& DAMAGE_INC_PERCENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MAX_HEALTH_INC_PERCENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MAX_HEALTH_INC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IGNORE_ARMOR_PERCENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LIFE_STEAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CREEP_DAMAGE_BONUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PLAYER_DAMAGE_BONUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DAMAGE_REFLECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COOLDOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RUNE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerDataContext*> T& _magicTriggerData() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = ConditionContext*> T& _conditions() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2MagicDataEntity*, Il2CppString*>*> T& _withTagIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(MagicDataContext*))(Il2CppBase() + 0x120A488))(this);
	}
	template <typename T = HashSet1MagicDataEntity*>*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A680))(this, tag);
	}
	template <typename T = MagicDataEntity*> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A6E4))(this, name);
	}
	template <typename T = ValueTuple3bool, Il2CppString*, Il2CppArray<uintptr_t>*>*> T GetMorphingParts(Il2CppString* name) {
		return ((T (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A7B0))(this, name);
	}
	template <typename T = MagicDataEntity*> T MorphingMagic(MagicDataEntity* baseMagic, Il2CppString* name, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(MagicDataContext*, MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x120A928))(this, baseMagic, name, parameters);
	}
	template <typename T = void> T CreateRuneMagic(MagicDataEntity* magicData, Il2CppString* paramValue) {
		return ((T (*)(MagicDataContext*, MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x120BA74))(this, magicData, paramValue);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(MagicDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x120CDBC))(this, blueprints);
	}

};

