#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHelper"));
	}

	template <typename R = Il2CppString*> static R& _cooldownKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _defaultDurabilityKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _insertSymbol() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _colorTagLength() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _colorStartTagKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _colorEndTagKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _truncatingSuffix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<TripleString, Il2CppString*>*& _namesCache() {
		return *(Il2CppDictionary<TripleString, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _languageCache() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> static R ToUserTag(int64_t userId) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x1030290))(0, userId);
	}
	template <typename R = int64_t> static R FromUserTag(Il2CppString* tag) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x103048C))(0, tag);
	}
	template <typename R = Il2CppString*> static R BWFReplace(Il2CppString* text) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1030624))(0, text);
	}
	template <typename R = int32_t> static R GetUnlearnedBlueprintsCount(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0x1030AB4))(0, account);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForItem(GameEntity* avatar, Il2CppString* name) {
		return ((R (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1030B20))(0, avatar, name);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForInventoryItem(GameEntity* avatar, ItemEntity* itemEntity, InventorySlotEntity* inventoryEntity) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1031794))(0, avatar, itemEntity, inventoryEntity);
	}
	template <typename R = void> static R AddDamageDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions) {
		return ((R (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1031814))(0, entity, descriptions);
	}
	template <typename R = void> static R AddAttackPerSecondDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1031AC8))(0, entity, descriptions, prefix);
	}
	template <typename R = void> static R AddRarityDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1031E40))(0, entity, descriptions, prefix);
	}
	template <typename R = void> static R AddMagicDescription(GameEntity* avatar, Il2CppString* magicName, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix, Il2CppString* color) {
		return ((R (*)(void *, GameEntity*, Il2CppString*, Il2CppList<Il2CppString*>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10320F4))(0, avatar, magicName, descriptions, prefix, color);
	}
	 static ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetEquipSetTooltip(GameEntity* avatar, Il2CppString* equipSetName) {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1037CC0))(0, avatar, equipSetName);
	}
	template <typename R = void> static R AddMagicDescriptions(GameEntity* avatar, Il2CppArray<Il2CppString*>* magicNames, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, GameEntity*, Il2CppArray<Il2CppString*>*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1038AC4))(0, avatar, magicNames, descriptions, prefix);
	}
	template <typename R = Il2CppString*> static R GetMagicDescriptions(GameEntity* avatar, Il2CppArray<Il2CppString*>* magicNames) {
		return ((R (*)(void *, GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1038BBC))(0, avatar, magicNames);
	}
	template <typename R = void> static R AddActionDescription(GameEntity* avatar, Il2CppString* actionName, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, GameEntity*, Il2CppString*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1038EBC))(0, avatar, actionName, descriptions, prefix);
	}
	template <typename R = Il2CppString*> static R GetFormatString(Il2CppString* prefix, Il2CppString* color) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10378A4))(0, prefix, color);
	}
	template <typename R = void> static R AddTooltipParams(IToolTipEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix, Il2CppString* color) {
		return ((R (*)(void *, IToolTipEntity*, Il2CppList<Il2CppString*>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10374C8))(0, entity, descriptions, prefix, color);
	}
	template <typename R = void> static R AddRuneParameters(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions) {
		return ((R (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x103AAD4))(0, entity, descriptions);
	}
	template <typename R = void> static R AddParamsDescription(GameEntity* avatar, ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1039C34))(0, avatar, entity, descriptions, prefix);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForItemWithWarning(GameEntity* avatar, ItemEntity* entity, Il2CppString* warning) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103B0E8))(0, avatar, entity, warning);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForGhostyRune(ItemEntity* itemEntity, int64_t endTime) {
		return ((R (*)(void *, ItemEntity*, int64_t))(Il2CppBase() + 0x103B304))(0, itemEntity, endTime);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForItem_1(GameEntity* avatar, ItemEntity* itemEntity, InventorySlotEntity* inventoryEntity) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1030CA0))(0, avatar, itemEntity, inventoryEntity);
	}
	template <typename R = void> static R AddDurabilityDescriptions(GameEntity* avatar, InventorySlotEntity* slotEntity, ItemEntity* itemEntity, Il2CppList<Il2CppString*>* descriptions) {
		return ((R (*)(void *, GameEntity*, InventorySlotEntity*, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x103BD44))(0, avatar, slotEntity, itemEntity, descriptions);
	}
	 static ValueTuple2<Il2CppString*, Il2CppString*>* GetPreviewForItemOrNull(GameEntity* avatar, ItemEntity* itemEntity) {
		return ((ValueTuple2<Il2CppString*, Il2CppString*>* (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x103C6F8))(0, avatar, itemEntity);
	}
	template <typename R = Il2CppString*> static R GetParamsDescription(GameEntity* avatar, ItemEntity* entity, Il2CppString* separator) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103C7FC))(0, avatar, entity, separator);
	}
	template <typename R = Il2CppString*> static R GetUniqueParamsDescription(GameEntity* avatar, ItemEntity* entity, ItemEntity* targetEntity, Il2CppString* separator) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103C900))(0, avatar, entity, targetEntity, separator);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForItem_2(Store2DataEntity* entity) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x103CB70))(0, entity);
	}
	template <typename R = Il2CppString*> static R TruncateColorizedString(Il2CppString* fullString, int32_t maxLength, bool extendIfNeed) {
		return ((R (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x103CD30))(0, fullString, maxLength, extendIfNeed);
	}
	template <typename R = bool> static R IgnoreParamsDescription(IToolTipEntity* entity) {
		return ((R (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x1036E5C))(0, entity);
	}
	template <typename R = bool> static R IgnoreRarity(IToolTipEntity* entity) {
		return ((R (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x103BC10))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetPrefix(IToolTipEntity* entity) {
		return ((R (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x103726C))(0, entity);
	}
	template <typename R = void> static R AddHeader(IToolTipEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((R (*)(void *, IToolTipEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1036F90))(0, entity, descriptions, prefix);
	}
	template <typename R = bool> static R IgnoreDurationDescription(IToolTipEntity* entity) {
		return ((R (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x1037AC0))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetLocalDateTimeStringFromUTCTicks(int64_t timeTicks) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x103CED0))(0, timeTicks);
	}
	template <typename R = Il2CppString*> static R GetServerDateTimeStringFromTicks(int64_t timeTicks) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x103CFB8))(0, timeTicks);
	}
	template <typename R = Il2CppString*> static R GetServerDateTimeStringFromTicks_1(uintptr_t dt) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x103D090))(0, dt);
	}
	template <typename R = uintptr_t> static R GetLocalDateTimeFromUTCTicks(int64_t timeTicks) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x103D11C))(0, timeTicks);
	}
	template <typename R = Time> static R GetFormattedTimerFromTicks(int64_t timeTicks, bool showDays) {
		return ((R (*)(void *, int64_t, bool))(Il2CppBase() + 0x102EC68))(0, timeTicks, showDays);
	}
	template <typename R = Time> static R GetFormattedTimerFromSeconds(double timeSeconds, bool showSeconds, bool showMinutes, bool showHours, bool showDays) {
		return ((R (*)(void *, double, bool, bool, bool, bool))(Il2CppBase() + 0x103D1A0))(0, timeSeconds, showSeconds, showMinutes, showHours, showDays);
	}
	template <typename R = Time> static R GetFormattedShortTimerFromSeconds(double timeSeconds) {
		return ((R (*)(void *, double))(Il2CppBase() + 0x103D454))(0, timeSeconds);
	}
	template <typename R = Time> static R GetFormattedShortTimerFromTicks(int64_t timeTicks) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x103D6D0))(0, timeTicks);
	}
	template <typename R = Time> static R GetFormattedDuration(float seconds) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1037BF4))(0, seconds);
	}
	template <typename R = Time> static R GetFormattedCooldownLeft(float seconds) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x103DB5C))(0, seconds);
	}
	template <typename R = Time> static R GetFormattedDuration_1(uintptr_t timeSpan) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x103D900))(0, timeSpan);
	}
	template <typename R = bool> static R WasGPGSPreviouslyDismissed() {
		return ((R (*)(void *))(Il2CppBase() + 0x103DC54))(0);
	}
	template <typename R = bool> static R WasGamecenterPreviouslyDismissed() {
		return ((R (*)(void *))(Il2CppBase() + 0x103DCAC))(0);
	}
	template <typename R = Il2CppString*> static R ProgressToString(QuestDataEntity* questData, Il2CppString* formatStr, int32_t progress) {
		return ((R (*)(void *, QuestDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x103DD04))(0, questData, formatStr, progress);
	}
	template <typename R = Il2CppString*> static R GetCaption(QuestDataEntity* questData) {
		return ((R (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x103DF0C))(0, questData);
	}
	template <typename R = void> static R SetLocalizedCaption(uintptr_t text, QuestDataEntity* questData) {
		return ((R (*)(void *, uintptr_t, QuestDataEntity*))(Il2CppBase() + 0x103E414))(0, text, questData);
	}
	template <typename R = Il2CppString*> static R GetDescriptionText(QuestDataEntity* questData) {
		return ((R (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x103E720))(0, questData);
	}
	template <typename R = Il2CppString*> static R GetLocalizedRegionName(Il2CppString* region) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x103EC28))(0, region);
	}
	template <typename R = float> static R Median(IEnumerable1<float>* source) {
		return ((R (*)(void *, IEnumerable1<float>*))(Il2CppBase() + 0x103F6A0))(0, source);
	}
	template <typename R = double> static R Median_1(IEnumerable1<int64_t>* source) {
		return ((R (*)(void *, IEnumerable1<int64_t>*))(Il2CppBase() + 0x103F8A4))(0, source);
	}
	template <typename R = void> static R OnShowContactUs() {
		return ((R (*)(void *))(Il2CppBase() + 0x103FAB0))(0);
	}
	template <typename R = void> static R CopyToClipboard(Il2CppString* toCopyString) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x103FEA0))(0, toCopyString);
	}
	template <typename R = Il2CppString*> static R GetSettingsDiscordUrl() {
		return ((R (*)(void *))(Il2CppBase() + 0x103FF24))(0);
	}
	template <typename R = Il2CppString*> static R GetRateUsDiscordUrl() {
		return ((R (*)(void *))(Il2CppBase() + 0x103FFC0))(0);
	}
	template <typename R = int32_t> static R GetListenerNumber(uintptr_t unityEvent) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1040004))(0, unityEvent);
	}
	template <typename R = Il2CppString*> static R GetMountGradeText(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040150))(0, item);
	}
	template <typename R = Il2CppString*> static R GetMountGradeText_1(int32_t grade) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1040288))(0, grade);
	}
	template <typename R = Il2CppString*> static R GetPetGradeText(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040318))(0, item);
	}
	template <typename R = Il2CppString*> static R GetPetGradeText_1(int32_t grade) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1040450))(0, grade);
	}
	template <typename R = Il2CppString*> static R GetMountTypeLocalizedText(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x10404E0))(0, item);
	}
	template <typename R = Il2CppString*> static R GetMountTypeWithGradeLocalizedText(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040680))(0, item);
	}
	template <typename R = void> static R ShowTooltipForItem(TooltipView* tooltipView, IInventoryItem* inventoryItem) {
		return ((R (*)(void *, TooltipView*, IInventoryItem*))(Il2CppBase() + 0x1040714))(0, tooltipView, inventoryItem);
	}
	template <typename R = void> static R ShowTooltipForItem_1(TooltipView* tooltipView, ItemEntity* item, Il2CppString* warning) {
		return ((R (*)(void *, TooltipView*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1040884))(0, tooltipView, item, warning);
	}
	template <typename R = Il2CppString*> static R GetLocalizationKey(GuildRole role) {
		return ((R (*)(void *, GuildRole))(Il2CppBase() + 0x1040900))(0, role);
	}
	template <typename R = Il2CppString*> static R GetLocalizedName(GameEntity* entity, bool withGuildTag) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x10409B8))(0, entity, withGuildTag);
	}
	template <typename R = Il2CppString*> static R GetLocalizedPlayerName(GameEntity* entity, bool withGuildTag) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x1040EB4))(0, entity, withGuildTag);
	}
	template <typename R = Il2CppString*> static R GetLocalizedPlayerName_1(uintptr_t entity, bool withTag) {
		return ((R (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, entity, withTag);
	}
	template <typename R = void> static R UpdateCache() {
		return ((R (*)(void *))(Il2CppBase() + 0x1040FD0))(0);
	}
	template <typename R = Il2CppString*> static R GetNameFormatFromBlueprint(Il2CppString* blueprintName) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x104117C))(0, blueprintName);
	}
	template <typename R = Il2CppString*> static R GetLocalizedName_1(Il2CppString* name, Il2CppString* guildTag, Il2CppString* format) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1040B1C))(0, name, guildTag, format);
	}
	template <typename R = uintptr_t> static R GetSnapToPositionToBringChildIntoView(uintptr_t instance, uintptr_t child) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x10412F4))(0, instance, child);
	}
	template <typename R = uintptr_t> static R GetDurabilityProgressColor(float durabilityCoef, ItemEntity* item) {
		return ((R (*)(void *, float, ItemEntity*))(Il2CppBase() + 0x1041368))(0, durabilityCoef, item);
	}
	template <typename R = void> static R SetItemRarityView(ItemEntity* item, Il2CppArray<uintptr_t>* rarityViews) {
		return ((R (*)(void *, ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1041470))(0, item, rarityViews);
	}
	template <typename R = uintptr_t> static R GetRarityColor(Rarity rarity) {
		return ((R (*)(void *, Rarity))(Il2CppBase() + 0x1041530))(0, rarity);
	}
	template <typename R = uintptr_t> static R GetItemRarityColor(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041704))(0, item);
	}
	template <typename R = uintptr_t> static R GetItemRarityTextColor(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041798))(0, item);
	}
	template <typename R = uintptr_t> static R GetClassRarityColor(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041994))(0, item);
	}
	template <typename R = uintptr_t> static R GetClassNameRarityColor(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041B80))(0, item);
	}
	template <typename R = Icon> static R GetClassPreviewIcon(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041D74))(0, item);
	}
	template <typename R = Il2CppString*> static R GetClassRoleIconName(Il2CppString* role) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1041E30))(0, role);
	}

};

