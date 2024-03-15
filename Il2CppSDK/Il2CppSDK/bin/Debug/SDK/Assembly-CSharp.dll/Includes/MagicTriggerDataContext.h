#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class MagicTriggerDataContext : public DataContext1<MagicTriggerDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataContext"));
	}

	template <typename R = Il2CppString*> static R& CHANCE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ACTOR_HP_COEF_LESS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHANGE_DAMAGE_COEF() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 EntityIndex2MagicTriggerDataEntity*, Il2CppString*>*& _tagsIndex() {
		return *(EntityIndex2MagicTriggerDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2MagicTriggerDataEntity*, Il2CppString*>*& _targetMagicTagsIndex() {
		return *(EntityIndex2MagicTriggerDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2MagicTriggerDataEntity*, Il2CppString*>*& _targetMagicNameIndex() {
		return *(EntityIndex2MagicTriggerDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x120);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(MagicTriggerDataContext*))(Il2CppBase() + 0x1A35444))(this);
	}
	 HashSet1MagicTriggerDataEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1MagicTriggerDataEntity*>* (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35BDC))(this, tag);
	}
	 HashSet1MagicTriggerDataEntity*>* GetEntitiesWithTargetMagicTags(Il2CppString* tag) {
		return ((HashSet1MagicTriggerDataEntity*>* (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35C40))(this, tag);
	}
	 HashSet1MagicTriggerDataEntity*>* GetEntitiesWithTargetMagicName(Il2CppString* name) {
		return ((HashSet1MagicTriggerDataEntity*>* (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35CA4))(this, name);
	}
	template <typename R = MagicTriggerDataEntity*> R GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((R (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35D08))(this, name);
	}
	 ValueTuple3bool, Il2CppString*, Il2CppArray<Il2CppString*>*>* GetMorphingParts(Il2CppString* name) {
		return ((ValueTuple3bool, Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35DD4))(this, name);
	}
	template <typename R = MagicTriggerDataEntity*> R MorphingTrigger(MagicTriggerDataEntity* baseTrigger, Il2CppString* name, Il2CppArray<Il2CppString*>* parameters) {
		return ((R (*)(MagicTriggerDataContext*, MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A35F4C))(this, baseTrigger, name, parameters);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(MagicTriggerDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1A365FC))(this, blueprints);
	}

};

