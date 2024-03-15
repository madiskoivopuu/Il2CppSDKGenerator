#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipView"));
	}

	template <typename R = uintptr_t> R& CanvasRectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _title() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _roleRoot() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _roleIcons() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _paramsContainer() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipParamView*> R& _paramViewRefab() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<TooltipParamView*>*& _paramsList() {
		return *(Il2CppList<TooltipParamView*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _skillsContainer() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = TooltipSkillView*> R& _skillViewRefab() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Il2CppList<TooltipSkillView*>*& _skillsList() {
		return *(Il2CppList<TooltipSkillView*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _previewContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _previewImage() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _previewDescription() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _previewVideoContainer() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _previewVideoPlayer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _puppetContainer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = GradeUpView*> R& _gradeUpView() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = EquipSetView*> R& _equipSetView() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _desiredOffset() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R Show(uintptr_t screenPos, Il2CppString* title, Il2CppArray<Il2CppString*>* messages) {
		return ((R (*)(TooltipView*, uintptr_t, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x14F24D0))(this, screenPos, title, messages);
	}
	template <typename R = void> R Show_1(uintptr_t screenPos, ItemEntity* item, InventorySlotEntity* inventoryEntity) {
		return ((R (*)(TooltipView*, uintptr_t, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x14F48B8))(this, screenPos, item, inventoryEntity);
	}
	template <typename R = void> R Show_2(uintptr_t screenPos, ItemEntity* item, Il2CppString* warning) {
		return ((R (*)(TooltipView*, uintptr_t, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x14F4E2C))(this, screenPos, item, warning);
	}
	template <typename R = void> R Show_3(uintptr_t screenPos, ItemEntity* item, Il2CppString* title, Il2CppArray<Il2CppString*>* messages) {
		return ((R (*)(TooltipView*, uintptr_t, ItemEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x14F6DDC))(this, screenPos, item, title, messages);
	}
	template <typename R = bool> R OpenItemRequireSpecialTooltip(ItemEntity* item, Il2CppString* warning) {
		return ((R (*)(TooltipView*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x14F6C64))(this, item, warning);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TooltipView*))(Il2CppBase() + 0x14F93B0))(this);
	}
	template <typename R = void> R ShowPlayerStats(uintptr_t screenPos) {
		return ((R (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F53C8))(this, screenPos);
	}
	template <typename R = void> R ShowMountStats(uintptr_t screenPos) {
		return ((R (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F586C))(this, screenPos);
	}
	template <typename R = void> R ShowPetStats(uintptr_t screenPos) {
		return ((R (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F5C68))(this, screenPos);
	}
	template <typename R = uintptr_t> R UpdatePosition(uintptr_t screenPos) {
		return ((R (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F6BC8))(this, screenPos);
	}
	template <typename R = void> R ShowParam(Il2CppString* icon, Il2CppString* name, Il2CppString* description, int32_t index) {
		return ((R (*)(TooltipView*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x14F9518))(this, icon, name, description, index);
	}
	template <typename R = void> R ShowSkill(ItemEntity* skill, int32_t index) {
		return ((R (*)(TooltipView*, ItemEntity*, int32_t))(Il2CppBase() + 0x14F8EC8))(this, skill, index);
	}
	template <typename R = void> R SetupPuppet(GameEntity* avatar, ItemEntity* item) {
		return ((R (*)(TooltipView*, GameEntity*, ItemEntity*))(Il2CppBase() + 0x14F79D0))(this, avatar, item);
	}
	template <typename R = void> R SetupEquipSet(uintptr_t screenPos, GameEntity* avatar, Il2CppString* setName) {
		return ((R (*)(TooltipView*, uintptr_t, GameEntity*, Il2CppString*))(Il2CppBase() + 0x14F7CEC))(this, screenPos, avatar, setName);
	}
	template <typename R = void> R SetupGradeUp(uintptr_t screenPos, GameEntity* avatar, GradeUpComponent* gradeUpComponent) {
		return ((R (*)(TooltipView*, uintptr_t, GameEntity*, GradeUpComponent*))(Il2CppBase() + 0x14F7F30))(this, screenPos, avatar, gradeUpComponent);
	}
	template <typename R = void> R SetupPreviewImage(ItemEntity* item) {
		return ((R (*)(TooltipView*, ItemEntity*))(Il2CppBase() + 0x14F7770))(this, item);
	}
	template <typename R = void> R SetupPreviewVideo(ItemEntity* item) {
		return ((R (*)(TooltipView*, ItemEntity*))(Il2CppBase() + 0x14F74B4))(this, item);
	}
	template <typename R = uintptr_t> R GetAdjustedPosition(uintptr_t screenPos) {
		return ((R (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F6954))(this, screenPos);
	}

};

