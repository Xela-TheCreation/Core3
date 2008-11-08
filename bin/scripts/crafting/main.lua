--Copyright (C) 2007 <SWGEmu>
 
--This File is part of Core3.
 
--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.
 
--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.
 
--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.
 
--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.
 
--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
-- utils
-- draftschematic lua files

--RunDraftSchematicFile("config.lua") -- crafting configuration

RunDraftSchematicFile("objects/object.lua") -- basic object
RunDraftSchematicFile("objects/draftschematic.lua") -- DraftSchematic Object

-- Global creature table
DraftSchematics = { }

function DraftSchematics:addDraftSchematic(obj, crc)
	self[crc] = obj
  AddDraftSchematicToServer(obj);
end

function getDraftSchematic(crc)
	return DraftSchematics[crc]
end

-- DraftSchematics objects

-- Armorsmith
RunDraftSchematicFile("objects/draftschematics/armorsmith/main.lua")


--RunDraftSchematicFile("objects/draftschematics/weaponsmith/dlt20Rifle.lua")


RunDraftSchematicFile("objects/draftschematics/artisan/genericCraftingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/clothingCraftingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/foodCraftingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/structureCraftingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/weaponCraftingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/waterSurveyDevice.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/windCurrentSurveyingTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/chemicalSurveyDevice.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/solarEnergySurveyTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/mineralSurveyDevice.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/gasPocketSurveyDevice.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/floraSurveyTool.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/swoop.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/speederbike.lua")
RunDraftSchematicFile("objects/draftschematics/artisan/x34Landspeeder.lua")
RunDraftSchematicFile("objects/draftschematics/weaponsmith/blasterPowerHandler.lua")
RunDraftSchematicFile("objects/draftschematics/weaponsmith/blasterRifleBarrel.lua")

-- MEDIC

-- Novice Medic
RunDraftSchematicFile("objects/draftschematics/medic/novice/biologicalEffectController.lua")
RunDraftSchematicFile("objects/draftschematics/medic/novice/smallStimpackA.lua")
RunDraftSchematicFile("objects/draftschematics/medic/novice/liquidSuspension.lua")
RunDraftSchematicFile("objects/draftschematics/medic/novice/foodChemicalCraftingTool.lua")

-- Organic Chemistry 1
RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry1/actionWoundMedpackA.lua")
RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry1/healthWoundMedpackA.lua")
 
-- Organic Chemistry 2
RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry2/solidDeliveryShell.lua")
RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry2/smallStimpackB.lua")
RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry2/chemicalReleaseDurationMechanism.lua") 

-- Organic Chemistry 3
--RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry4/advLiquidSuspension.lua")
 
-- Organic Chemistry 4
--RunDraftSchematicFile("objects/draftschematics/medic/organicchemistry4/advLiquidSuspension.lua")
