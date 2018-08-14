-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema metropol
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema metropol
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `metropol` DEFAULT CHARACTER SET utf8 ;
USE `metropol` ;

-- -----------------------------------------------------
-- Table `metropol`.`status`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`status` (
  `statusID` INT(11) NOT NULL AUTO_INCREMENT,
  `statusName` VARCHAR(30) NOT NULL,
  `statusProperties` VARCHAR(35) NULL DEFAULT NULL,
  PRIMARY KEY (`statusID`))
ENGINE = InnoDB
AUTO_INCREMENT = 4
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`client`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`client` (
  `clientID` INT(11) NOT NULL AUTO_INCREMENT,
  `clientSurname` VARCHAR(20) NOT NULL,
  `clientName` VARCHAR(15) NOT NULL,
  `clientForename` VARCHAR(15) NOT NULL,
  `clientBirthdate` DATE NOT NULL,
  `clientStat` ENUM('Чоловіча', 'Жіноча') NOT NULL,
  `clientDocument` VARCHAR(25) NOT NULL,
  `clientSerNumber` VARCHAR(10) NOT NULL,
  `clientPhone` VARCHAR(16) NOT NULL,
  `clientAddress` VARCHAR(60) NULL DEFAULT NULL,
  `clientStatusID` INT(11) NOT NULL,
  PRIMARY KEY (`clientID`),
  INDEX `fk_client_status_idx` (`clientStatusID` ASC),
  CONSTRAINT `fk_client_status`
    FOREIGN KEY (`clientStatusID`)
    REFERENCES `metropol`.`status` (`statusID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 6
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`eat`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`eat` (
  `eatID` INT(11) NOT NULL AUTO_INCREMENT,
  `eatType` VARCHAR(10) NOT NULL,
  `eatPrice` INT(11) NOT NULL,
  `eatProperties` VARCHAR(90) NULL DEFAULT NULL,
  PRIMARY KEY (`eatID`))
ENGINE = InnoDB
AUTO_INCREMENT = 7
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`nomertype`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`nomertype` (
  `nomerTypeID` INT(11) NOT NULL AUTO_INCREMENT,
  `nomerTypeType` VARCHAR(25) NOT NULL,
  `nomerTypePlaces` INT(11) NOT NULL,
  `nomerTypePrice` INT(11) NOT NULL,
  `nomerTypeProperties` VARCHAR(90) NULL DEFAULT NULL,
  PRIMARY KEY (`nomerTypeID`))
ENGINE = InnoDB
AUTO_INCREMENT = 7
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`nomer`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`nomer` (
  `nomerID` INT(11) NOT NULL AUTO_INCREMENT,
  `nomerRoom` INT(11) NOT NULL,
  `nomerPoverh` INT(11) NOT NULL,
  `nomerPhone` VARCHAR(16) NOT NULL,
  `nomerProperties` VARCHAR(45) NULL DEFAULT NULL,
  `nomerNomerTypeID` INT(11) NOT NULL,
  PRIMARY KEY (`nomerID`),
  INDEX `fk_nomer_nomerType1_idx` (`nomerNomerTypeID` ASC),
  CONSTRAINT `fk_nomer_nomerType1`
    FOREIGN KEY (`nomerNomerTypeID`)
    REFERENCES `metropol`.`nomertype` (`nomerTypeID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 43
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`nomerzdacha`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`nomerzdacha` (
  `nomerZdachaID` INT(11) NOT NULL AUTO_INCREMENT,
  `nomerZdachaDateFrom` DATE NOT NULL,
  `nomerZdachaDateTo` DATE NOT NULL,
  `nomerZdachaBron` ENUM('Здача', 'Бронь') NOT NULL,
  `nomerZdachaNomerID` INT(11) NOT NULL,
  `nomerZdachaPayment` ENUM('YES', 'NO') NOT NULL,
  `nomerZdachaPeoples` INT(11) NOT NULL,
  PRIMARY KEY (`nomerZdachaID`),
  INDEX `fk_nomerZdacha_nomer1_idx` (`nomerZdachaNomerID` ASC),
  CONSTRAINT `fk_nomerZdacha_nomer1`
    FOREIGN KEY (`nomerZdachaNomerID`)
    REFERENCES `metropol`.`nomer` (`nomerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 11
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`clientinnomer`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`clientinnomer` (
  `clientInNomerID` INT(11) NOT NULL AUTO_INCREMENT,
  `clientInNomerClientID` INT(11) NOT NULL,
  `clientInNomerNomerZdachaID` INT(11) NOT NULL,
  `clientInNomerEatID` INT(11) NOT NULL,
  PRIMARY KEY (`clientInNomerID`),
  INDEX `fk_client_has_nomerZdacha_nomerZdacha1_idx` (`clientInNomerNomerZdachaID` ASC),
  INDEX `fk_client_has_nomerZdacha_client1_idx` (`clientInNomerClientID` ASC),
  INDEX `fk_clientInNomer_eat1_idx` (`clientInNomerEatID` ASC),
  CONSTRAINT `fk_clientInNomer_eat1`
    FOREIGN KEY (`clientInNomerEatID`)
    REFERENCES `metropol`.`eat` (`eatID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_client_has_nomerZdacha_client1`
    FOREIGN KEY (`clientInNomerClientID`)
    REFERENCES `metropol`.`client` (`clientID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_client_has_nomerZdacha_nomerZdacha1`
    FOREIGN KEY (`clientInNomerNomerZdachaID`)
    REFERENCES `metropol`.`nomerzdacha` (`nomerZdachaID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 21
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`posluga`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`posluga` (
  `poslugaID` INT(11) NOT NULL AUTO_INCREMENT,
  `poslugaName` VARCHAR(30) NOT NULL,
  `poslugaPrice` INT(11) NOT NULL,
  `poslugaProperties` VARCHAR(45) NULL DEFAULT NULL,
  PRIMARY KEY (`poslugaID`))
ENGINE = InnoDB
AUTO_INCREMENT = 6
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`clientposluga`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`clientposluga` (
  `clientPoslugaID` INT(11) NOT NULL AUTO_INCREMENT,
  `clientPoslugaClientID` INT(11) NOT NULL,
  `clientPoslugaPoslugaID` INT(11) NOT NULL,
  `clientPoslugaDate` DATETIME NOT NULL,
  `clientPoslugaPayment` ENUM('YES', 'NO') NULL DEFAULT NULL,
  PRIMARY KEY (`clientPoslugaID`),
  INDEX `fk_client_has_posluga_posluga1_idx` (`clientPoslugaPoslugaID` ASC),
  INDEX `fk_client_has_posluga_client1_idx` (`clientPoslugaClientID` ASC),
  CONSTRAINT `fk_client_has_posluga_client1`
    FOREIGN KEY (`clientPoslugaClientID`)
    REFERENCES `metropol`.`client` (`clientID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_client_has_posluga_posluga1`
    FOREIGN KEY (`clientPoslugaPoslugaID`)
    REFERENCES `metropol`.`posluga` (`poslugaID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 6
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`payment`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`payment` (
  `paymentID` INT(11) NOT NULL AUTO_INCREMENT,
  `paymentName` VARCHAR(45) NOT NULL,
  `paymentDate` DATE NOT NULL,
  `paymentPrice` INT(11) NOT NULL,
  `paymentClientID` INT(11) NOT NULL,
  PRIMARY KEY (`paymentID`),
  INDEX `fk_payment_client1_idx` (`paymentClientID` ASC),
  CONSTRAINT `fk_payment_client1`
    FOREIGN KEY (`paymentClientID`)
    REFERENCES `metropol`.`client` (`clientID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 18
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`work`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`work` (
  `workID` INT(11) NOT NULL AUTO_INCREMENT,
  `workName` VARCHAR(30) NOT NULL,
  `workPeriod` VARCHAR(20) NULL DEFAULT NULL,
  PRIMARY KEY (`workID`))
ENGINE = InnoDB
AUTO_INCREMENT = 6
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`worker`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`worker` (
  `workerID` INT(11) NOT NULL AUTO_INCREMENT,
  `workerSurname` VARCHAR(20) NOT NULL,
  `workerName` VARCHAR(15) NOT NULL,
  `workerForename` VARCHAR(15) NOT NULL,
  `workerPosada` VARCHAR(45) NOT NULL,
  `workerStat` ENUM('Чоловіча', 'Жіноча') NOT NULL,
  `workerBirthdate` DATE NOT NULL,
  `workerAddress` VARCHAR(60) NOT NULL,
  `workerPhone` VARCHAR(16) NOT NULL,
  `workerGraphic` VARCHAR(30) NOT NULL,
  PRIMARY KEY (`workerID`))
ENGINE = InnoDB
AUTO_INCREMENT = 7
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `metropol`.`workinnomer`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `metropol`.`workinnomer` (
  `workInNomerID` INT(11) NOT NULL AUTO_INCREMENT,
  `workInNomerNomerID` INT(11) NOT NULL,
  `workInNomerWorkID` INT(11) NOT NULL,
  `workInNomerDateTime` DATETIME NOT NULL,
  `workInNomerEnd` ENUM('YES', 'NO') NOT NULL,
  `workInNomerWorkerID` INT(11) NOT NULL,
  PRIMARY KEY (`workInNomerID`),
  INDEX `fk_nomer_has_work_work1_idx` (`workInNomerWorkID` ASC),
  INDEX `fk_nomer_has_work_nomer1_idx` (`workInNomerNomerID` ASC),
  INDEX `fk_workInNomer_worker1_idx` (`workInNomerWorkerID` ASC),
  CONSTRAINT `fk_nomer_has_work_nomer1`
    FOREIGN KEY (`workInNomerNomerID`)
    REFERENCES `metropol`.`nomer` (`nomerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_nomer_has_work_work1`
    FOREIGN KEY (`workInNomerWorkID`)
    REFERENCES `metropol`.`work` (`workID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_workInNomer_worker1`
    FOREIGN KEY (`workInNomerWorkerID`)
    REFERENCES `metropol`.`worker` (`workerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 4
DEFAULT CHARACTER SET = utf8;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
