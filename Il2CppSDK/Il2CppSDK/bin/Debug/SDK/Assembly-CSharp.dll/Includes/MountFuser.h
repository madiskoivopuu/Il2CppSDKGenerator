#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountFuser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountFuser"));
	}

	template <typename T = int32_t> static T& SLOTS_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_GRADE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SKILLS_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_MOUNT_COUNT_ON_4GRADE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MIN_MOUNT_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_ORDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_AUTO_GRADE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RANDOM_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _slots() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _skillSlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _singleSkillGroups() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MountsCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& CurrentGrade() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& CurrentPrice() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1int32_t>*> T& InheritedTypeIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& InheritedType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelectedSkillSlots() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SelectedSkillsCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& MaxSkillsCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Step*> T& CurrentStep() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = ItemEntity*> T& ResultMount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& GradeUpChance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = IMountFuseSettings*> T& Settings() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = ICommonContexts*> T& World() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_MountsCount() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB7D8))(this);
	}
	template <typename T = void> T set_MountsCount(int32_t value) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB7E0))(this, value);
	}
	template <typename T = int32_t> T get_CurrentGrade() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB7E8))(this);
	}
	template <typename T = void> T set_CurrentGrade(int32_t value) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB7F0))(this, value);
	}
	template <typename T = int32_t> T get_CurrentPrice() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB7F8))(this);
	}
	template <typename T = void> T set_CurrentPrice(int32_t value) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB800))(this, value);
	}
	template <typename T = Nullable1int32_t>*> T get_InheritedTypeIndex() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB808))(this);
	}
	template <typename T = void> T set_InheritedTypeIndex(Nullable1int32_t>* value) {
		return ((T (*)(MountFuser*, Nullable1int32_t>*))(Il2CppBase() + 0x1EAB810))(this, value);
	}
	template <typename T = ItemEntity*> T get_InheritedTypeFrom() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB818))(this);
	}
	template <typename T = Il2CppString*> T get_InheritedType() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB8DC))(this);
	}
	template <typename T = void> T set_InheritedType(Il2CppString* value) {
		return ((T (*)(MountFuser*, Il2CppString*))(Il2CppBase() + 0x1EAB8E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SelectedSkillSlots() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB8EC))(this);
	}
	template <typename T = void> T set_SelectedSkillSlots(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MountFuser*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EAB8F4))(this, value);
	}
	template <typename T = int32_t> T get_SelectedSkillsCount() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB8FC))(this);
	}
	template <typename T = void> T set_SelectedSkillsCount(int32_t value) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB904))(this, value);
	}
	template <typename T = int32_t> T get_MaxSkillsCount() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB90C))(this);
	}
	template <typename T = void> T set_MaxSkillsCount(int32_t value) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB914))(this, value);
	}
	template <typename T = ItemEntity*> T GetSelectedSkill(int32_t index) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB91C))(this, index);
	}
	template <typename T = Step*> T get_CurrentStep() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB988))(this);
	}
	template <typename T = void> T set_CurrentStep(Step* value) {
		return ((T (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EAB990))(this, value);
	}
	template <typename T = ItemEntity*> T get_ResultMount() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB998))(this);
	}
	template <typename T = void> T set_ResultMount(ItemEntity* value) {
		return ((T (*)(MountFuser*, ItemEntity*))(Il2CppBase() + 0x1EAB9A0))(this, value);
	}
	template <typename T = float> T get_GradeUpChance() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB9A8))(this);
	}
	template <typename T = void> T set_GradeUpChance(float value) {
		return ((T (*)(MountFuser*, float))(Il2CppBase() + 0x1EAB9B0))(this, value);
	}
	template <typename T = IMountFuseSettings*> T get_Settings() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB9B8))(this);
	}
	template <typename T = void> T set_Settings(IMountFuseSettings* value) {
		return ((T (*)(MountFuser*, IMountFuseSettings*))(Il2CppBase() + 0x1EAB9C0))(this, value);
	}
	template <typename T = ICommonContexts*> T get_World() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB9C8))(this);
	}
	template <typename T = void> T set_World(ICommonContexts* value) {
		return ((T (*)(MountFuser*, ICommonContexts*))(Il2CppBase() + 0x1EAB9D0))(this, value);
	}
	template <typename T = int64_t> T get_PlayerId() {
		return ((T (*)(MountFuser*))(Il2CppBase() + 0x1EAB9D8))(this);
	}
	template <typename T = void> T set_PlayerId(int64_t value) {
		return ((T (*)(MountFuser*, int64_t))(Il2CppBase() + 0x1EAB9E0))(this, value);
	}
	template <typename T = ItemEntity*> T get_Item(int32_t index) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB9E8))(this, index);
	}
	template <typename T = Result*> T CanSetStep(Step* step) {
		return ((T (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EABBB8))(this, step);
	}
	template <typename T = Result*> T SetStep(Step* step) {
		return ((T (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EABC78))(this, step);
	}
	template <typename T = Result*> T CanSetMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABE80))(this, slotIndex, mount);
	}
	template <typename T = Result*> T SetMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC054))(this, slotIndex, mount);
	}
	template <typename T = void> T UpdateSkillSlots(int32_t mountSlotIndex) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAC82C))(this, mountSlotIndex);
	}
	template <typename T = Result*> T CanAddMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABEFC))(this, slotIndex, mount);
	}
	template <typename T = Result*> T AddMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC2F8))(this, slotIndex, mount);
	}
	template <typename T = Result*> T CanReplaceMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABFA4))(this, slotIndex, mount);
	}
	template <typename T = Result*> T ReplaceMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC4F4))(this, slotIndex, mount);
	}
	template <typename T = Result*> T RemoveMount(int32_t slotIndex, ItemEntity* mount) {
		return ((T (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC6E4))(this, slotIndex, mount);
	}
	template <typename T = Result*> T SelectInheritedType(Nullable1int32_t>* slotIndex) {
		return ((T (*)(MountFuser*, Nullable1int32_t>*))(Il2CppBase() + 0x1EACA74))(this, slotIndex);
	}
	template <typename T = int32_t> T GetSkillSlotIndex(int32_t mountSlotIndex, int32_t skillIndex) {
		return ((T (*)(MountFuser*, int32_t, int32_t))(Il2CppBase() + 0x1EACBEC))(this, mountSlotIndex, skillIndex);
	}
	template <typename T = ItemEntity*> T GetSkillSlot(int32_t skillSlotIndex) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACC30))(this, skillSlotIndex);
	}
	template <typename T = Result*> T CanSelectSkillSlot(int32_t skillSlotIndex) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACC7C))(this, skillSlotIndex);
	}
	template <typename T = Result*> T SelectSkillSlot(int32_t skillSlotIndex) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACE4C))(this, skillSlotIndex);
	}
	template <typename T = void> T UnselectSkillSlot(int32_t skillSlotIndex) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAD068))(this, skillSlotIndex);
	}
	template <typename T = void> T UnselectSkill(int32_t index) {
		return ((T (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAD2D4))(this, index);
	}
	template <typename T = Result*> T Fuse(ICommonContexts* world) {
		return ((T (*)(MountFuser*, ICommonContexts*))(Il2CppBase() + 0x1EAD320))(this, world);
	}
	template <typename T = ValueTuple2ItemEntity*, Result*>*> static T ProcessFuse(ICommonContexts* world, int64_t playerId, IMountFuseSettings* settings, IList1ItemEntity*>* slots, int32_t inheritedTypeIndex, Il2CppArray<uintptr_t>* selectedSkillSlots) {
		return ((T (*)(void *, ICommonContexts*, int64_t, IMountFuseSettings*, IList1ItemEntity*>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EADA30))(0, world, playerId, settings, slots, inheritedTypeIndex, selectedSkillSlots);
	}
	template <typename T = bool> T Fuseb__92_0(TypeRandomGroup* ss) {
		return ((T (*)(MountFuser*, TypeRandomGroup*))(Il2CppBase() + 0x1EADD20))(this, ss);
	}

};

