#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class MagicTriggerDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataContext"));
	}

	template <typename T = Il2CppString*> static T& CHANCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ACTOR_HP_COEF_LESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHANGE_DAMAGE_COEF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _tagsIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _targetMagicTagsIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _targetMagicNameIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(MagicTriggerDataContext*))(Il2CppBase() + 0x1A35444))(this);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35BDC))(this, tag);
	}
	template <typename T = void*> T GetEntitiesWithTargetMagicTags(Il2CppString* tag) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35C40))(this, tag);
	}
	template <typename T = void*> T GetEntitiesWithTargetMagicName(Il2CppString* name) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35CA4))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35D08))(this, name);
	}
	template <typename T = void*> T GetMorphingParts(Il2CppString* name) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppString*))(Il2CppBase() + 0x1A35DD4))(this, name);
	}
	template <typename T = uintptr_t> T MorphingTrigger(uintptr_t baseTrigger, Il2CppString* name, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(MagicTriggerDataContext*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A35F4C))(this, baseTrigger, name, parameters);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints) {
		return ((T (*)(MagicTriggerDataContext*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1A365FC))(this, blueprints);
	}

};

}
