#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountFuser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountFuser"));
	}

	template <typename R = int32_t> static R& SLOTS_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_GRADE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_SKILLS_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_MOUNT_COUNT_ON_4GRADE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MIN_MOUNT_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_ORDER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_AUTO_GRADE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RANDOM_INDEX() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& _slots() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& _skillSlots() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 HashSet1Il2CppString*>*& _singleSkillGroups() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& MountsCount() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& CurrentGrade() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> R& CurrentPrice() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1int32_t>*& InheritedTypeIndex() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& InheritedType() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SelectedSkillSlots() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& SelectedSkillsCount() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& MaxSkillsCount() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = Step*> R& CurrentStep() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = ItemEntity*> R& ResultMount() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& GradeUpChance() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = IMountFuseSettings*> R& Settings() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ICommonContexts*> R& World() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = int32_t> R get_MountsCount() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB7D8))(this);
	}
	template <typename R = void> R set_MountsCount(int32_t value) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB7E0))(this, value);
	}
	template <typename R = int32_t> R get_CurrentGrade() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB7E8))(this);
	}
	template <typename R = void> R set_CurrentGrade(int32_t value) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB7F0))(this, value);
	}
	template <typename R = int32_t> R get_CurrentPrice() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB7F8))(this);
	}
	template <typename R = void> R set_CurrentPrice(int32_t value) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB800))(this, value);
	}
	 Nullable1int32_t>* get_InheritedTypeIndex() {
		return ((Nullable1int32_t>* (*)(MountFuser*))(Il2CppBase() + 0x1EAB808))(this);
	}
	template <typename R = void> R set_InheritedTypeIndex(Nullable1int32_t>* value) {
		return ((R (*)(MountFuser*, Nullable1int32_t>*))(Il2CppBase() + 0x1EAB810))(this, value);
	}
	template <typename R = ItemEntity*> R get_InheritedTypeFrom() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB818))(this);
	}
	template <typename R = Il2CppString*> R get_InheritedType() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB8DC))(this);
	}
	template <typename R = void> R set_InheritedType(Il2CppString* value) {
		return ((R (*)(MountFuser*, Il2CppString*))(Il2CppBase() + 0x1EAB8E4))(this, value);
	}
	template <typename R = Il2CppArray<int32_t>*> R get_SelectedSkillSlots() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB8EC))(this);
	}
	template <typename R = void> R set_SelectedSkillSlots(Il2CppArray<int32_t>* value) {
		return ((R (*)(MountFuser*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1EAB8F4))(this, value);
	}
	template <typename R = int32_t> R get_SelectedSkillsCount() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB8FC))(this);
	}
	template <typename R = void> R set_SelectedSkillsCount(int32_t value) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB904))(this, value);
	}
	template <typename R = int32_t> R get_MaxSkillsCount() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB90C))(this);
	}
	template <typename R = void> R set_MaxSkillsCount(int32_t value) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB914))(this, value);
	}
	template <typename R = ItemEntity*> R GetSelectedSkill(int32_t index) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB91C))(this, index);
	}
	template <typename R = Step*> R get_CurrentStep() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB988))(this);
	}
	template <typename R = void> R set_CurrentStep(Step* value) {
		return ((R (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EAB990))(this, value);
	}
	template <typename R = ItemEntity*> R get_ResultMount() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB998))(this);
	}
	template <typename R = void> R set_ResultMount(ItemEntity* value) {
		return ((R (*)(MountFuser*, ItemEntity*))(Il2CppBase() + 0x1EAB9A0))(this, value);
	}
	template <typename R = float> R get_GradeUpChance() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB9A8))(this);
	}
	template <typename R = void> R set_GradeUpChance(float value) {
		return ((R (*)(MountFuser*, float))(Il2CppBase() + 0x1EAB9B0))(this, value);
	}
	template <typename R = IMountFuseSettings*> R get_Settings() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB9B8))(this);
	}
	template <typename R = void> R set_Settings(IMountFuseSettings* value) {
		return ((R (*)(MountFuser*, IMountFuseSettings*))(Il2CppBase() + 0x1EAB9C0))(this, value);
	}
	template <typename R = ICommonContexts*> R get_World() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB9C8))(this);
	}
	template <typename R = void> R set_World(ICommonContexts* value) {
		return ((R (*)(MountFuser*, ICommonContexts*))(Il2CppBase() + 0x1EAB9D0))(this, value);
	}
	template <typename R = int64_t> R get_PlayerId() {
		return ((R (*)(MountFuser*))(Il2CppBase() + 0x1EAB9D8))(this);
	}
	template <typename R = void> R set_PlayerId(int64_t value) {
		return ((R (*)(MountFuser*, int64_t))(Il2CppBase() + 0x1EAB9E0))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item(int32_t index) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAB9E8))(this, index);
	}
	template <typename R = Result*> R CanSetStep(Step* step) {
		return ((R (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EABBB8))(this, step);
	}
	template <typename R = Result*> R SetStep(Step* step) {
		return ((R (*)(MountFuser*, Step*))(Il2CppBase() + 0x1EABC78))(this, step);
	}
	template <typename R = Result*> R CanSetMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABE80))(this, slotIndex, mount);
	}
	template <typename R = Result*> R SetMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC054))(this, slotIndex, mount);
	}
	template <typename R = void> R UpdateSkillSlots(int32_t mountSlotIndex) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAC82C))(this, mountSlotIndex);
	}
	template <typename R = Result*> R CanAddMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABEFC))(this, slotIndex, mount);
	}
	template <typename R = Result*> R AddMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC2F8))(this, slotIndex, mount);
	}
	template <typename R = Result*> R CanReplaceMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EABFA4))(this, slotIndex, mount);
	}
	template <typename R = Result*> R ReplaceMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC4F4))(this, slotIndex, mount);
	}
	template <typename R = Result*> R RemoveMount(int32_t slotIndex, ItemEntity* mount) {
		return ((R (*)(MountFuser*, int32_t, ItemEntity*))(Il2CppBase() + 0x1EAC6E4))(this, slotIndex, mount);
	}
	template <typename R = Result*> R SelectInheritedType(Nullable1int32_t>* slotIndex) {
		return ((R (*)(MountFuser*, Nullable1int32_t>*))(Il2CppBase() + 0x1EACA74))(this, slotIndex);
	}
	template <typename R = int32_t> R GetSkillSlotIndex(int32_t mountSlotIndex, int32_t skillIndex) {
		return ((R (*)(MountFuser*, int32_t, int32_t))(Il2CppBase() + 0x1EACBEC))(this, mountSlotIndex, skillIndex);
	}
	template <typename R = ItemEntity*> R GetSkillSlot(int32_t skillSlotIndex) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACC30))(this, skillSlotIndex);
	}
	template <typename R = Result*> R CanSelectSkillSlot(int32_t skillSlotIndex) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACC7C))(this, skillSlotIndex);
	}
	template <typename R = Result*> R SelectSkillSlot(int32_t skillSlotIndex) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EACE4C))(this, skillSlotIndex);
	}
	template <typename R = void> R UnselectSkillSlot(int32_t skillSlotIndex) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAD068))(this, skillSlotIndex);
	}
	template <typename R = void> R UnselectSkill(int32_t index) {
		return ((R (*)(MountFuser*, int32_t))(Il2CppBase() + 0x1EAD2D4))(this, index);
	}
	template <typename R = Result*> R Fuse(ICommonContexts* world) {
		return ((R (*)(MountFuser*, ICommonContexts*))(Il2CppBase() + 0x1EAD320))(this, world);
	}
	 static ValueTuple2ItemEntity*, Result*>* ProcessFuse(ICommonContexts* world, int64_t playerId, IMountFuseSettings* settings, IList1ItemEntity*>* slots, int32_t inheritedTypeIndex, Il2CppArray<int32_t>* selectedSkillSlots) {
		return ((ValueTuple2ItemEntity*, Result*>* (*)(void *, ICommonContexts*, int64_t, IMountFuseSettings*, IList1ItemEntity*>*, int32_t, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1EADA30))(0, world, playerId, settings, slots, inheritedTypeIndex, selectedSkillSlots);
	}
	template <typename R = bool> R Fuseb__92_0(TypeRandomGroup* ss) {
		return ((R (*)(MountFuser*, TypeRandomGroup*))(Il2CppBase() + 0x1EADD20))(this, ss);
	}

};

