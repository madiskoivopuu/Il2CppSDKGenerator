#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "MagicDataEntity.h" 

class MagicDataContext : public DataContext1<MagicDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataContext"));
	}

	template <typename R = Il2CppString*> static R& DAMAGE_INC_PERCENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MAX_HEALTH_INC_PERCENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MAX_HEALTH_INC() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IGNORE_ARMOR_PERCENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LIFE_STEAL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CREEP_DAMAGE_BONUS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PLAYER_DAMAGE_BONUS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DAMAGE_REFLECT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& COOLDOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& RUNE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = MagicTriggerDataContext*> R& _magicTriggerData() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = ConditionContext*> R& _conditions() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 EntityIndex2<MagicDataEntity*, Il2CppString*>*& _withTagIndex() {
		return *(EntityIndex2<MagicDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x120);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(MagicDataContext*))(Il2CppBase() + 0x120A488))(this);
	}
	 HashSet1<MagicDataEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<MagicDataEntity*>* (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A680))(this, tag);
	}
	template <typename R = MagicDataEntity*> R GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((R (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A6E4))(this, name);
	}
	 ValueTuple3<bool, Il2CppString*, Il2CppArray<Il2CppString*>*>* GetMorphingParts(Il2CppString* name) {
		return ((ValueTuple3<bool, Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(MagicDataContext*, Il2CppString*))(Il2CppBase() + 0x120A7B0))(this, name);
	}
	template <typename R = MagicDataEntity*> R MorphingMagic(MagicDataEntity* baseMagic, Il2CppString* name, Il2CppArray<Il2CppString*>* parameters) {
		return ((R (*)(MagicDataContext*, MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x120A928))(this, baseMagic, name, parameters);
	}
	template <typename R = void> R CreateRuneMagic(MagicDataEntity* magicData, Il2CppString* paramValue) {
		return ((R (*)(MagicDataContext*, MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x120BA74))(this, magicData, paramValue);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(MagicDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x120CDBC))(this, blueprints);
	}

};

